// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAction_HitScanAttack.h"
#include "NiagaraFunctionLibrary.h"
#include "WaveActionComponent.h"
#include "WaveAttributeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "WaveSurvival/Core/WaveGameplayFunctionLibrary.h"
#include "WaveSurvival/Player/WavePlayerCharacter.h"

UWaveAction_HitScanAttack::UWaveAction_HitScanAttack()
{
	HandSocketName = "Muzzle_01";
	TracerEffectParamName = "BeamEnd";
	AttackAnimDelay = 0.2f;
	BulletTracerEffectInstance = nullptr;
	
	SweepRadius = 20.0f;
	HitScanLength = 7500.0f;
	
	DamageMultiplier = 0.8f;
}

void UWaveAction_HitScanAttack::StartAction_Implementation(AActor* Instigator)
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

	BulletTracerEffectInstance = nullptr;
	FHitScanData LocalHitScanData;
	RunHitScan(Character, true, LocalHitScanData);
	SpawnHitScanEffects(Character, LocalHitScanData);

	if (Character->HasAuthority())
	{
		FTimerHandle TimerHandle_AttackDelay;
		FTimerDelegate Delegate;
		Delegate.BindUObject(this, &ThisClass::AttackDelay_Elapsed, Character);

		GetWorld()->GetTimerManager().SetTimer(TimerHandle_AttackDelay, Delegate, AttackAnimDelay, false);
	}
}

void UWaveAction_HitScanAttack::RunHitScan(AWavePlayerCharacter* InstigatorCharacter, bool bIsLocal, FHitScanData& OutHitScanData)
{
	if (InstigatorCharacter == nullptr)
	{
		return;
	}

	if (bIsLocal && !InstigatorCharacter->IsLocallyControlled())
	{
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
	FVector TraceEnd = TraceStart + (TraceDirection * HitScanLength);
	FVector AdjustedTraceEnd = TraceEnd;

	TArray<FHitResult> Hits;
	AActor* HitActor = nullptr;
	if (GetWorld()->SweepMultiByChannel(Hits, TraceStart, TraceEnd, FQuat::Identity, CollisionChannel, Shape, Params))
	{
		AdjustedTraceEnd = Hits[0].ImpactPoint;
		
		for (const FHitResult& Hit : Hits)
		{
			HitActor = Hit.GetActor();
			if (HitActor && HitActor != InstigatorCharacter)
			{
				AdjustedTraceEnd = Hit.ImpactPoint;
				break;
			}
		}
	}

	OutHitScanData = FHitScanData(HandLocation, AdjustedTraceEnd, HitActor);
}

void UWaveAction_HitScanAttack::AttackDelay_Elapsed(AWavePlayerCharacter* InstigatorCharacter)
{
	FHitScanData HitScanData;
	RunHitScan(InstigatorCharacter, false, HitScanData);
	
	if (HitScanData.HitActor && HitScanData.HitActor->GetComponentByClass(UWaveAttributeComponent::StaticClass()))
	{
		UWaveGameplayFunctionLibrary::ApplyDamage(InstigatorCharacter, HitScanData.HitActor, DamageMultiplier);
	}

	InstigatorCharacter->SpawnHitScanEffects(this, HitScanData);
	
	StopAction(InstigatorCharacter);
}

void UWaveAction_HitScanAttack::MulticastSpawnHitScanEffects(AWavePlayerCharacter* InstigatorCharacter, const FHitScanData& InHitScanData)
{
	if (InstigatorCharacter == nullptr)
	{
		return;
	}

	if (InstigatorCharacter->IsLocallyControlled())
	{
		return;
	}

	SpawnHitScanEffects(InstigatorCharacter, InHitScanData);
}

void UWaveAction_HitScanAttack::SpawnHitScanEffects_Implementation(AWavePlayerCharacter* InstigatorCharacter, const FHitScanData& InHitScanData)
{
	if (InHitScanData.HitActor)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVFX, InHitScanData.HitEnd, InHitScanData.HitEnd.Rotation());
		UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, InHitScanData.HitEnd);
	}
	
	const FRotator ProjRotation = (InHitScanData.HitEnd - InHitScanData.HitStart).Rotation();
	BulletTracerEffectInstance = UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, BulletTracerEffect, InHitScanData.HitStart, ProjRotation);
}
