// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAction_MinionRangedAttack.h"
#include "WaveAICharacter.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"
#include "WaveSurvival/Core/WaveGameplayFunctionLibrary.h"


void UWaveAction_MinionRangedAttack::StartAction_Implementation(AActor* Instigator)
{
	AWaveAICharacter* MyPawn = CastChecked<AWaveAICharacter>(GetOwningComponent()->GetOwner());

	AActor* TargetActor = MyPawn->GetTargetActor();
	if (TargetActor == nullptr || !UWaveGameplayFunctionLibrary::IsAlive(TargetActor))
	{
		return;
	}
	
	MyPawn->MulticastPlayAttackFX();

	const FVector MuzzleLocation = MyPawn->GetMesh()->GetSocketLocation("Muzzle_Front");
	const FVector Direction = TargetActor->GetTargetLocation() - MuzzleLocation;
	FRotator MuzzleRotation = Direction.Rotation();

	// Prevent hitting the floor by ignoring negative pitch
	MuzzleRotation.Pitch += FMath::RandRange(0.0f, MaxBulletSpread);
	MuzzleRotation.Yaw += FMath::RandRange(-MaxBulletSpread, MaxBulletSpread);

	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	Params.Instigator = MyPawn;

	GetWorld()->SpawnActor<AActor>(ProjectileClass, MuzzleLocation, MuzzleRotation, Params);
}
