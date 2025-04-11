// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "WavePlayerController.generated.h"


class UInputAction;


/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API AWavePlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> PauseMenuClass;

	UPROPERTY()
	TObjectPtr<UUserWidget> PauseMenuInstance;

	UFUNCTION(BlueprintCallable)
	void TogglePauseMenu();

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> Input_Pause;

	virtual void SetupInputComponent() override;
};
