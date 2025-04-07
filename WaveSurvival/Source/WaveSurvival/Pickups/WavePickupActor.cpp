// Fill out your copyright notice in the Description page of Project Settings.


#include "WavePickupActor.h"
#include "Blueprint/UserWidget.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "WaveSurvival/Player/WavePlayerCharacter.h"
#include "WaveSurvival/UI/WaveWorldUserWidget.h"


AWavePickupActor::AWavePickupActor()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionProfileName("Powerup");
	SphereComp->SetSphereRadius(50.0f);
	RootComponent = SphereComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeshComp->SetupAttachment(RootComponent);

	RespawnTime = 10.0f;
	bIsActive = true;
	
	bReplicates = true;
}

void AWavePickupActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnSphereOverlap);
}

void AWavePickupActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	GetWorldTimerManager().ClearAllTimersForObject(this);
}

void AWavePickupActor::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(AWavePlayerCharacter::StaticClass()))
	{
		Execute_Interact(this, CastChecked<APawn>(OtherActor));
	}
}

FText AWavePickupActor::GetInteractText_Implementation(APawn* InstigatorPawn)
{
	return FText::GetEmpty();
}

void AWavePickupActor::Interact_Implementation(APawn* InstigatorPawn)
{
	// Implement in child classes...
}

void AWavePickupActor::HideAndCooldown()
{
	SetPickupState(false);

	FTimerHandle TimerHandle_RespawnTimer;
	GetWorldTimerManager().SetTimer(TimerHandle_RespawnTimer, this, &AWavePickupActor::ShowPickup, RespawnTime);
}

void AWavePickupActor::SetPickupState(bool bNewIsActive)
{
	bIsActive = bNewIsActive;
	
	OnRep_IsActive();
}

void AWavePickupActor::OnRep_IsActive()
{
	SetActorEnableCollision(bIsActive);

	RootComponent->SetVisibility(bIsActive, true);
}

void AWavePickupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWavePickupActor, bIsActive);
}
