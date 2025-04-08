// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/Blackboard/BlackboardKey.h"
#include "WaveAIController.generated.h"


class UBehaviorTree;
class UAIPerceptionComponent;


/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API AWaveAIController : public AAIController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	TObjectPtr<UBehaviorTree> BehaviorTree;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAIPerceptionComponent> PerceptionComp;

	virtual void BeginPlay() override;

public:
	AWaveAIController();
};
