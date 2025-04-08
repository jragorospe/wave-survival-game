// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/WaveAICharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWaveAttributeComponent;
#ifdef WAVESURVIVAL_WaveAICharacter_generated_h
#error "WaveAICharacter.generated.h already included, missing '#pragma once' in WaveAICharacter.h"
#endif
#define WAVESURVIVAL_WaveAICharacter_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPlayAttackFX_Implementation(); \
	DECLARE_FUNCTION(execOnHealthAttributeChanged); \
	DECLARE_FUNCTION(execMulticastPlayAttackFX); \
	DECLARE_FUNCTION(execGetTargetActor);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_19_CALLBACK_WRAPPERS
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaveAICharacter(); \
	friend struct Z_Construct_UClass_AWaveAICharacter_Statics; \
public: \
	DECLARE_CLASS(AWaveAICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(AWaveAICharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AWaveAICharacter*>(this); }


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWaveAICharacter(AWaveAICharacter&&); \
	AWaveAICharacter(const AWaveAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaveAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaveAICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaveAICharacter) \
	NO_API virtual ~AWaveAICharacter();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_16_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_19_CALLBACK_WRAPPERS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class AWaveAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
