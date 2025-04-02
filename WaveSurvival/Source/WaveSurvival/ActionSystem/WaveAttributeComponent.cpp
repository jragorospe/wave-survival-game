// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAttributeComponent.h"
#include "Net/UnrealNetwork.h"


UWaveAttributeComponent::UWaveAttributeComponent()
{
	HealthMax = 100;
	Health = HealthMax;

	BaseDamage = 20.0f;

	SetIsReplicatedByDefault(true);
}

bool UWaveAttributeComponent::ApplyHealthChange(AActor* InstigatorActor, float Delta)
{
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
		
		// if (ActualDelta < 0.0f && FMath::IsNearlyZero(Health))
		// {
		// 	if (AWaveGameModeBase* GM = GetWorld()->GetAuthGameMode<AWaveGameModeBase>())
		// 	{
		// 		GM->OnActorKilled(GetOwner(), InstigatorActor);
		// 	}
		// }
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

void UWaveAttributeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWaveAttributeComponent, Health);
	DOREPLIFETIME(UWaveAttributeComponent, HealthMax);
}

