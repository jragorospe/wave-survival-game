// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveGameModeBase.h"
#include "Logging/StructuredLog.h"
#include "WaveSurvival/Player/WavePlayerCharacter.h"


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
