// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionSystem/WaveAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWaveActionComponent;
struct FGameplayTag;
#ifdef WAVESURVIVAL_WaveAction_generated_h
#error "WaveAction.generated.h already included, missing '#pragma once' in WaveAction.h"
#endif
#define WAVESURVIVAL_WaveAction_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionRepData_Statics; \
	WAVESURVIVAL_API static class UScriptStruct* StaticStruct();


template<> WAVESURVIVAL_API UScriptStruct* StaticStruct<struct FActionRepData>();

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopAction_Implementation(AActor* Instigator); \
	virtual void StartAction_Implementation(AActor* Instigator); \
	virtual bool CanStart_Implementation(AActor* Instigator); \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execIsAutoStart); \
	DECLARE_FUNCTION(execGetActivationTag); \
	DECLARE_FUNCTION(execOnRep_RepData); \
	DECLARE_FUNCTION(execGetOwningComponent);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_33_CALLBACK_WRAPPERS
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveAction(); \
	friend struct Z_Construct_UClass_UWaveAction_Statics; \
public: \
	DECLARE_CLASS(UWaveAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(UWaveAction) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ActionComp=NETFIELD_REP_START, \
		RepData, \
		TimeStarted, \
		NETFIELD_REP_END=TimeStarted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UWaveAction) \
public:


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveAction(UWaveAction&&); \
	UWaveAction(const UWaveAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveAction) \
	NO_API virtual ~UWaveAction();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_30_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_33_CALLBACK_WRAPPERS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class UWaveAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
