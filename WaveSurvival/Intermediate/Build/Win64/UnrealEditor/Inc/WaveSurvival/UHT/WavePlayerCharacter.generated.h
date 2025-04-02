// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/WavePlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWaveAttributeComponent;
#ifdef WAVESURVIVAL_WavePlayerCharacter_generated_h
#error "WavePlayerCharacter.generated.h already included, missing '#pragma once' in WavePlayerCharacter.h"
#endif
#define WAVESURVIVAL_WavePlayerCharacter_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHealthAttributeChanged);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWavePlayerCharacter(); \
	friend struct Z_Construct_UClass_AWavePlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AWavePlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(AWavePlayerCharacter)


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWavePlayerCharacter(AWavePlayerCharacter&&); \
	AWavePlayerCharacter(const AWavePlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWavePlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWavePlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWavePlayerCharacter) \
	NO_API virtual ~AWavePlayerCharacter();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_18_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class AWavePlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
