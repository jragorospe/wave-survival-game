// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AIPerceptionComponent.h"


constexpr int32 ENEMY_TEAM_ID = 1;


AWaveAIController::AWaveAIController()
{
	PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
}

void AWaveAIController::BeginPlay()
{
	Super::BeginPlay();

	SetGenericTeamId(FGenericTeamId(ENEMY_TEAM_ID));

	if (ensureMsgf(BehaviorTree, TEXT("Behavior Tree is nullptr! Please assign BehaviorTree in your AI Controller.")))
	{
		RunBehaviorTree(BehaviorTree);
	}

	PerceptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &AWaveAIController::OnPerceptionUpdated);
}

void AWaveAIController::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	const IGenericTeamAgentInterface* TeamAgent = Cast<const IGenericTeamAgentInterface>(Actor);
	if (TeamAgent && TeamAgent->GetGenericTeamId() == GetGenericTeamId())
	{
		return;
	}
	
	if (UBlackboardComponent* BBComp = GetBlackboardComponent())
	{
		BBComp->SetValueAsObject("TargetActor", Actor);
	}
}
