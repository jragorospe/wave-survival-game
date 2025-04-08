// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericTeamAgentInterface.h"
#include "WaveAICharacter.generated.h"


class UWaveAttributeComponent;
class UWaveWorldUserWidget;
class UWaveActionComponent;


UCLASS()
class WAVESURVIVAL_API AWaveAICharacter : public ACharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "AI")
	AActor* GetTargetActor() const;

	UFUNCTION(NetMulticast, Unreliable)
	void MulticastPlayAttackFX();

protected:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> HealthBarWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category="Effects")
	FName AttackFX_Socket;

	UPROPERTY(EditDefaultsOnly, Category="Effects")
	TObjectPtr<UAnimMontage> AttackMontage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UWaveActionComponent> ActionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UWaveAttributeComponent> AttributeComp;

	UFUNCTION()
	void OnHealthAttributeChanged(AActor* InstigatorActor, UWaveAttributeComponent* OwningComp, float NewHealth, float Delta);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UAudioComponent> AttackSoundComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UParticleSystemComponent> AttackParticleComp;

	UPROPERTY(Transient)
	TObjectPtr<UWaveWorldUserWidget> ActiveHealthBar;

public:
	// IGenericTeamAgentInterface BEGIN
	virtual FGenericTeamId GetGenericTeamId() const override;
	// IGenericTeamAgentInterface END

	virtual void PostInitializeComponents() override;

	AWaveAICharacter(const FObjectInitializer& ObjectInitializer);
};
