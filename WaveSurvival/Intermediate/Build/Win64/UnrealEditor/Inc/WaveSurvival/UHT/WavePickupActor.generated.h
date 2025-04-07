// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/WavePickupActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef WAVESURVIVAL_WavePickupActor_generated_h
#error "WavePickupActor.generated.h already included, missing '#pragma once' in WavePickupActor.h"
#endif
#define WAVESURVIVAL_WavePickupActor_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereOverlap); \
	DECLARE_FUNCTION(execOnRep_IsActive);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWavePickupActor(); \
	friend struct Z_Construct_UClass_AWavePickupActor_Statics; \
public: \
	DECLARE_CLASS(AWavePickupActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaveSurvival"), NO_API) \
	DECLARE_SERIALIZER(AWavePickupActor) \
	virtual UObject* _getUObject() const override { return const_cast<AWavePickupActor*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWavePickupActor(AWavePickupActor&&); \
	AWavePickupActor(const AWavePickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWavePickupActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWavePickupActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWavePickupActor) \
	NO_API virtual ~AWavePickupActor();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_h_16_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class AWavePickupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
