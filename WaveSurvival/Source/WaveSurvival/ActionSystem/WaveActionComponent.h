// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "WaveActionComponent.generated.h"

class UWaveAction;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionStateChanged, UWaveActionComponent*, OwningComp, UWaveAction*, Action);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WAVESURVIVAL_API UWaveActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWaveActionComponent();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tags")
	FGameplayTagContainer ActiveGameplayTags;

	UFUNCTION(BlueprintCallable, Category = "Actions")
	void AddAction(AActor* Instigator, TSubclassOf<UWaveAction> ActionClass);

	UFUNCTION(BlueprintCallable, Category = "Actions")
	void RemoveAction(UWaveAction* ActionToRemove);

	UFUNCTION(BlueprintCallable, Category = "Actions")
	bool StartActionByName(AActor* Instigator, FGameplayTag ActionName);

	UFUNCTION(BlueprintCallable, Category = "Actions")
	bool StopActionByName(AActor* Instigator, FGameplayTag ActionName);

	void StopAllActions() const;

protected:
	UPROPERTY(EditAnywhere, Category = "Actions")
	TArray<TSubclassOf<UWaveAction>> DefaultActions;

	UPROPERTY(BlueprintReadOnly, Replicated)
	TArray<TObjectPtr<UWaveAction>> Actions;

	UFUNCTION(Server, Reliable)
	void ServerStartAction(AActor* Instigator, FGameplayTag ActionName);

	UFUNCTION(Server, Reliable)
	void ServerStopAction(AActor* Instigator, FGameplayTag ActionName);

	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UPROPERTY(BlueprintAssignable)
	FOnActionStateChanged OnActionStarted;

	UPROPERTY(BlueprintAssignable)
	FOnActionStateChanged OnActionStopped;
};
