// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaveProjectile.h"
#include "WaveProjectile_Dash.generated.h"

/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API AWaveProjectile_Dash : public AWaveProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Teleport")
	float TeleportDelay;

	UPROPERTY(EditDefaultsOnly, Category = "Teleport")
	float DetonateDelay;
	
	FTimerHandle TimerHandle_DelayedDetonate;
	
	virtual void Explode_Implementation() override;

	void TeleportInstigator();

	virtual void BeginPlay() override;

public:
	AWaveProjectile_Dash();
};
