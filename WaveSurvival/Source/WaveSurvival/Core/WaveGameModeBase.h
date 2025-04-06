// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "WaveGameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API AWaveGameModeBase : public AGameMode
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void RespawnPlayerElapsed(AController* Controller);

public:
	virtual void OnActorKilled(AActor* VictimActor, AActor* Killer);
};
