// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaveProjectile.generated.h"

class UProjectileMovementComponent;
class USphereComponent;

UCLASS(Abstract)
class WAVESURVIVAL_API AWaveProjectile : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	float ImpactShakeInnerRadius;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	float ImpactShakeOuterRadius;
	
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TSubclassOf<UCameraShakeBase> ImpactShake;
	
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TObjectPtr<UParticleSystem> ImpactVFX;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TObjectPtr<USoundBase> ImpactSound;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USphereComponent> SphereComp;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UProjectileMovementComponent> MoveComp;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UParticleSystemComponent> EffectLoopComp;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UAudioComponent> AudioComp;
	
	UFUNCTION()
	virtual void OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Explode();
	
	virtual void PostInitializeComponents() override;
	
public:	
	AWaveProjectile();
};
