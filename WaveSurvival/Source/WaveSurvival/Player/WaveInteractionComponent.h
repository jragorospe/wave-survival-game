// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WaveInteractionComponent.generated.h"


class UWaveWorldUserWidget;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WAVESURVIVAL_API UWaveInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWaveInteractionComponent();
	
	void PrimaryInteract();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	UFUNCTION(Server, Reliable)
	void ServerInteract(AActor* InFocus);

	void FindBestInteractable();

	UPROPERTY()
	TObjectPtr<AActor> FocusedActor;

	UPROPERTY(EditDefaultsOnly, Category = "Trace")
	float TraceRadius;

	UPROPERTY(EditDefaultsOnly, Category = "Trace")
	TEnumAsByte<ECollisionChannel> TraceChannel;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UWaveWorldUserWidget> DefaultWidgetClass;

	UPROPERTY()
	TObjectPtr<UWaveWorldUserWidget> WidgetInstance;
};
