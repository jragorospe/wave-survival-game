// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaveProjectile.h"
#include "WaveProjectile_Magic.generated.h"


class UWaveActionEffect;


/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class WAVESURVIVAL_API AWaveProjectile_Magic : public AWaveProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageMultiplier;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	TSubclassOf<UWaveActionEffect> BurningEffectClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage")
	TObjectPtr<AActor> DamagedActor;
	
	UFUNCTION()
	void OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual void PostInitializeComponents() override;

public:
	AWaveProjectile_Magic();
};
