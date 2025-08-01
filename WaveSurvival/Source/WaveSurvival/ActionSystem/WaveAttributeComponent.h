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
	float BaseDamage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = "Attributes")
	float Damage;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = "Attributes")
	float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = "Attributes")
	float HealthMax;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = "Attributes")
	float Rage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated, Category = "Attributes")
	float RageMax;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastHealthChanged(AActor* InstigatorActor, float NewHealth, float Delta);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastRageChanged(AActor* InstigatorActor, float NewRage, float Delta);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastDamageChanged(AActor* InstigatorActor, float NewDamage, float Multiplier);

public:
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

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetRage() const
	{
		return Rage;
	}

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetRageMax() const
	{
		return RageMax;
	}

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool IsFullRage() const
	{
		return FMath::IsNearlyEqual(Rage, RageMax);
	}

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetBaseDamage() const
	{
		return BaseDamage;
	}
	
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetDamage() const
	{
		return Damage;
	}

	UPROPERTY(BlueprintAssignable, Category = "Attributes")
	FOnAttributeChanged OnHealthChanged;
	
	UPROPERTY(BlueprintAssignable, Category = "Attributes")
	FOnAttributeChanged OnRageChanged;

	UPROPERTY(BlueprintAssignable, Category = "Attributes")
	FOnAttributeChanged OnDamageChanged;
	
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool ApplyHealthChange(AActor* InstigatorActor, float Delta);

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool ApplyRage(AActor* InstigatorActor, float Delta);

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool ApplyDamageMultiplier(AActor* InstigatorActor, float Multiplier);

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void RevertToBaseDamage(AActor* InstigatorActor);
};
