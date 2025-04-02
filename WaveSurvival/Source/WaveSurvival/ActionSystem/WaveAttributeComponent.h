// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WaveAttributeComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAttributeChanged, AActor*, InstigatorActor, UWaveAttributeComponent*, OwningComp, float, NewValue, float, Delta);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WAVESURVIVAL_API UWaveAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	static UWaveAttributeComponent* GetAttributes(AActor* FromActor);

	UWaveAttributeComponent();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = "Attributes")
	float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = "Attributes")
	float HealthMax;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastHealthChanged(AActor* InstigatorActor, float NewHealth, float Delta);

public:	
	float BaseDamage;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool Kill(AActor* InstigatorActor);

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool IsAlive() const
	{
		return Health > 0.0f;
	}

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool IsFullHealth() const
	{
		return FMath::IsNearlyEqual(Health, HealthMax);
	}

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetHealth() const
	{
		return Health;	
	}

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetHealthMax() const
	{
		return HealthMax;
	}

	UPROPERTY(BlueprintAssignable, Category = "Attributes")
	FOnAttributeChanged OnHealthChanged;
	
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool ApplyHealthChange(AActor* InstigatorActor, float Delta);
};
