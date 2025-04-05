// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WaveWorldUserWidget.generated.h"


class UOverlay;


/**
 * 
 */
UCLASS()
class WAVESURVIVAL_API UWaveWorldUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UOverlay> ParentOverlay;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	bool bWasOnScreen = true;

public:
	UFUNCTION(BlueprintCallable, Category = "UI")
	static void AddToRootCanvasPanel(UUserWidget* InNewWidget);
	
	UPROPERTY(EditAnywhere, Category = "UI")
	FVector WorldOffset;

	UPROPERTY(BlueprintReadWrite, Category = "UI", meta = (ExposeOnSpawn = true))
	TObjectPtr<AActor> AttachedActor;
};
