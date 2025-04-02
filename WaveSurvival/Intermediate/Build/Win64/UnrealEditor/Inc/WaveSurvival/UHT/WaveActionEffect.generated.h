// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionSystem/WaveActionEffect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef WAVESURVIVAL_WaveActionEffect_generated_h
#error "WaveActionEffect.generated.h already included, missing '#pragma once' in WaveActionEffect.h"
#endif
#define WAVESURVIVAL_WaveActionEffect_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecutePeriodicEffect_Implementation(AActor* Instigator); \
	DECLARE_FUNCTION(execExecutePeriodicEffect); \
	DECLARE_FUNCTION(execGetTimeRemaining);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_15_CALLBACK_WRAPPERS
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveActionEffect(); \
	friend struct Z_Construct_UClass_UWaveActionEffect_Statics; \
public: \
	DECLARE_CLASS(UWaveActionEffect, UWaveAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(UWaveActionEffect)


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveActionEffect(UWaveActionEffect&&); \
	UWaveActionEffect(const UWaveActionEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveActionEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveActionEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaveActionEffect) \
	NO_API virtual ~UWaveActionEffect();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_12_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_15_CALLBACK_WRAPPERS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class UWaveActionEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
