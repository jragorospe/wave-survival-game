// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaveProjectile.h"
#include "WaveProjectile_BlackHole.generated.h"


class UWaveActionEffect;


/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API AWaveProjectile_BlackHole : public AWaveProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float Radius;
	
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageMultiplier;
	
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageInterval;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UDecalComponent> DecalComp;

	UFUNCTION()
	void ApplyTickDamage(AActor* OtherActor) const;
	
	void AdjustDecalLocationToSurface();

public:
	virtual void BeginPlay() override;
	
	virtual void PostInitializeComponents() override;

	virtual void Tick(float DeltaSeconds) override;

	AWaveProjectile_BlackHole();
};
