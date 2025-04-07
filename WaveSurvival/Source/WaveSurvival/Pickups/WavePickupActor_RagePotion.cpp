// Fill out your copyright notice in the Description page of Project Settings.


#include "WavePickupActor_RagePotion.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"


void AWavePickupActor_RagePotion::Interact_Implementation(APawn* InstigatorPawn)
{
	if (!ensure(InstigatorPawn))
	{
		return;
	}

	UWaveAttributeComponent* AttributeComp = InstigatorPawn->FindComponentByClass<UWaveAttributeComponent>();
	if (ensure(AttributeComp) && !AttributeComp->IsFullRage())
	{
		if (AttributeComp->ApplyRage(this, AttributeComp->GetRageMax()))
		{
			HideAndCooldown();
		}
	}
}

FText AWavePickupActor_RagePotion::GetInteractText_Implementation(APawn* InstigatorPawn)
{
	UWaveAttributeComponent* AttributeComp = InstigatorPawn->FindComponentByClass<UWaveAttributeComponent>();
	if (ensure(AttributeComp) && AttributeComp->IsFullRage())
	{
		return FText::FromString("Already at Max Rage");
	}

	return FText::FromString("Grants Max Rage");
}