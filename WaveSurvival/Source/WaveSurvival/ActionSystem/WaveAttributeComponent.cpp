// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAttributeComponent.h"
#include "Net/UnrealNetwork.h"
#include "WaveSurvival/Core/WaveGameModeBase.h"


UWaveAttributeComponent::UWaveAttributeComponent()
{
	HealthMax = 100;
	Health = HealthMax;
	
	Rage = 0;
	RageMax = 100;

	BaseDamage = 30.0f;

	SetIsReplicatedByDefault(true);
}

bool UWaveAttributeComponent::ApplyHealthChange(AActor* InstigatorActor, float Delta)
{
	if (InstigatorActor == nullptr)
	{
		return false;
	}
	
	if (!GetOwner()->CanBeDamaged() && Delta < 0.0f)
	{
		return false;
	}

	const float OldHealth = Health;
	const float NewHealth = FMath::Clamp(Health + Delta, 0.0f, HealthMax);

	const float ActualDelta = NewHealth - OldHealth;
	
	if (GetOwner()->HasAuthority())
	{
		Health = NewHealth;

		if (!FMath::IsNearlyZero(ActualDelta))
		{
			MulticastHealthChanged(InstigatorActor, Health, ActualDelta);
		}
		
		if (ActualDelta < 0.0f && FMath::IsNearlyZero(Health))
		{
			if (AWaveGameModeBase* GM = GetWorld()->GetAuthGameMode<AWaveGameModeBase>())
			{
				GM->OnActorKilled(GetOwner(), InstigatorActor);
			}
		}
	}
	
	return !FMath::IsNearlyZero(ActualDelta);
}

bool UWaveAttributeComponent::ApplyRage(AActor* InstigatorActor, float Delta)
{
	const float OldRage = Rage;

	Rage = FMath::Clamp(Rage + Delta, 0.0f, RageMax);

	const float ActualDelta = Rage - OldRage;

	if (GetOwner()->HasAuthority())
	{
		if (!FMath::IsNearlyZero(ActualDelta))
		{
			MulticastRageChanged(InstigatorActor, Rage, ActualDelta);
		}
	}

	return !FMath::IsNearlyZero(ActualDelta);
}

UWaveAttributeComponent* UWaveAttributeComponent::GetAttributes(AActor* FromActor)
{
	if (FromActor)
	{
		return FromActor->FindComponentByClass<UWaveAttributeComponent>();
	}

	return nullptr;
}

bool UWaveAttributeComponent::Kill(AActor* InstigatorActor)
{
	return ApplyHealthChange(InstigatorActor, -GetHealthMax());
}

void UWaveAttributeComponent::MulticastHealthChanged_Implementation(AActor* InstigatorActor, float NewHealth, float Delta)
{
	OnHealthChanged.Broadcast(InstigatorActor, this, NewHealth, Delta);
}

void UWaveAttributeComponent::MulticastRageChanged_Implementation(AActor* InstigatorActor, float NewRage, float Delta)
{
	OnRageChanged.Broadcast(InstigatorActor, this, NewRage, Delta);
}

void UWaveAttributeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWaveAttributeComponent, Health);
	DOREPLIFETIME(UWaveAttributeComponent, HealthMax);

	DOREPLIFETIME(UWaveAttributeComponent, Rage);
	DOREPLIFETIME(UWaveAttributeComponent, RageMax);

	DOREPLIFETIME(UWaveAttributeComponent, BaseDamage);
}

