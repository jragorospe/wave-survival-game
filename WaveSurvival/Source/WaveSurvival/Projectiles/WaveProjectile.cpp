// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveProjectile.h"

#include "Components/AudioComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/FastReferenceCollector.h"

AWaveProjectile::AWaveProjectile()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionProfileName("Projectile");
	SphereComp->SetCanEverAffectNavigation(false);
	RootComponent = SphereComp;

	AudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComp"));
	AudioComp->SetupAttachment(RootComponent);
	
	EffectLoopComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EffectComp"));
	EffectLoopComp->SetupAttachment(RootComponent);

	ImpactShakeInnerRadius = 0.0f;
	ImpactShakeOuterRadius = 1500.0f;

	MoveComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMoveComp"));
	MoveComp->bRotationFollowsVelocity = true;
	MoveComp->bInitialVelocityInLocalSpace = true;
	MoveComp->ProjectileGravityScale = 0.0f;
	MoveComp->InitialSpeed = 8000;

	bReplicates = true;
}

void AWaveProjectile::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	SphereComp->OnComponentHit.AddDynamic(this, &AWaveProjectile::OnActorHit);
}

void AWaveProjectile::OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Explode();
}

void AWaveProjectile::Explode_Implementation()
{
	if (ensure(!IsEliminatingGarbage(EGCOptions::None)))
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVFX, GetActorLocation(), GetActorRotation());
		UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation());
		UGameplayStatics::PlayWorldCameraShake(this, ImpactShake, GetActorLocation(), ImpactShakeInnerRadius, ImpactShakeOuterRadius);

		Destroy();
	}
}
