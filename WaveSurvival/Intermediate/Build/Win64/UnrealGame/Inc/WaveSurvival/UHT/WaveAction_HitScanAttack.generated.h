// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionSystem/WaveAction_HitScanAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWavePlayerCharacter;
struct FHitScanData;
#ifdef WAVESURVIVAL_WaveAction_HitScanAttack_generated_h
#error "WaveAction_HitScanAttack.generated.h already included, missing '#pragma once' in WaveAction_HitScanAttack.h"
#endif
#define WAVESURVIVAL_WaveAction_HitScanAttack_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanData_Statics; \
	WAVESURVIVAL_API static class UScriptStruct* StaticStruct();


template<> WAVESURVIVAL_API UScriptStruct* StaticStruct<struct FHitScanData>();

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnHitScanEffects_Implementation(AWavePlayerCharacter* InstigatorCharacter, FHitScanData const& InHitScanData); \
	DECLARE_FUNCTION(execSpawnHitScanEffects); \
	DECLARE_FUNCTION(execAttackDelay_Elapsed); \
	DECLARE_FUNCTION(execRunHitScan); \
	DECLARE_FUNCTION(execMulticastSpawnHitScanEffects);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_47_CALLBACK_WRAPPERS
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveAction_HitScanAttack(); \
	friend struct Z_Construct_UClass_UWaveAction_HitScanAttack_Statics; \
public: \
	DECLARE_CLASS(UWaveAction_HitScanAttack, UWaveAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(UWaveAction_HitScanAttack)


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveAction_HitScanAttack(UWaveAction_HitScanAttack&&); \
	UWaveAction_HitScanAttack(const UWaveAction_HitScanAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveAction_HitScanAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveAction_HitScanAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaveAction_HitScanAttack) \
	NO_API virtual ~UWaveAction_HitScanAttack();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_44_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_47_CALLBACK_WRAPPERS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_47_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class UWaveAction_HitScanAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
