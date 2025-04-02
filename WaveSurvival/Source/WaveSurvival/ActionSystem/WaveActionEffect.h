// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaveAction.h"
#include "WaveActionEffect.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class WAVESURVIVAL_API UWaveActionEffect : public UWaveAction
{
	GENERATED_BODY()

public:
	UWaveActionEffect();

	UFUNCTION(BlueprintCallable, Category = "Action")
	float GetTimeRemaining() const;
	
	virtual void StartAction_Implementation(AActor* Instigator) override;
	
	virtual void StopAction_Implementation(AActor* Instigator) override;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effect")
	float Duration;

	// Time between 'ticks' to apply effect
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effect")
	float Period;

	FTimerHandle DurationHandle;
	FTimerHandle PeriodHandle;

	UFUNCTION(BlueprintNativeEvent, Category = "Effect")
	void ExecutePeriodicEffect(AActor* Instigator);
};
