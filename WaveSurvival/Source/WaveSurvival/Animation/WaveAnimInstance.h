// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WaveAnimInstance.generated.h"

class UWaveActionComponent;
/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API UWaveAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	TObjectPtr<UWaveActionComponent> ActionComp;

	virtual void NativeInitializeAnimation() override;
};
