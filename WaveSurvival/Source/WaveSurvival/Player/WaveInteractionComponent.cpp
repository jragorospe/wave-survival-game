// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveInteractionComponent.h"

#include "Engine/OverlapResult.h"
#include "WaveSurvival/Core/WaveGameplayInterface.h"
#include "WaveSurvival/UI/WaveWorldUserWidget.h"


UWaveInteractionComponent::UWaveInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
	TraceRadius = 45.0f;
	TraceChannel = ECC_WorldDynamic;
}

void UWaveInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	const APawn* const MyPawn = CastChecked<APawn>(GetOwner());
	if (MyPawn->IsLocallyControlled())
	{
		FindBestInteractable();
	}
}

void UWaveInteractionComponent::FindBestInteractable()
{
	const UWorld* const World = GetWorld();

	const FVector TraceOrigin = GetOwner()->GetActorLocation();
	
	TArray<FOverlapResult> Overlaps;
	World->OverlapMultiByChannel(Overlaps, TraceOrigin, FQuat::Identity, TraceChannel, FCollisionShape::MakeSphere(TraceRadius));

	const APawn* const OwningPawn = Cast<APawn>(GetOwner());
	const AController* const OwningController = OwningPawn->GetController();
	check(OwningController);
	
	FocusedActor = nullptr;
	float HighestWeight = -MAX_flt;

	// Calculate 'weights' to find the best interactable which the player most likely intends to focus based on angle
	for (const FOverlapResult& Overlap : Overlaps)
	{
		if (AActor* HitActor = Overlap.GetActor())
		{
			if (HitActor->Implements<UWaveGameplayInterface>())
			{
				FVector ObjectDir = (HitActor->GetActorLocation() - TraceOrigin).GetUnsafeNormal();
				
				const float DotResult = FVector::DotProduct(ObjectDir, OwningController->GetControlRotation().Vector());
				const float Weight = DotResult * 10.f;
				
				if (HighestWeight < Weight)
				{
					FocusedActor = HitActor;
					HighestWeight = Weight;
				}
			}
		}
	}

	if (FocusedActor)
	{
		if (WidgetInstance == nullptr && ensure(DefaultWidgetClass))
		{
			WidgetInstance = CreateWidget<UWaveWorldUserWidget>(GetWorld(), DefaultWidgetClass);
		}

		if (WidgetInstance)
		{
			WidgetInstance->AttachedActor = FocusedActor;

			if (!WidgetInstance->GetParent())
			{
				UWaveWorldUserWidget::AddToRootCanvasPanel(WidgetInstance);
			}
		}
	}
	else
	{
		if (WidgetInstance)
		{
			WidgetInstance->RemoveFromParent();
		}
	}
}

void UWaveInteractionComponent::PrimaryInteract()
{
	ServerInteract(FocusedActor);
}

void UWaveInteractionComponent::ServerInteract_Implementation(AActor* InFocus)
{
	if (InFocus == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "No Focus Actor to interact.");
		return;
	}
	
	APawn* MyPawn = CastChecked<APawn>(GetOwner());
	IWaveGameplayInterface::Execute_Interact(InFocus, MyPawn);
}
