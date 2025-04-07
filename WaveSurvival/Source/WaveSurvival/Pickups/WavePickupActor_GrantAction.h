// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WavePickupActor.h"
#include "WavePickupActor_GrantAction.generated.h"


class UWaveAction;


/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API AWavePickupActor_GrantAction : public AWavePickupActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "Powerup")
	TSubclassOf<UWaveAction> ActionToGrant;

public:
	// IWaveGameplayInterface BEGIN
	virtual void Interact_Implementation(APawn* InstigatorPawn) override;
	// IWaveGameplayInterface BEGIN
};

