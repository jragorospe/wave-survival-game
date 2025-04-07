// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaveActionEffect.h"
#include "WaveActionEffect_DamageBuff.generated.h"

/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API UWaveActionEffect_DamageBuff : public UWaveActionEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effect")
	float DamageMultiplier;
	
public:
	virtual void StartAction_Implementation(AActor* Instigator) override;

	virtual void StopAction_Implementation(AActor* Instigator) override;

	UWaveActionEffect_DamageBuff();
};
