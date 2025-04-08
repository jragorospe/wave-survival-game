// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaveSurvival/ActionSystem/WaveAction.h"
#include "WaveAction_MinionRangedAttack.generated.h"

/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API UWaveAction_MinionRangedAttack : public UWaveAction
{
	GENERATED_BODY()

protected:
	/* Max Random Bullet Spread (in Degrees) in positive and negative angle (shared between Yaw and Pitch) */
	UPROPERTY(EditAnywhere, Category = "Attack")
	float MaxBulletSpread = 2.0f;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TSubclassOf<AActor> ProjectileClass;

	virtual void StartAction_Implementation(AActor* Instigator) override;
};
