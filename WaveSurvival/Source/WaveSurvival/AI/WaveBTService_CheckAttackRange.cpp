// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveBTService_CheckAttackRange.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"


UWaveBTService_CheckAttackRange::UWaveBTService_CheckAttackRange()
{
	MaxAttackRange = 2000.f;
	TargetActorKey.SelectedKeyName = "TargetActor";
	AttackRangeKey.SelectedKeyName = "bWithinAttackRange";
}

void UWaveBTService_CheckAttackRange::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	
	UBlackboardComponent* BlackBoardComp = OwnerComp.GetBlackboardComponent();
	check(BlackBoardComp);
	
	AActor* TargetActor = Cast<AActor>(BlackBoardComp->GetValueAsObject(TargetActorKey.SelectedKeyName));
	if (TargetActor)
	{
		AAIController* MyController = OwnerComp.GetAIOwner();
		check(MyController);

		FVector Center = MyController->GetPawn()->GetActorLocation();
		
		const float DistanceTo = FVector::Distance(TargetActor->GetActorLocation(), Center);
		const bool bWithinRange = DistanceTo < MaxAttackRange;

		bool bHasLOS = false;
		if (bWithinRange)
		{
			bHasLOS = MyController->LineOfSightTo(TargetActor);
		}

		BlackBoardComp->SetValueAsBool(AttackRangeKey.SelectedKeyName, (bWithinRange && bHasLOS));
	}
}

