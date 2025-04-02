// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAnimInstance.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"


void UWaveAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	AActor* OwningActor = GetOwningActor();
	check(OwningActor);

	ActionComp = OwningActor->FindComponentByClass<UWaveActionComponent>();
}
