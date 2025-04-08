// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveBTTask_StartAction.h"
#include "AIController.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"


EBTNodeResult::Type UWaveBTTask_StartAction::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	APawn* MyPawn = OwnerComp.GetAIOwner()->GetPawn();
	check(MyPawn);
	
	UWaveActionComponent* ActionComp = MyPawn->FindComponentByClass<UWaveActionComponent>();
	check(ActionComp);
	
	if (ActionComp->StartActionByName(MyPawn, ActionName))
	{
		return EBTNodeResult::Succeeded;
	}
	
	return EBTNodeResult::Failed;
}
