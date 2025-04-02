// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveAction.h"
#include "WaveActionComponent.h"
#include "Logging/StructuredLog.h"
#include "Net/UnrealNetwork.h"


void UWaveAction::Initialize(UWaveActionComponent* NewActionComp)
{
	ActionComp = NewActionComp;
}

bool UWaveAction::CanStart_Implementation(AActor* Instigator)
{
	if (IsRunning())
	{
		return false;
	}

	const UWaveActionComponent* const Comp = GetOwningComponent();
	if (Comp == nullptr)
	{
		return false;
	}
	
	return !Comp->ActiveGameplayTags.HasAny(BlockedTags);
}

void UWaveAction::StartAction_Implementation(AActor* Instigator)
{
	UE_LOGFMT(LogTemp, Log, "Started: {ActionName}", GetName());

	UWaveActionComponent* const Comp = GetOwningComponent();
	if (Comp == nullptr)
	{
		return;
	}

	Comp->ActiveGameplayTags.AppendTags(GrantsTags);

	RepData.bIsRunning = true;
	RepData.Instigator = Instigator;

	if (Comp->GetOwnerRole() == ROLE_Authority)
	{
		TimeStarted = GetWorld()->TimeSeconds;
	}

	Comp->OnActionStarted.Broadcast(Comp, this);
}

void UWaveAction::StopAction_Implementation(AActor* Instigator)
{
	UE_LOGFMT(LogTemp, Log, "Started: {ActionName}", GetName());

	UWaveActionComponent* const Comp = GetOwningComponent();
	if (Comp == nullptr)
	{
		return;
	}

	Comp->ActiveGameplayTags.RemoveTags(GrantsTags);

	RepData.bIsRunning = false;
	RepData.Instigator = Instigator;

	Comp->OnActionStopped.Broadcast(Comp, this);
}

UWorld* UWaveAction::GetWorld() const
{
	if (const AActor* const Actor = Cast<AActor>(GetOuter()))
	{
		return Actor->GetWorld();
	}

	return nullptr;
}

void UWaveAction::OnRep_RepData()
{
	if (RepData.bIsRunning)
	{
		StartAction(RepData.Instigator);
	}
	else
	{
		StopAction(RepData.Instigator);
	}
}

void UWaveAction::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWaveAction, RepData);
	DOREPLIFETIME(UWaveAction, TimeStarted);
	DOREPLIFETIME(UWaveAction, ActionComp);
}