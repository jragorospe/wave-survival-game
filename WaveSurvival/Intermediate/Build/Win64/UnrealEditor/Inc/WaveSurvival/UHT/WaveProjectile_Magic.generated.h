// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectiles/WaveProjectile_Magic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef WAVESURVIVAL_WaveProjectile_Magic_generated_h
#error "WaveProjectile_Magic.generated.h already included, missing '#pragma once' in WaveProjectile_Magic.h"
#endif
#define WAVESURVIVAL_WaveProjectile_Magic_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorOverlap);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaveProjectile_Magic(); \
	friend struct Z_Construct_UClass_AWaveProjectile_Magic_Statics; \
public: \
	DECLARE_CLASS(AWaveProjectile_Magic, AWaveProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(AWaveProjectile_Magic)


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWaveProjectile_Magic(AWaveProjectile_Magic&&); \
	AWaveProjectile_Magic(const AWaveProjectile_Magic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaveProjectile_Magic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaveProjectile_Magic); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWaveProjectile_Magic) \
	NO_API virtual ~AWaveProjectile_Magic();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_17_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class AWaveProjectile_Magic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
