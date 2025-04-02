// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/WaveInteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef WAVESURVIVAL_WaveInteractionComponent_generated_h
#error "WaveInteractionComponent.generated.h already included, missing '#pragma once' in WaveInteractionComponent.h"
#endif
#define WAVESURVIVAL_WaveInteractionComponent_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerInteract_Implementation(AActor* InFocus); \
	DECLARE_FUNCTION(execServerInteract);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_16_CALLBACK_WRAPPERS
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveInteractionComponent(); \
	friend struct Z_Construct_UClass_UWaveInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UWaveInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(UWaveInteractionComponent)


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveInteractionComponent(UWaveInteractionComponent&&); \
	UWaveInteractionComponent(const UWaveInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaveInteractionComponent) \
	NO_API virtual ~UWaveInteractionComponent();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_13_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_16_CALLBACK_WRAPPERS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class UWaveInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
