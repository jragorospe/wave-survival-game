// Fill out your copyright notice in the Description page of Project Settings.


#include "WavePickupActor_HealthPotion.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"


void AWavePickupActor_HealthPotion::Interact_Implementation(APawn* InstigatorPawn)
{
	if (!ensure(InstigatorPawn))
	{
		return;
	}

	UWaveAttributeComponent* AttributeComp = InstigatorPawn->FindComponentByClass<UWaveAttributeComponent>();
	if (ensure(AttributeComp) && !AttributeComp->IsFullHealth())
	{
		if (AttributeComp->ApplyHealthChange(this, AttributeComp->GetHealthMax()))
		{
			HideAndCooldown();
		}
	}
}

FText AWavePickupActor_HealthPotion::GetInteractText_Implementation(APawn* InstigatorPawn)
{
	UWaveAttributeComponent* AttributeComp = InstigatorPawn->FindComponentByClass<UWaveAttributeComponent>();
	if (ensure(AttributeComp) && AttributeComp->IsFullHealth())
	{
		return FText::FromString("Already at Full Health");
	}

	return FText::FromString("Restores Health to Max");
}