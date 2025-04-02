// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveGameplayFunctionLibrary.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"


bool UWaveGameplayFunctionLibrary::ApplyDamage(AActor* DamageCauser, AActor* TargetActor, float DamageAmount)
{
	UWaveAttributeComponent* const AttributeComp = UWaveAttributeComponent::GetAttributes(TargetActor);
	if (AttributeComp == nullptr)
	{
		return false;
	}

	return AttributeComp->ApplyHealthChange(DamageCauser, -DamageAmount);
}

bool UWaveGameplayFunctionLibrary::ApplyDirectionalDamage(AActor* DamageCauser, AActor* TargetActor, float DamageAmount, const FHitResult& HitResult)
{
	if (ApplyDamage(DamageCauser, TargetActor, DamageAmount))
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
