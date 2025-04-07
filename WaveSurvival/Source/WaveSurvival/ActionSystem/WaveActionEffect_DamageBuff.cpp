// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveActionEffect_DamageBuff.h"
#include "WaveAttributeComponent.h"


UWaveActionEffect_DamageBuff::UWaveActionEffect_DamageBuff()
{
	Duration = 10.0f;
	Period = 0.0f;

	DamageMultiplier = 2.0f;
}

void UWaveActionEffect_DamageBuff::StartAction_Implementation(AActor* Instigator)
{
	Super::StartAction_Implementation(Instigator);

	if (UWaveAttributeComponent* AttributeComp = Instigator->FindComponentByClass<UWaveAttributeComponent>())
	{
		AttributeComp->ApplyDamageMultiplier(Instigator, DamageMultiplier);
	}
}

void UWaveActionEffect_DamageBuff::StopAction_Implementation(AActor* Instigator)
{
	Super::StopAction_Implementation(Instigator);

	if (UWaveAttributeComponent* AttributeComp = Instigator->FindComponentByClass<UWaveAttributeComponent>())
	{
		AttributeComp->RevertToBaseDamage(Instigator);
	}
}
