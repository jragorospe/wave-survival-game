// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaveAction.h"
#include "WaveAction_HitScanAttack.generated.h"


class AWavePlayerCharacter;
class UNiagaraComponent;
class UNiagaraSystem;

USTRUCT(Blueprintable)
struct FHitScanData
{
	GENERATED_BODY()

	UPROPERTY()
	FVector HitStart;

	UPROPERTY(BlueprintReadOnly)
	FVector HitEnd;

	UPROPERTY()
	TObjectPtr<AActor> HitActor;

	FHitScanData()
	{
		HitStart = FVector::ZeroVector;
		HitEnd = FVector::ZeroVector;
		HitActor = nullptr;
	}

	FHitScanData(const FVector& InHitStart, const FVector& InHitEnd, AActor* InHitActor)
		: HitStart(InHitStart), HitEnd(InHitEnd), HitActor(InHitActor)
	{
	}
};

/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API UWaveAction_HitScanAttack : public UWaveAction
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void MulticastSpawnHitScanEffects(AWavePlayerCharacter* InstigatorCharacter, const FHitScanData& InHitScanData);

protected:
	/* Sphere radius of the sweep to find desired target under crosshair. Adjusts final projectile direction */
	UPROPERTY(EditAnywhere, Category = "Targeting")
	float SweepRadius;
	
	UPROPERTY(EditAnywhere, Category = "Targeting")
	float HitScanLength;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageMultiplier;

	UPROPERTY(EditDefaultsOnly, Category = "Targeting")
	TEnumAsByte<ECollisionChannel> CollisionChannel;

	UPROPERTY(VisibleAnywhere, Category = "Effects")
	FName HandSocketName;
	
	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	float AttackAnimDelay;
	
	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<UAnimMontage> AttackAnim;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<UParticleSystem> CastingEffect;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<USoundBase> CastingSound;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<UNiagaraSystem> BulletTracerEffect;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UNiagaraComponent> BulletTracerEffectInstance;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TObjectPtr<UParticleSystem> ImpactVFX;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TObjectPtr<USoundBase> ImpactSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Effects")
	FName TracerEffectParamName;

	UFUNCTION()
	void RunHitScan(AWavePlayerCharacter* InstigatorCharacter, bool bIsLocal, FHitScanData& OutHitScanData);
	
	UFUNCTION()
	void AttackDelay_Elapsed(AWavePlayerCharacter* InstigatorCharacter);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SpawnHitScanEffects(AWavePlayerCharacter* InstigatorCharacter, const FHitScanData& InHitScanData);
	
public:
	virtual void StartAction_Implementation(AActor* Instigator) override;

	UWaveAction_HitScanAttack();
};
