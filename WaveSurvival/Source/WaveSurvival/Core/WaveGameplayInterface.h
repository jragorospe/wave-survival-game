// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WaveGameplayInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UWaveGameplayInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class WAVESURVIVAL_API IWaveGameplayInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FText GetInteractText(APawn* InstigatorPawn);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(APawn* InstigatorPawn);
};
