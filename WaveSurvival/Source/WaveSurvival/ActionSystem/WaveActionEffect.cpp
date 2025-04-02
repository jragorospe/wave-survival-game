// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveActionEffect.h"

#include "WaveActionComponent.h"
#include "GameFramework/GameStateBase.h"


UWaveActionEffect::UWaveActionEffect()
{
	bAutoStart = true;

	Duration = 0.0f;
	Period = 0.0f;
}

void UWaveActionEffect::StartAction_Implementation(AActor* Instigator)
{
	Super::StartAction_Implementation(Instigator);

	if (Duration > 0.0f)
	{
		FTimerDelegate Delegate;
		Delegate.BindUObject(this, &ThisClass::StopAction, Instigator);

		GetWorld()->GetTimerManager().SetTimer(DurationHandle, Delegate, Duration, false);
	}

	if (Period > 0.0f)
	{
		FTimerDelegate Delegate;
		Delegate.BindUObject(this, &ThisClass::ExecutePeriodicEffect, Instigator);
		
		GetWorld()->GetTimerManager().SetTimer(PeriodHandle, Delegate, Period, true);
	}
}

void UWaveActionEffect::StopAction_Implementation(AActor* Instigator)
{
	Super::StopAction_Implementation(Instigator);

	if (GetWorld()->GetTimerManager().GetTimerRemaining(PeriodHandle) < KINDA_SMALL_NUMBER)
	{
		ExecutePeriodicEffect(Instigator);
	}

	GetWorld()->GetTimerManager().ClearTimer(PeriodHandle);
	GetWorld()->GetTimerManager().ClearTimer(DurationHandle);
	
	if (UWaveActionComponent* const Comp = GetOwningComponent())
	{
		Comp->RemoveAction(this);
	}
}

float UWaveActionEffect::GetTimeRemaining() const
{
	if (const AGameStateBase* const GS = GetWorld()->GetGameState<AGameStateBase>())
	{
		const float EndTime = TimeStarted + Duration;
		return EndTime - GS->GetServerWorldTimeSeconds();
	}

	return Duration;
}

void UWaveActionEffect::ExecutePeriodicEffect_Implementation(AActor* Instigator)
{
	// Implemented in child classes
}
