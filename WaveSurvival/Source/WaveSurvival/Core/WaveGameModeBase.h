// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "GameFramework/GameMode.h"
#include "WaveGameModeBase.generated.h"


class AWaveAICharacter;
class UEnvQuery;


USTRUCT(BlueprintType)
struct FMonsterInfoRow : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FPrimaryAssetId MonsterId;
};


/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API AWaveGameModeBase : public AGameMode
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	TObjectPtr<UDataTable> MonsterTable;
	
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	TObjectPtr<UEnvQuery> SpawnBotQuery;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	TObjectPtr<UCurveFloat> MaxBoxSpawnCurve;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	TSubclassOf<AWaveAICharacter> EnemyClass;
	
	float AvailableSpawnCredit = 0;
	
	UFUNCTION()
	void RespawnPlayerElapsed(AController* Controller);

	FTimerHandle TimerHandle_SpawnBots;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	float SpawnTimerInterval;

	void StartSpawningBots();
	
	void SpawnBotTimerElapsed();
	
	void OnBotSpawnQueryCompleted(TSharedPtr<FEnvQueryResult> Result, FMonsterInfoRow* InSelectedRow);

	void OnMonsterLoaded(FPrimaryAssetId LoadedId, FVector SpawnLocation);

public:
	virtual void StartPlay() override;
	
	virtual void OnActorKilled(AActor* VictimActor, AActor* Killer);

	AWaveGameModeBase();
};
