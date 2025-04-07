// Fill out your copyright notice in the Description page of Project Settings.


#include "WavePickupActor_GrantAction.h"
#include "WaveSurvival/ActionSystem/WaveAction.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"


void AWavePickupActor_GrantAction::Interact_Implementation(APawn* InstigatorPawn)
{
	if (!ensureAlways(ActionToGrant))
	{
		return;
	}

	UWaveActionComponent* ActionComp = InstigatorPawn->FindComponentByClass<UWaveActionComponent>();
	check(ActionComp);
	
	if (ActionComp->GetAction(ActionToGrant))
	{
		const FString DebugMsg = FString::Printf(TEXT("Action '%s' already known."), *GetNameSafe(ActionToGrant));
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, DebugMsg);
		
		return;
	}
	
	ActionComp->AddAction(InstigatorPawn, ActionToGrant);	
	HideAndCooldown();
}
