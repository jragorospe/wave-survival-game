// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveProjectile_BlackHole.h"

#include "Components/DecalComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "WaveSurvival/ActionSystem/WaveActionEffect.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"
#include "WaveSurvival/Core/WaveGameplayFunctionLibrary.h"


AWaveProjectile_BlackHole::AWaveProjectile_BlackHole()
{
	Radius = 800.0f;
	
	SphereComp->SetSphereRadius(Radius);
	
	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	DecalComp->DecalSize = FVector(1, Radius, Radius);
	
	InitialLifeSpan = 4.8f;
	
	MoveComp->InitialSpeed = 0.0f;

	DamageMultiplier = 0.5f;
	DamageInterval = 0.5f;
	
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = DamageInterval;
}

void AWaveProjectile_BlackHole::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::PlayWorldCameraShake(this, ImpactShake, GetActorLocation(), 0, ImpactShakeOuterRadius);

	AdjustDecalLocationToSurface();
}

void AWaveProjectile_BlackHole::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AWaveProjectile_BlackHole::AdjustDecalLocationToSurface()
{
	FHitResult HitResult;
	const FVector StartLocation = GetActorLocation();
	const FVector EndLocation = StartLocation - FVector(0, 0, 1000);

	FCollisionObjectQueryParams Params;
	Params.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldStatic);
	Params.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldDynamic);
	
	if (GetWorld()->LineTraceSingleByObjectType(HitResult, GetActorLocation(), EndLocation, Params))
	{
		DecalComp->SetWorldLocation(HitResult.Location);
	}
}

void AWaveProjectile_BlackHole::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	TArray<AActor*> OverlappingActors;
	SphereComp->GetOverlappingActors(OverlappingActors, ACharacter::StaticClass());
	for (AActor* Actor : OverlappingActors)
	{
		if (Actor == nullptr || Actor == GetInstigator())
		{
			continue;
		}

		ApplyTickDamage(Actor);
	}
}

void AWaveProjectile_BlackHole::ApplyTickDamage(AActor* OtherActor) const
{
	UWaveGameplayFunctionLibrary::ApplyDamage(GetInstigator(), OtherActor, DamageMultiplier);
}