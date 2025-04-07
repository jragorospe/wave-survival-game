// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaveProjectile.h"
#include "WaveProjectile_BlackHole.generated.h"


class URadialForceComponent;


/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API AWaveProjectile_BlackHole : public AWaveProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float Radius;
	
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageMultiplier;
	
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageInterval;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UDecalComponent> DecalComp;
	
	UFUNCTION()
	void OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void ApplyTickDamage(AActor* OtherActor) const;

	FTimerHandle DamageIntervalHandle;

	void AdjustDecalLocationToSurface();

public:
	virtual void BeginPlay() override;
	
	virtual void PostInitializeComponents() override;

	AWaveProjectile_BlackHole();
};
