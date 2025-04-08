// Fill out your copyright notice in the Description page of Project Settings.


#include "WavePlayerCharacter.h"
#include "WaveInteractionComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/AudioComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "WaveSurvival/SharedGameplayTags.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"
#include "WaveSurvival/ActionSystem/WaveAction_HitScanAttack.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"
#include "WaveSurvival/UI/WaveWorldUserWidget.h"


AWavePlayerCharacter::AWavePlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->SetUsingAbsoluteRotation(true);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);

	InteractionComp = CreateDefaultSubobject<UWaveInteractionComponent>(TEXT("InteractionComp"));

	ActionComp = CreateDefaultSubobject<UWaveActionComponent>("ActionComp");

	AttributeComp = CreateDefaultSubobject<UWaveAttributeComponent>("AttributeComp");

	PerceptionStimuliComp = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PerceptionStimuliComp"));

	AttackSoundsComp = CreateDefaultSubobject<UAudioComponent>(TEXT("AttackSoundsComp"));
	AttackSoundsComp->SetupAttachment(RootComponent);
	AttackSoundsComp->bAutoActivate = false;
	AttackSoundsComp->bAutoManageAttachment = true;

	UCharacterMovementComponent* CharMoveComp = GetCharacterMovement();
	CharMoveComp->bUseControllerDesiredRotation = true;
	CharMoveComp->MaxWalkSpeed = 550.0f;
	CharMoveComp->JumpZVelocity = 550;
	CharMoveComp->GravityScale = 1.35f;
	CharMoveComp->BrakingDecelerationFalling = 200.f;
}

void AWavePlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	AttributeComp->OnHealthChanged.AddDynamic(this, &AWavePlayerCharacter::OnHealthAttributeChanged);
}

void AWavePlayerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	const APlayerController* const PC = GetController<APlayerController>();
	const ULocalPlayer* LP = PC->GetLocalPlayer();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);

	Subsystem->ClearAllMappings();
	Subsystem->AddMappingContext(DefaultInputMapping, 0);
	
	UEnhancedInputComponent* InputComp = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	
	InputComp->BindAction(Input_Move, ETriggerEvent::Triggered, this, &AWavePlayerCharacter::Move);
	InputComp->BindAction(Input_Jump, ETriggerEvent::Triggered, this, &ACharacter::Jump);
	InputComp->BindAction(Input_Interact, ETriggerEvent::Triggered, this, &AWavePlayerCharacter::PrimaryInteract);
	
	InputComp->BindAction(Input_Sprint, ETriggerEvent::Started, this, &AWavePlayerCharacter::SprintStart);
	InputComp->BindAction(Input_Sprint, ETriggerEvent::Completed, this, &AWavePlayerCharacter::SprintStop);
	
	InputComp->BindAction(Input_LookMouse, ETriggerEvent::Triggered, this, &AWavePlayerCharacter::LookMouse);

	InputComp->BindAction(Input_PrimaryAttack, ETriggerEvent::Triggered, this, &AWavePlayerCharacter::PrimaryAttack);
	InputComp->BindAction(Input_SecondaryAttack, ETriggerEvent::Triggered, this, &AWavePlayerCharacter::SecondaryAttack);
	InputComp->BindAction(Input_UltimateAttack, ETriggerEvent::Triggered, this, &AWavePlayerCharacter::UltimateAttack);
	InputComp->BindAction(Input_Dash, ETriggerEvent::Triggered, this, &AWavePlayerCharacter::Dash);
}

void AWavePlayerCharacter::SpawnHitScanEffects_Implementation(UWaveAction_HitScanAttack* InAction, const FHitScanData& InHitScanData)
{
	if (InAction)
	{
		InAction->MulticastSpawnHitScanEffects(this, InHitScanData);
	}
}

void AWavePlayerCharacter::Move(const FInputActionInstance& Instance)
{
	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;

	// Get value from input and convert to Vector (x,y)
	const FVector2D AxisValue = Instance.GetValue().Get<FVector2D>();

	// Move forward/back
	AddMovementInput(ControlRot.Vector(), AxisValue.Y);

	// Strafe right/left
	const FVector RightVector = ControlRot.RotateVector(FVector::RightVector);
	AddMovementInput(RightVector, AxisValue.X);
}

void AWavePlayerCharacter::LookMouse(const FInputActionValue& InputValue)
{
	const FVector2D Value = InputValue.Get<FVector2D>();
	
	AddControllerYawInput(Value.X);
	AddControllerPitchInput(Value.Y);
}

void AWavePlayerCharacter::SprintStart()
{
	ActionComp->StartActionByName(this, SharedGameplayTags::Action_Sprint);
}

void AWavePlayerCharacter::SprintStop()
{
	ActionComp->StopActionByName(this, SharedGameplayTags::Action_Sprint);
}

void AWavePlayerCharacter::PrimaryAttack()
{	
	if (ActionComp->StartActionByName(this, SharedGameplayTags::Action_PrimaryAttack))
	{
		OnPlayerAttack.Broadcast();
	}
}

void AWavePlayerCharacter::SecondaryAttack()
{
	if (ActionComp->StartActionByName(this, SharedGameplayTags::Action_SecondaryAttack))
	{
		OnPlayerAttack.Broadcast();
	}
}

void AWavePlayerCharacter::UltimateAttack()
{
	if (ActionComp->StartActionByName(this, SharedGameplayTags::Action_BlackHole))
	{
		OnPlayerAttack.Broadcast();
	}
}

void AWavePlayerCharacter::Dash()
{	
	if (ActionComp->StartActionByName(this, SharedGameplayTags::Action_Dash))
	{
		OnPlayerAttack.Broadcast();
	}
}

void AWavePlayerCharacter::PrimaryInteract()
{
	InteractionComp->PrimaryInteract();
}

void AWavePlayerCharacter::PlayAttackSound(USoundBase* InSound)
{
	AttackSoundsComp->SetSound(InSound);
	AttackSoundsComp->Play();
}

void AWavePlayerCharacter::OnHealthAttributeChanged(AActor* InstigatorActor, UWaveAttributeComponent* OwningComp, float NewHealth, float Delta)
{
	if (Delta < 0.0f)
	{
		if (!IsLocallyControlled() && ActiveHealthBar == nullptr && NewHealth > 0.0f)
		{
			ActiveHealthBar = CreateWidget<UWaveWorldUserWidget>(GetWorld(), HealthBarWidgetClass);
			if (ActiveHealthBar)
			{
				ActiveHealthBar->AttachedActor = this;
				UWaveWorldUserWidget::AddToRootCanvasPanel(ActiveHealthBar);
			}
		}
		
		GetMesh()->SetScalarParameterValueOnMaterials(FName("Color"), GetWorld()->TimeSeconds);

		const float RageDelta = FMath::Abs(Delta);
		AttributeComp->ApplyRage(InstigatorActor, RageDelta);
	}
	
	if (NewHealth <= 0 && Delta < 0.0f)
	{
		UGameplayStatics::PlaySoundAtLocation(this, DeathVOSound, GetActorLocation(), FRotator::ZeroRotator);
		
		SetLifeSpan(3.0f);
		
		PerceptionStimuliComp->UnregisterFromPerceptionSystem();
		
		APlayerController* PC = Cast<APlayerController>(GetController());
		if (PC && PC->IsLocalController())
		{
			DisableInput(PC);
		}
	}
}

FGenericTeamId AWavePlayerCharacter::GetGenericTeamId() const
{
	return FGenericTeamId(0);
}

