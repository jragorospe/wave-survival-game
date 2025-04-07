// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaveSurvival/Core/WaveGameplayInterface.h"
#include "WavePickupActor.generated.h"


class UWaveWorldUserWidget;
class USphereComponent;
class UStaticMeshComponent;


UCLASS(ABSTRACT, Blueprintable)
class WAVESURVIVAL_API AWavePickupActor : public AActor, public IWaveGameplayInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(ReplicatedUsing = "OnRep_IsActive")
	bool bIsActive;

	UFUNCTION()
	void OnRep_IsActive();

	UPROPERTY(EditAnywhere, Category = "Powerup")
	float RespawnTime;

	void ShowPickup()
	{
		SetPickupState(true);
	}

	void HideAndCooldown();

	void SetPickupState(bool bNewIsActive);

	UPROPERTY(VisibleAnywhere, Category = Components)
	TObjectPtr<USphereComponent> SphereComp;

	UPROPERTY(VisibleAnywhere, Category = Components)
	TObjectPtr<UStaticMeshComponent> MeshComp;

public:

	virtual void PostInitializeComponents() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION()
	void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// IWaveGameplayInterface BEGIN
	virtual FText GetInteractText_Implementation(APawn* InstigatorPawn) override;
	virtual void Interact_Implementation(APawn* InstigatorPawn) override;
	// IWaveGameplayInterface END

	AWavePickupActor();
};
