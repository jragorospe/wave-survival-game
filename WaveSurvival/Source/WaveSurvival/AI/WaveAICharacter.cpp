// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAICharacter.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/UserWidget.h"
#include "Components/AudioComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Perception/AISense_Damage.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"
#include "WaveSurvival/UI/WaveWorldUserWidget.h"


AWaveAICharacter::AWaveAICharacter(const FObjectInitializer& ObjectInitializer)
{
	ActionComp = CreateDefaultSubobject<UWaveActionComponent>(TEXT("ActionComp"));

	AttackSoundComp = CreateDefaultSubobject<UAudioComponent>(TEXT("AttackAudioComp"));
	AttackSoundComp->SetupAttachment(RootComponent);
	AttackSoundComp->bAutoManageAttachment = true;
	AttackSoundComp->SetAutoActivate(false);

	AttributeComp = CreateDefaultSubobject<UWaveAttributeComponent>(TEXT("AttributeComp"));

	AttackFX_Socket = "Muzzle_Front";

	AttackParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AttackParticleComp"));
	AttackParticleComp->SetupAttachment(GetMesh(), AttackFX_Socket);
	AttackParticleComp->bAutoManageAttachment = true;
	AttackParticleComp->SetAutoActivate(false);

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	
	if (USkeletalMeshComponent* SkeletalMesh = GetMesh())
	{
		SkeletalMesh->SetGenerateOverlapEvents(true);
		SkeletalMesh->bUpdateOverlapsOnAnimationFinalize = false;
		SkeletalMesh->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
	}
}

void AWaveAICharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	AttributeComp->OnHealthChanged.AddDynamic(this, &AWaveAICharacter::OnHealthAttributeChanged);
}

void AWaveAICharacter::OnHealthAttributeChanged(AActor* InstigatorActor, UWaveAttributeComponent* OwningComp, float NewHealth, float Delta)
{
	if (Delta < 0.0f)
	{
		GetMesh()->SetScalarParameterValueOnMaterials(FName("Color"), GetWorld()->TimeSeconds);
		
		if (ActiveHealthBar == nullptr && NewHealth > 0.0)
		{
			ActiveHealthBar = CreateWidget<UWaveWorldUserWidget>(GetWorld(), HealthBarWidgetClass);
			if (ActiveHealthBar)
			{
				ActiveHealthBar->AttachedActor = this;
				UWaveWorldUserWidget::AddToRootCanvasPanel(ActiveHealthBar);
			}
		}
		
		if (NewHealth <= 0.0f)
		{
			if (HasAuthority())
			{
				if (AAIController* AIC = GetController<AAIController>())
				{
					if (UBrainComponent* Brain = AIC->GetBrainComponent())
					{
						Brain->StopLogic("Killed");
					}
				}
				
				ActionComp->StopAllActions();
			}
			
			GetMesh()->SetAllBodiesSimulatePhysics(true);
			GetMesh()->SetCollisionProfileName("Ragdoll");

			GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			GetCharacterMovement()->DisableMovement();
			
			SetLifeSpan(10.0f);
		}
		else
		{
			if (InstigatorActor)
			{
				UAISense_Damage::ReportDamageEvent(this, this, InstigatorActor, FMath::Abs(Delta), InstigatorActor->GetActorLocation(), GetActorLocation());
			}
		}
	}
}

AActor* AWaveAICharacter::GetTargetActor() const
{
	AAIController* AIC = GetController<AAIController>();
	if (!AIC)
	{
		return nullptr;
	}
	
	return Cast<AActor>(AIC->GetBlackboardComponent()->GetValueAsObject("TargetActor"));
}

FGenericTeamId AWaveAICharacter::GetGenericTeamId() const
{
	return FGenericTeamId::GetTeamIdentifier(GetController());
}

void AWaveAICharacter::MulticastPlayAttackFX_Implementation()
{
	AttackSoundComp->Play();

	AttackParticleComp->Activate(true);
	
	PlayAnimMontage(AttackMontage);
}


