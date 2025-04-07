// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveActionComponent.h"
#include "WaveAction.h"
#include "Logging/StructuredLog.h"
#include "Net/UnrealNetwork.h"


UWaveActionComponent::UWaveActionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}

void UWaveActionComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* const Owner = GetOwner();
	if (!Owner->HasAuthority())
	{
		return;
	}

	for (const TSubclassOf<UWaveAction> ActionClass : DefaultActions)
	{
		AddAction(Owner, ActionClass);
	}
}

void UWaveActionComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	StopAllActions();
	
	Super::EndPlay(EndPlayReason);
}

void UWaveActionComponent::AddAction(AActor* Instigator, TSubclassOf<UWaveAction> ActionClass)
{
	if (!ensure(ActionClass))
	{
		return;
	}

	AActor* const Owner = GetOwner();
	if (!Owner->HasAuthority())
	{
		UE_LOGFMT(LogTemp, Warning, "Client attempting to AddAction. [Class: {Class}]", GetNameSafe(ActionClass));
		return;
	}

	UWaveAction* NewAction = NewObject<UWaveAction>(Owner, ActionClass);
	check(NewAction);

	NewAction->Initialize(this);

	Actions.Add(NewAction);

	AddReplicatedSubObject(NewAction);

	if (NewAction->IsAutoStart() && ensure(NewAction->CanStart(Instigator)))
	{
		NewAction->StartAction(Instigator);
	}
}

void UWaveActionComponent::RemoveAction(UWaveAction* ActionToRemove)
{
	if (!ensure(ActionToRemove && !ActionToRemove->IsRunning()))
	{
		return;
	}

	RemoveReplicatedSubObject(ActionToRemove);

	Actions.Remove(ActionToRemove);
}

UWaveAction* UWaveActionComponent::GetAction(TSubclassOf<UWaveAction> ActionClass) const
{
	for (UWaveAction* Action : Actions)
	{
		if (Action->IsA(ActionClass))
		{
			return Action;
		}
	}

	return nullptr;
}

bool UWaveActionComponent::StartActionByName(AActor* Instigator, FGameplayTag ActionName)
{
	const AActor* const Owner = GetOwner();
	
	for (UWaveAction* const Action : Actions)
	{
		if (Action == nullptr)
		{
			continue;
		}
		
		if (Action->GetActivationTag() != ActionName)
		{
			continue;
		}

		if (!Action->CanStart(Instigator))
		{
			FString FailedMessage = FString::Printf(TEXT("Failed to run: %s"), *ActionName.ToString());
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FailedMessage);
			continue;
		}

		if (!Owner->HasAuthority())
		{
			ServerStartAction(Instigator, ActionName);
		}

		Action->StartAction(Instigator);

		return true;
	}

	return false;
}

bool UWaveActionComponent::StopActionByName(AActor* Instigator, FGameplayTag ActionName)
{
	const AActor* const Owner = GetOwner();
	
	for (UWaveAction* const Action : Actions)
	{
		if (Action == nullptr)
		{
			continue;
		}
		
		if (Action->GetActivationTag() != ActionName)
		{
			continue;
		}

		if (!Action->IsRunning())
		{
			continue;
		}

		if (!Owner->HasAuthority())
		{
			ServerStopAction(Instigator, ActionName);
		}

		Action->StopAction(Instigator);

		return true;
	}

	return false;
}

void UWaveActionComponent::StopAllActions() const
{
	AActor* const Owner = GetOwner();
	
	TArray<UWaveAction*> ActionsCopy = Actions;
	for (UWaveAction* const Action : ActionsCopy)
	{
		if (Action == nullptr)
		{
			continue;
		}
		
		if (Action->IsRunning())
		{
			Action->StopAction(Owner);
		}
	}
}

void UWaveActionComponent::ServerStartAction_Implementation(AActor* Instigator, FGameplayTag ActionName)
{
	StartActionByName(Instigator, ActionName);
}

void UWaveActionComponent::ServerStopAction_Implementation(AActor* Instigator, FGameplayTag ActionName)
{
	StopActionByName(Instigator, ActionName);
}

void UWaveActionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWaveActionComponent, Actions);
}
