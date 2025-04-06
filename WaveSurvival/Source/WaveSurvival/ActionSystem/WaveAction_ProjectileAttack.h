// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaveAction.h"
#include "WaveAction_ProjectileAttack.generated.h"

class AWavePlayerCharacter;


/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API UWaveAction_ProjectileAttack : public UWaveAction
{
	GENERATED_BODY()

protected:
	/* Sphere radius of the sweep to find desired target under crosshair. Adjusts final projectile direction */
	UPROPERTY(EditAnywhere, Category = "Targeting")
	float SweepRadius;

	/* Fallback distance when sweep finds no collision under crosshair. Adjusts final projectile direction */
	UPROPERTY(EditAnywhere, Category = "Targeting")
	float SweepDistanceFallback;

	UPROPERTY(EditDefaultsOnly, Category = "Targeting")
	TEnumAsByte<ECollisionChannel> CollisionChannel;
	
	UPROPERTY(EditAnywhere, Category = "Attack")
	TSubclassOf<AActor> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	FName HandSocketName;

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	float AttackAnimDelay;
	
	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<UAnimMontage> AttackAnim;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<UParticleSystem> CastingEffect;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TObjectPtr<USoundBase> CastingSound;

	UFUNCTION()
	void AttackDelay_Elapsed(AWavePlayerCharacter* InstigatorCharacter);
	
public:
	virtual void StartAction_Implementation(AActor* Instigator) override;

	UWaveAction_ProjectileAttack();
};
