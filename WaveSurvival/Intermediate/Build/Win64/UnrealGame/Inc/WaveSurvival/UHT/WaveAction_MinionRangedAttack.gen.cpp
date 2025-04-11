// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/AI/WaveAction_MinionRangedAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveAction_MinionRangedAttack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_MinionRangedAttack();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_MinionRangedAttack_NoRegister();
// End Cross Module References

// Begin Class UWaveAction_MinionRangedAttack
void UWaveAction_MinionRangedAttack::StaticRegisterNativesUWaveAction_MinionRangedAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveAction_MinionRangedAttack);
UClass* Z_Construct_UClass_UWaveAction_MinionRangedAttack_NoRegister()
{
	return UWaveAction_MinionRangedAttack::StaticClass();
}
struct Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/WaveAction_MinionRangedAttack.h" },
		{ "ModuleRelativePath", "AI/WaveAction_MinionRangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBulletSpread_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Max Random Bullet Spread (in Degrees) in positive and negative angle (shared between Yaw and Pitch) */" },
#endif
		{ "ModuleRelativePath", "AI/WaveAction_MinionRangedAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Random Bullet Spread (in Degrees) in positive and negative angle (shared between Yaw and Pitch)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "AI/WaveAction_MinionRangedAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBulletSpread;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveAction_MinionRangedAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::NewProp_MaxBulletSpread = { "MaxBulletSpread", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_MinionRangedAttack, MaxBulletSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBulletSpread_MetaData), NewProp_MaxBulletSpread_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_MinionRangedAttack, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::NewProp_MaxBulletSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWaveAction,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::ClassParams = {
	&UWaveAction_MinionRangedAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveAction_MinionRangedAttack()
{
	if (!Z_Registration_Info_UClass_UWaveAction_MinionRangedAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveAction_MinionRangedAttack.OuterSingleton, Z_Construct_UClass_UWaveAction_MinionRangedAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveAction_MinionRangedAttack.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveAction_MinionRangedAttack>()
{
	return UWaveAction_MinionRangedAttack::StaticClass();
}
UWaveAction_MinionRangedAttack::UWaveAction_MinionRangedAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveAction_MinionRangedAttack);
UWaveAction_MinionRangedAttack::~UWaveAction_MinionRangedAttack() {}
// End Class UWaveAction_MinionRangedAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAction_MinionRangedAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveAction_MinionRangedAttack, UWaveAction_MinionRangedAttack::StaticClass, TEXT("UWaveAction_MinionRangedAttack"), &Z_Registration_Info_UClass_UWaveAction_MinionRangedAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveAction_MinionRangedAttack), 1917972710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAction_MinionRangedAttack_h_1048060388(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAction_MinionRangedAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAction_MinionRangedAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
