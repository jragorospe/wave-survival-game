// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Projectiles/WaveProjectile_Dash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveProjectile_Dash() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile_Dash();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile_Dash_NoRegister();
// End Cross Module References

// Begin Class AWaveProjectile_Dash
void AWaveProjectile_Dash::StaticRegisterNativesAWaveProjectile_Dash()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveProjectile_Dash);
UClass* Z_Construct_UClass_AWaveProjectile_Dash_NoRegister()
{
	return AWaveProjectile_Dash::StaticClass();
}
struct Z_Construct_UClass_AWaveProjectile_Dash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Projectiles/WaveProjectile_Dash.h" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_Dash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDelay_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_Dash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetonateDelay_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_Dash.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetonateDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveProjectile_Dash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaveProjectile_Dash_Statics::NewProp_TeleportDelay = { "TeleportDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile_Dash, TeleportDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportDelay_MetaData), NewProp_TeleportDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaveProjectile_Dash_Statics::NewProp_DetonateDelay = { "DetonateDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile_Dash, DetonateDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetonateDelay_MetaData), NewProp_DetonateDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveProjectile_Dash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Dash_Statics::NewProp_TeleportDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Dash_Statics::NewProp_DetonateDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Dash_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaveProjectile_Dash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWaveProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Dash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveProjectile_Dash_Statics::ClassParams = {
	&AWaveProjectile_Dash::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWaveProjectile_Dash_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Dash_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Dash_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaveProjectile_Dash_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaveProjectile_Dash()
{
	if (!Z_Registration_Info_UClass_AWaveProjectile_Dash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveProjectile_Dash.OuterSingleton, Z_Construct_UClass_AWaveProjectile_Dash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaveProjectile_Dash.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWaveProjectile_Dash>()
{
	return AWaveProjectile_Dash::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveProjectile_Dash);
AWaveProjectile_Dash::~AWaveProjectile_Dash() {}
// End Class AWaveProjectile_Dash

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Dash_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaveProjectile_Dash, AWaveProjectile_Dash::StaticClass, TEXT("AWaveProjectile_Dash"), &Z_Registration_Info_UClass_AWaveProjectile_Dash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveProjectile_Dash), 1339480721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Dash_h_3434958010(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Dash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Dash_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
