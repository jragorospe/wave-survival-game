// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionSystem/WaveActionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWaveAction;
class UWaveActionComponent;
struct FGameplayTag;
#ifdef WAVESURVIVAL_WaveActionComponent_generated_h
#error "WaveActionComponent.generated.h already included, missing '#pragma once' in WaveActionComponent.h"
#endif
#define WAVESURVIVAL_WaveActionComponent_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_13_DELEGATE \
WAVESURVIVAL_API void FOnActionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActionStateChanged, UWaveActionComponent* OwningComp, UWaveAction* Action);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerStopAction_Implementation(AActor* Instigator, FGameplayTag ActionName); \
	virtual void ServerStartAction_Implementation(AActor* Instigator, FGameplayTag ActionName); \
	DECLARE_FUNCTION(execServerStopAction); \
	DECLARE_FUNCTION(execServerStartAction); \
	DECLARE_FUNCTION(execStopActionByName); \
	DECLARE_FUNCTION(execStartActionByName); \
	DECLARE_FUNCTION(execGetAction); \
	DECLARE_FUNCTION(execRemoveAction); \
	DECLARE_FUNCTION(execAddAction);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_19_CALLBACK_WRAPPERS
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveActionComponent(); \
	friend struct Z_Construct_UClass_UWaveActionComponent_Statics; \
public: \
	DECLARE_CLASS(UWaveActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(UWaveActionComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Actions=NETFIELD_REP_START, \
		NETFIELD_REP_END=Actions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveActionComponent(UWaveActionComponent&&); \
	UWaveActionComponent(const UWaveActionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveActionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveActionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaveActionComponent) \
	NO_API virtual ~UWaveActionComponent();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_16_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_19_CALLBACK_WRAPPERS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class UWaveActionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
