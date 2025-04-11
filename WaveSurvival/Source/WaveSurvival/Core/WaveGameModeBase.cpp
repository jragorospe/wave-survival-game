// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveGameModeBase.h"

#include "EngineUtils.h"
#include "WaveMonsterData.h"
#include "Engine/AssetManager.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "Logging/StructuredLog.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"
#include "WaveSurvival/AI/WaveAICharacter.h"
#include "WaveSurvival/Player/WavePlayerCharacter.h"


AWaveGameModeBase::AWaveGameModeBase()
{
	SpawnTimerInterval = 2.0f;
}

void AWaveGameModeBase::StartPlay()
{
	Super::StartPlay();

	StartSpawningBots();
}

void AWaveGameModeBase::StartSpawningBots()
{
	GetWorldTimerManager().SetTimer(TimerHandle_SpawnBots, this, &AWaveGameModeBase::SpawnBotTimerElapsed, SpawnTimerInterval, true);
}

void AWaveGameModeBase::SpawnBotTimerElapsed()
{
	int32 NrOfAliveBots = 0;
	for (AWaveAICharacter* Bot : TActorRange<AWaveAICharacter>(GetWorld()))
	{
		UWaveAttributeComponent* AttributeComp = Bot->GetComponentByClass<UWaveAttributeComponent>();
		if (AttributeComp && AttributeComp->IsAlive())
		{
			NrOfAliveBots++;
		}
	}

	float MaxBotCount = 10.0f;
	if (MaxBoxSpawnCurve)
	{
		MaxBotCount = MaxBoxSpawnCurve->GetFloatValue(GetWorld()->TimeSeconds);
	}
	
	if (NrOfAliveBots >= MaxBotCount)
	{
		return;
	}
	
	if (!ensure(MonsterTable))
	{
		return;
	}
	
	TArray<FMonsterInfoRow*> Rows;
	MonsterTable->GetAllRows("", Rows);

	const int32 RandomIndex = FMath::RandRange(0, Rows.Num() - 1);
	FMonsterInfoRow* SelectedRow = Rows[RandomIndex]; 

	FEnvQueryRequest Request(SpawnBotQuery, this);
	FQueryFinishedSignature FinishedDelegate = FQueryFinishedSignature::CreateUObject(this, &AWaveGameModeBase::OnBotSpawnQueryCompleted, SelectedRow);
	Request.Execute(EEnvQueryRunMode::RandomBest5Pct, FinishedDelegate);
}

void AWaveGameModeBase::OnBotSpawnQueryCompleted(TSharedPtr<FEnvQueryResult> Result, FMonsterInfoRow* InSelectedRow)
{
	FEnvQueryResult* QueryResult = Result.Get();
	if (!QueryResult->IsSuccessful())
	{
		UE_LOGFMT(LogTemp, Warning, "Spawn bot EQS Query Failed!");
		return;
	}
	
	TArray<FVector> Locations;
	QueryResult->GetAllAsLocations(Locations);

	if (Locations.IsValidIndex(0) && MonsterTable)
	{
		UAssetManager& Manager = UAssetManager::Get();

		FPrimaryAssetId MonsterId = InSelectedRow->MonsterId;

		TArray<FName> Bundles;
		FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &AWaveGameModeBase::OnMonsterLoaded, MonsterId, Locations[0]);
		Manager.LoadPrimaryAsset(MonsterId, Bundles, Delegate);
	}
}

void AWaveGameModeBase::OnMonsterLoaded(FPrimaryAssetId LoadedId, FVector SpawnLocation)
{
	UAssetManager& Manager = UAssetManager::Get();

	UWaveMonsterData* MonsterData = CastChecked<UWaveMonsterData>(Manager.GetPrimaryAssetObject(LoadedId));
	
	AActor* NewBot = GetWorld()->SpawnActor<AActor>(MonsterData->MonsterClass, SpawnLocation, FRotator::ZeroRotator);
	if (NewBot)
	{
		UWaveActionComponent* ActionComp = NewBot->FindComponentByClass<UWaveActionComponent>();
		check(ActionComp);
		
		for (const TSubclassOf<UWaveAction> ActionClass : MonsterData->Actions)
		{
			ActionComp->AddAction(NewBot, ActionClass);
		}
	}
}

void AWaveGameModeBase::RespawnPlayerElapsed(AController* Controller)
{
	if (ensure(Controller))
	{
		Controller->UnPossess();

		RestartPlayer(Controller);
	}
}

void AWaveGameModeBase::OnActorKilled(AActor* VictimActor, AActor* Killer)
{
	UE_LOGFMT(LogTemp, Log, "OnActorKilled: Victim: {victim}, Killer: {killer}", GetNameSafe(VictimActor), GetNameSafe(Killer));
	
	if (AWavePlayerCharacter* Player = Cast<AWavePlayerCharacter>(VictimActor))
	{
		FTimerHandle TimerHandle_RespawnDelay;
		FTimerDelegate Delegate;
		Delegate.BindUObject(this, &ThisClass::RespawnPlayerElapsed, Player->GetController());
 
		constexpr float RespawnDelay = 2.0f;
		GetWorldTimerManager().SetTimer(TimerHandle_RespawnDelay, Delegate, RespawnDelay, false);
	}
}