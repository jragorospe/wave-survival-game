// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionSystem/WaveAttributeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWaveAttributeComponent;
#ifdef WAVESURVIVAL_WaveAttributeComponent_generated_h
#error "WaveAttributeComponent.generated.h already included, missing '#pragma once' in WaveAttributeComponent.h"
#endif
#define WAVESURVIVAL_WaveAttributeComponent_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_10_DELEGATE \
WAVESURVIVAL_API void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, AActor* InstigatorActor, UWaveAttributeComponent* OwningComp, float NewValue, float Delta);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastHealthChanged_Implementation(AActor* InstigatorActor, float NewHealth, float Delta); \
	DECLARE_FUNCTION(execApplyHealthChange); \
	DECLARE_FUNCTION(execGetHealthMax); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execIsFullHealth); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execMulticastHealthChanged); \
	DECLARE_FUNCTION(execGetAttributes);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_16_CALLBACK_WRAPPERS
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveAttributeComponent(); \
	friend struct Z_Construct_UClass_UWaveAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(UWaveAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(UWaveAttributeComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		HealthMax, \
		NETFIELD_REP_END=HealthMax	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveAttributeComponent(UWaveAttributeComponent&&); \
	UWaveAttributeComponent(const UWaveAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveAttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaveAttributeComponent) \
	NO_API virtual ~UWaveAttributeComponent();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_13_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_16_CALLBACK_WRAPPERS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class UWaveAttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
