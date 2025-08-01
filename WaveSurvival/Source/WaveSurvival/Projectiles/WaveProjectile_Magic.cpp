// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveProjectile_Magic.h"
#include "Components/SphereComponent.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"
#include "WaveSurvival/ActionSystem/WaveActionEffect.h"
#include "WaveSurvival/Core/WaveGameplayFunctionLibrary.h"


AWaveProjectile_Magic::AWaveProjectile_Magic()
{
	InitialLifeSpan = 10.0f;
	DamageMultiplier = 0.8f;

	DamagedActor = nullptr;
}

void AWaveProjectile_Magic::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &AWaveProjectile_Magic::OnActorOverlap);
}

void AWaveProjectile_Magic::OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || OtherActor == GetInstigator())
	{
		return;
	}

	UWaveActionComponent* const OtherActionComp = OtherActor->FindComponentByClass<UWaveActionComponent>();
	if (UWaveGameplayFunctionLibrary::ApplyDirectionalDamage(GetInstigator(), OtherActor, DamageMultiplier, SweepResult))
	{
		DamagedActor = OtherActor;
		
		Explode();

		if (BurningEffectClass && OtherActionComp && HasAuthority())
		{
			OtherActionComp->AddAction(GetInstigator(), BurningEffectClass);
		}
	}
}
