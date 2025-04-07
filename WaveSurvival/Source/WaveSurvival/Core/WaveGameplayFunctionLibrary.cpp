// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveGameplayFunctionLibrary.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"


bool UWaveGameplayFunctionLibrary::ApplyDamage(AActor* DamageCauser, AActor* TargetActor, float DamageMultiplier)
{
	UWaveAttributeComponent* const TargetComp = UWaveAttributeComponent::GetAttributes(TargetActor);
	if (TargetComp == nullptr)
	{
		return false;
	}

	UWaveAttributeComponent* const AttackerComp = UWaveAttributeComponent::GetAttributes(DamageCauser);
	if (AttackerComp == nullptr)
	{
		return false;
	}

	const float DamageAmount = DamageMultiplier * AttackerComp->GetDamage();
	if (TargetComp->ApplyHealthChange(DamageCauser, -DamageAmount))
	{
		const float RageAmount = DamageAmount / 3;
		AttackerComp->ApplyRage(DamageCauser, RageAmount);

		return true;
	}
	
	return false;
}

bool UWaveGameplayFunctionLibrary::ApplyDirectionalDamage(AActor* DamageCauser, AActor* TargetActor, float DamageMultiplier, const FHitResult& HitResult)
{
	if (ApplyDamage(DamageCauser, TargetActor, DamageMultiplier))
	{
		UPrimitiveComponent* const HitComp = HitResult.GetComponent();
		if (HitComp && HitComp->IsSimulatingPhysics(HitResult.BoneName))
		{
			FVector Direction = HitResult.TraceEnd - HitResult.TraceStart;
			Direction.Normalize();
			
			HitComp->AddImpulseAtLocation(Direction * 30000.0f, HitResult.ImpactPoint, HitResult.BoneName);
		}

		return true;
	}

	return false;
}
