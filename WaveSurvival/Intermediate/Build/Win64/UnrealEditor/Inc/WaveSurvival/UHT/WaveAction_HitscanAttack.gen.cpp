// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/ActionSystem/WaveAction_HitscanAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveAction_HitscanAttack() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_HitscanAttack();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_HitscanAttack_NoRegister();
// End Cross Module References

// Begin Class UWaveAction_HitscanAttack
void UWaveAction_HitscanAttack::StaticRegisterNativesUWaveAction_HitscanAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveAction_HitscanAttack);
UClass* Z_Construct_UClass_UWaveAction_HitscanAttack_NoRegister()
{
	return UWaveAction_HitscanAttack::StaticClass();
}
struct Z_Construct_UClass_UWaveAction_HitscanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionSystem/WaveAction_HitscanAttack.h" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitscanAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveAction_HitscanAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWaveAction_HitscanAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWaveAction,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_HitscanAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveAction_HitscanAttack_Statics::ClassParams = {
	&UWaveAction_HitscanAttack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_HitscanAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveAction_HitscanAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveAction_HitscanAttack()
{
	if (!Z_Registration_Info_UClass_UWaveAction_HitscanAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveAction_HitscanAttack.OuterSingleton, Z_Construct_UClass_UWaveAction_HitscanAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveAction_HitscanAttack.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveAction_HitscanAttack>()
{
	return UWaveAction_HitscanAttack::StaticClass();
}
UWaveAction_HitscanAttack::UWaveAction_HitscanAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveAction_HitscanAttack);
UWaveAction_HitscanAttack::~UWaveAction_HitscanAttack() {}
// End Class UWaveAction_HitscanAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitscanAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveAction_HitscanAttack, UWaveAction_HitscanAttack::StaticClass, TEXT("UWaveAction_HitscanAttack"), &Z_Registration_Info_UClass_UWaveAction_HitscanAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveAction_HitscanAttack), 1949792172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitscanAttack_h_2238283836(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitscanAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitscanAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
