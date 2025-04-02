// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/WaveGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WAVESURVIVAL_WaveGameModeBase_generated_h
#error "WaveGameModeBase.generated.h already included, missing '#pragma once' in WaveGameModeBase.h"
#endif
#define WAVESURVIVAL_WaveGameModeBase_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaveGameModeBase(); \
	friend struct Z_Construct_UClass_AWaveGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AWaveGameModeBase, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(AWaveGameModeBase)


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaveGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWaveGameModeBase(AWaveGameModeBase&&); \
	AWaveGameModeBase(const AWaveGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaveGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaveGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaveGameModeBase) \
	NO_API virtual ~AWaveGameModeBase();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_12_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class AWaveGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
