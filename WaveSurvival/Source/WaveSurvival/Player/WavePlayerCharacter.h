// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputAction.h"
#include "WavePlayerCharacter.generated.h"

class UInputMappingContext;
class UCameraComponent;
class USpringArmComponent;
class UWaveActionComponent;
class UWaveAttributeComponent;
class UWaveInteractionComponent;


UCLASS()
class WAVESURVIVAL_API AWavePlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AWavePlayerCharacter();

	void PlayAttackSound(USoundBase* InSound);

protected:
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputMappingContext> DefaultInputMapping;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> Input_Move;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> Input_LookMouse;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> Input_Jump;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> Input_Interact;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> Input_Sprint;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> Input_Dash;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> Input_PrimaryAttack;
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UInputAction> Input_SecondaryAttack;
	
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

	// UPROPERTY(VisibleAnywhere)
	// TObjectPtr<UAIPerceptionStimuliSourceComponent> PerceptionStimuliComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UAudioComponent> AttackSoundsComp;

	// Enhanced Input
	void Move(const FInputActionInstance& Instance);
	
	void LookMouse(const FInputActionValue& InputValue);

	void SprintStart();
	
	void SprintStop();
	
	void PrimaryAttack();
	
	void SecondaryAttack();

	void Dash();
	
	void PrimaryInteract();
	
	UFUNCTION()
	void OnHealthAttributeChanged(AActor* InstigatorActor, UWaveAttributeComponent* OwningComp, float NewHealth, float Delta);

	virtual void PostInitializeComponents() override;
	
public:	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
