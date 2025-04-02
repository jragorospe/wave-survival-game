// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/ActionSystem/WaveAction_MeleeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveAction_MeleeAttack() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_MeleeAttack();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_MeleeAttack_NoRegister();
// End Cross Module References

// Begin Class UWaveAction_MeleeAttack
void UWaveAction_MeleeAttack::StaticRegisterNativesUWaveAction_MeleeAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveAction_MeleeAttack);
UClass* Z_Construct_UClass_UWaveAction_MeleeAttack_NoRegister()
{
	return UWaveAction_MeleeAttack::StaticClass();
}
struct Z_Construct_UClass_UWaveAction_MeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionSystem/WaveAction_MeleeAttack.h" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_MeleeAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveAction_MeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWaveAction_MeleeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWaveAction,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_MeleeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveAction_MeleeAttack_Statics::ClassParams = {
	&UWaveAction_MeleeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_MeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveAction_MeleeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveAction_MeleeAttack()
{
	if (!Z_Registration_Info_UClass_UWaveAction_MeleeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveAction_MeleeAttack.OuterSingleton, Z_Construct_UClass_UWaveAction_MeleeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveAction_MeleeAttack.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveAction_MeleeAttack>()
{
	return UWaveAction_MeleeAttack::StaticClass();
}
UWaveAction_MeleeAttack::UWaveAction_MeleeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveAction_MeleeAttack);
UWaveAction_MeleeAttack::~UWaveAction_MeleeAttack() {}
// End Class UWaveAction_MeleeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_MeleeAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveAction_MeleeAttack, UWaveAction_MeleeAttack::StaticClass, TEXT("UWaveAction_MeleeAttack"), &Z_Registration_Info_UClass_UWaveAction_MeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveAction_MeleeAttack), 657265056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_MeleeAttack_h_3076144775(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_MeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_MeleeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
