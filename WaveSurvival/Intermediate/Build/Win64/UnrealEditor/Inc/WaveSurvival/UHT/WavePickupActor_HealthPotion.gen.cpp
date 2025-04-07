// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Pickups/WavePickupActor_HealthPotion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWavePickupActor_HealthPotion() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePickupActor();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePickupActor_HealthPotion();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePickupActor_HealthPotion_NoRegister();
// End Cross Module References

// Begin Class AWavePickupActor_HealthPotion
void AWavePickupActor_HealthPotion::StaticRegisterNativesAWavePickupActor_HealthPotion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWavePickupActor_HealthPotion);
UClass* Z_Construct_UClass_AWavePickupActor_HealthPotion_NoRegister()
{
	return AWavePickupActor_HealthPotion::StaticClass();
}
struct Z_Construct_UClass_AWavePickupActor_HealthPotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickups/WavePickupActor_HealthPotion.h" },
		{ "ModuleRelativePath", "Pickups/WavePickupActor_HealthPotion.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWavePickupActor_HealthPotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWavePickupActor_HealthPotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWavePickupActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePickupActor_HealthPotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWavePickupActor_HealthPotion_Statics::ClassParams = {
	&AWavePickupActor_HealthPotion::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePickupActor_HealthPotion_Statics::Class_MetaDataParams), Z_Construct_UClass_AWavePickupActor_HealthPotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWavePickupActor_HealthPotion()
{
	if (!Z_Registration_Info_UClass_AWavePickupActor_HealthPotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWavePickupActor_HealthPotion.OuterSingleton, Z_Construct_UClass_AWavePickupActor_HealthPotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWavePickupActor_HealthPotion.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWavePickupActor_HealthPotion>()
{
	return AWavePickupActor_HealthPotion::StaticClass();
}
AWavePickupActor_HealthPotion::AWavePickupActor_HealthPotion() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWavePickupActor_HealthPotion);
AWavePickupActor_HealthPotion::~AWavePickupActor_HealthPotion() {}
// End Class AWavePickupActor_HealthPotion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_HealthPotion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWavePickupActor_HealthPotion, AWavePickupActor_HealthPotion::StaticClass, TEXT("AWavePickupActor_HealthPotion"), &Z_Registration_Info_UClass_AWavePickupActor_HealthPotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWavePickupActor_HealthPotion), 4074941485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_HealthPotion_h_2919527126(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_HealthPotion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_HealthPotion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
