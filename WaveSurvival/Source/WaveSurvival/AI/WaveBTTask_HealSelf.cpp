// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveBTTask_HealSelf.h"
#include "AIController.h"
#include "WaveSurvival/SharedGameplayTags.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"


EBTNodeResult::Type UWaveBTTask_HealSelf::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	APawn* MyPawn = OwnerComp.GetAIOwner()->GetPawn();

	UWaveAttributeComponent* AttributeComponent = MyPawn->GetComponentByClass<UWaveAttributeComponent>();
	check (AttributeComponent);

	const float MaxHealth = AttributeComponent->GetHealthMax();
	AttributeComponent->ApplyHealthChange(MyPawn, MaxHealth);

	return EBTNodeResult::Succeeded;
}
