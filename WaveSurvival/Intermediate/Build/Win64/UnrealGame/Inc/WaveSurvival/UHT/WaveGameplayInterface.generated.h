// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/WaveGameplayInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef WAVESURVIVAL_WaveGameplayInterface_generated_h
#error "WaveGameplayInterface.generated.h already included, missing '#pragma once' in WaveGameplayInterface.h"
#endif
#define WAVESURVIVAL_WaveGameplayInterface_generated_h

#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
	virtual FText GetInteractText_Implementation(APawn* InstigatorPawn) { return FText::GetEmpty(); }; \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetInteractText);


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WAVESURVIVAL_API UWaveGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveGameplayInterface(UWaveGameplayInterface&&); \
	UWaveGameplayInterface(const UWaveGameplayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WAVESURVIVAL_API, UWaveGameplayInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveGameplayInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveGameplayInterface) \
	WAVESURVIVAL_API virtual ~UWaveGameplayInterface();


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWaveGameplayInterface(); \
	friend struct Z_Construct_UClass_UWaveGameplayInterface_Statics; \
public: \
	DECLARE_CLASS(UWaveGameplayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WaveSurvival"), WAVESURVIVAL_API) \
	DECLARE_SERIALIZER(UWaveGameplayInterface)


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWaveGameplayInterface() {} \
public: \
	typedef UWaveGameplayInterface UClassType; \
	typedef IWaveGameplayInterface ThisClass; \
	static FText Execute_GetInteractText(UObject* O, APawn* InstigatorPawn); \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_10_PROLOG
#define FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVESURVIVAL_API UClass* StaticClass<class UWaveGameplayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
