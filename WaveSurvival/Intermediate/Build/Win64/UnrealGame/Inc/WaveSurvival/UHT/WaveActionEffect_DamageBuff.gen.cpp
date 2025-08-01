// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/ActionSystem/WaveActionEffect_DamageBuff.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveActionEffect_DamageBuff() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionEffect();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionEffect_DamageBuff();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionEffect_DamageBuff_NoRegister();
// End Cross Module References

// Begin Class UWaveActionEffect_DamageBuff
void UWaveActionEffect_DamageBuff::StaticRegisterNativesUWaveActionEffect_DamageBuff()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveActionEffect_DamageBuff);
UClass* Z_Construct_UClass_UWaveActionEffect_DamageBuff_NoRegister()
{
	return UWaveActionEffect_DamageBuff::StaticClass();
}
struct Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionSystem/WaveActionEffect_DamageBuff.h" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionEffect_DamageBuff.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionEffect_DamageBuff.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveActionEffect_DamageBuff>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveActionEffect_DamageBuff, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::NewProp_DamageMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWaveActionEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::ClassParams = {
	&UWaveActionEffect_DamageBuff::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveActionEffect_DamageBuff()
{
	if (!Z_Registration_Info_UClass_UWaveActionEffect_DamageBuff.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveActionEffect_DamageBuff.OuterSingleton, Z_Construct_UClass_UWaveActionEffect_DamageBuff_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveActionEffect_DamageBuff.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveActionEffect_DamageBuff>()
{
	return UWaveActionEffect_DamageBuff::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveActionEffect_DamageBuff);
UWaveActionEffect_DamageBuff::~UWaveActionEffect_DamageBuff() {}
// End Class UWaveActionEffect_DamageBuff

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_DamageBuff_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveActionEffect_DamageBuff, UWaveActionEffect_DamageBuff::StaticClass, TEXT("UWaveActionEffect_DamageBuff"), &Z_Registration_Info_UClass_UWaveActionEffect_DamageBuff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveActionEffect_DamageBuff), 3874559973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_DamageBuff_h_1631964599(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_DamageBuff_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_DamageBuff_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
