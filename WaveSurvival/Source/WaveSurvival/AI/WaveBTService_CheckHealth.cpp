// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveBTService_CheckHealth.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"


UWaveBTService_CheckHealth::UWaveBTService_CheckHealth()
{
	LowHealthFraction = 0.5f;
	LowHealthKey.SelectedKeyName = "bLowHealth";
}

void UWaveBTService_CheckHealth::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* AIPawn = OwnerComp.GetAIOwner()->GetPawn();
	check(AIPawn);

	UWaveAttributeComponent* AttributeComp = AIPawn->GetComponentByClass<UWaveAttributeComponent>();
	check(AttributeComp);

	const float Health = AttributeComp->GetHealth();
	const float HealthMax = AttributeComp->GetHealthMax();

	const bool bLowHealth = (Health / HealthMax) < LowHealthFraction;

	UBlackboardComponent* BlackBoardComp = OwnerComp.GetBlackboardComponent();
	BlackBoardComp->SetValueAsBool(LowHealthKey.SelectedKeyName, bLowHealth);
}


