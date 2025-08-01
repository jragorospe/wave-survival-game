// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Character.h"
#include "InputAction.h"
#include "NiagaraCommon.h"
#include "WaveSurvival/ActionSystem/WaveAction_HitScanAttack.h"
#include "WavePlayerCharacter.generated.h"

class UAIPerceptionStimuliSourceComponent;
class AWaveAICharacter;
class UWaveWorldUserWidget;
class UWaveAction;
class UInputMappingContext;
class UCameraComponent;
class USpringArmComponent;
class UWaveActionComponent;
class UWaveAttributeComponent;
class UWaveInteractionComponent;


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerAttack);


UCLASS()
class WAVESURVIVAL_API AWavePlayerCharacter : public ACharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	AWavePlayerCharacter();

	void PlayAttackSound(USoundBase* InSound);

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultInputMapping;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> Input_Move;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> Input_LookMouse;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> Input_Jump;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> Input_Interact;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> Input_Sprint;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> Input_Dash;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> Input_PrimaryAttack;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> Input_SecondaryAttack;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> Input_UltimateAttack;
	
	UPROPERTY(EditDefaultsOnly, Category= Effects)
	TObjectPtr<USoundBase> DeathVOSound;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<USpringArmComponent> SpringArmComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UCameraComponent> CameraComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UWaveInteractionComponent> InteractionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UWaveAttributeComponent> AttributeComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UWaveActionComponent> ActionComp;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAIPerceptionStimuliSourceComponent> PerceptionStimuliComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UAudioComponent> AttackSoundsComp;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UWaveWorldUserWidget> HealthBarWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UWaveWorldUserWidget> ActiveHealthBar;

	// Enhanced Input
	void Move(const FInputActionInstance& Instance);
	
	void LookMouse(const FInputActionValue& InputValue);

	void SprintStart();
	
	void SprintStop();
	
	void PrimaryAttack();
	
	void SecondaryAttack();

	void UltimateAttack();

	void Dash();
	
	void PrimaryInteract();
	
	UFUNCTION()
	void OnHealthAttributeChanged(AActor* InstigatorActor, UWaveAttributeComponent* OwningComp, float NewHealth, float Delta);

	virtual void PostInitializeComponents() override;
	
public:	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(NetMulticast, Unreliable)
	void SpawnHitScanEffects(UWaveAction_HitScanAttack* InAction, const FHitScanData& InHitScanData);

	UPROPERTY(BlueprintAssignable)
	FOnPlayerAttack OnPlayerAttack;

	// IGenericTeamAgentInterface BEGIN
	virtual FGenericTeamId GetGenericTeamId() const override;
	// IGenericTeamAgentInterface END
};
