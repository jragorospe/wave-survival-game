// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WavePickupActor.h"
#include "WavePickupActor_HealthPotion.generated.h"

/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API AWavePickupActor_HealthPotion : public AWavePickupActor
{
	GENERATED_BODY()

public:
	// IWaveGameplayInterface BEGIN
	virtual FText GetInteractText_Implementation(APawn* InstigatorPawn) override;
	virtual void Interact_Implementation(APawn* InstigatorPawn) override;
	// IWaveGameplayInterface BEGIN
};
