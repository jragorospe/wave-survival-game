// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveProjectile_Dash.h"

#include "NiagaraFunctionLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"


AWaveProjectile_Dash::AWaveProjectile_Dash()
{
	TeleportDelay = 0.2f;
	DetonateDelay = 0.2f;

	MoveComp->InitialSpeed = 6000.f;
}

void AWaveProjectile_Dash::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(TimerHandle_DelayedDetonate, this, &AWaveProjectile_Dash::Explode, DetonateDelay);
}

void AWaveProjectile_Dash::TeleportInstigator()
{
	AActor* ActorToTeleport = GetInstigator();

	check(ActorToTeleport);
	
	ActorToTeleport->TeleportTo(GetActorLocation(), ActorToTeleport->GetActorRotation(), false, false);
	
	const APawn* InstigatorPawn = CastChecked<APawn>(ActorToTeleport);
	APlayerController* PC = InstigatorPawn->GetController<APlayerController>();

	if (PC && PC->IsLocalController())
	{
		PC->PlayerCameraManager->StartCameraShake(ImpactShake);
	}

	Destroy();
}

void AWaveProjectile_Dash::Explode_Implementation()
{
	// Don't want to call Super since it destroys actor, and we need it to stay alive until the end of the second timer.

	GetWorldTimerManager().ClearTimer(TimerHandle_DelayedDetonate);

	UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVFX, GetActorLocation(), GetActorRotation());

	UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation());

	EffectLoopComp->DeactivateSystem();

	MoveComp->StopMovementImmediately();
	SetActorEnableCollision(false);

	FTimerHandle TimerHandle_DelayedTeleport;
	GetWorldTimerManager().SetTimer(TimerHandle_DelayedTeleport, this, &AWaveProjectile_Dash::TeleportInstigator, TeleportDelay);
}

