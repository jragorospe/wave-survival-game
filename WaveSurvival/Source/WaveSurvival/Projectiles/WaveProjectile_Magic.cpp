// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveProjectile_Magic.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"
#include "WaveSurvival/ActionSystem/WaveActionEffect.h"
#include "WaveSurvival/Core/WaveGameplayFunctionLibrary.h"


AWaveProjectile_Magic::AWaveProjectile_Magic()
{
	SphereComp->SetSphereRadius(20.0f);
	InitialLifeSpan = 10.0f;
	DamageAmount = 50.0f;
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
	if (OtherActionComp && OtherActionComp->ActiveGameplayTags.HasTag(ParryTag))
	{
		MoveComp->Velocity = -MoveComp->Velocity;

		SetInstigator(Cast<APawn>(OtherActor));
		return;
	}

	if (UWaveGameplayFunctionLibrary::ApplyDirectionalDamage(GetInstigator(), OtherActor, DamageAmount, SweepResult))
	{
		Explode();

		if (OtherActionComp && HasAuthority())
		{
			OtherActionComp->AddAction(GetInstigator(), BurningEffectClass);
		}
	}
}
