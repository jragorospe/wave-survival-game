// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAction_ProjectileAttack.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "WaveSurvival/Player/WavePlayerCharacter.h"


UWaveAction_ProjectileAttack::UWaveAction_ProjectileAttack()
{
	HandSocketName = "Muzzle_01";
	AttackAnimDelay = 0.2f;
	
	SweepRadius = 20.0f;
	SweepDistanceFallback = 5000;
}

void UWaveAction_ProjectileAttack::StartAction_Implementation(AActor* Instigator)
{
	Super::StartAction_Implementation(Instigator);

	AWavePlayerCharacter* Character = CastChecked<AWavePlayerCharacter>(Instigator);
	if (Character == nullptr)
	{
		return;
	}

	Character->PlayAnimMontage(AttackAnim);
	
	UGameplayStatics::SpawnEmitterAttached(CastingEffect, Character->GetMesh(), HandSocketName, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::SnapToTarget);
	
	Character->PlayAttackSound(CastingSound);

	if (Character->HasAuthority())
	{
		FTimerHandle TimerHandle_AttackDelay;
		FTimerDelegate Delegate;
		Delegate.BindUObject(this, &ThisClass::AttackDelay_Elapsed, Character);

		GetWorld()->GetTimerManager().SetTimer(TimerHandle_AttackDelay, Delegate, AttackAnimDelay, false);
	}
	
	FTimerHandle TimerHandle_AttackDelay;
	FTimerDelegate Delegate;
	Delegate.BindUFunction(this, "AttackDelay_Elapsed", Character);

	GetWorld()->GetTimerManager().SetTimer(TimerHandle_AttackDelay, Delegate, AttackAnimDelay, false);
}

void UWaveAction_ProjectileAttack::AttackDelay_Elapsed(AWavePlayerCharacter* InstigatorCharacter)
{
	if (!ensureAlways(ProjectileClass))
	{
		StopAction(InstigatorCharacter);
		return;
	}

	FVector HandLocation = InstigatorCharacter->GetMesh()->GetSocketLocation(HandSocketName);

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = InstigatorCharacter;

	FCollisionShape Shape;
	Shape.SetSphere(SweepRadius);

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(InstigatorCharacter);
	
	FVector TraceDirection = InstigatorCharacter->GetControlRotation().Vector();
	FVector TraceStart = InstigatorCharacter->GetPawnViewLocation() + (TraceDirection * SweepRadius);
	FVector TraceEnd = TraceStart + (TraceDirection * SweepDistanceFallback);
	FVector AdjustedTraceEnd = TraceEnd;

	TArray<FHitResult> Hits;
	if (GetWorld()->SweepMultiByChannel(Hits, TraceStart, TraceEnd, FQuat::Identity, CollisionChannel, Shape, Params))
	{
		AdjustedTraceEnd = Hits[0].ImpactPoint;
	}
	
	FRotator ProjRotation = (AdjustedTraceEnd - HandLocation).Rotation();
	FTransform SpawnTM = FTransform(ProjRotation, HandLocation);
	
	GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParams);

	StopAction(InstigatorCharacter);
}

