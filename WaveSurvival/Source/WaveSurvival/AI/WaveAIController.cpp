// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AIPerceptionComponent.h"


AWaveAIController::AWaveAIController()
{
	PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
}

void AWaveAIController::BeginPlay()
{
	Super::BeginPlay();

	SetGenericTeamId(FGenericTeamId(1));

	if (ensureMsgf(BehaviorTree, TEXT("Behavior Tree is nullptr! Please assign BehaviorTree in your AI Controller.")))
	{
		RunBehaviorTree(BehaviorTree);
	}
	
	UBlackboardComponent* BBComp = GetBlackboardComponent();
	BBComp->SetValueAsObject("TargetActor", UGameplayStatics::GetPlayerPawn(this, 0));
}




