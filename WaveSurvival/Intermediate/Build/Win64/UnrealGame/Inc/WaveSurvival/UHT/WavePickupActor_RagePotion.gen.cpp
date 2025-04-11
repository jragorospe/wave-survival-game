// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Pickups/WavePickupActor_RagePotion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWavePickupActor_RagePotion() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePickupActor();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePickupActor_RagePotion();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePickupActor_RagePotion_NoRegister();
// End Cross Module References

// Begin Class AWavePickupActor_RagePotion
void AWavePickupActor_RagePotion::StaticRegisterNativesAWavePickupActor_RagePotion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWavePickupActor_RagePotion);
UClass* Z_Construct_UClass_AWavePickupActor_RagePotion_NoRegister()
{
	return AWavePickupActor_RagePotion::StaticClass();
}
struct Z_Construct_UClass_AWavePickupActor_RagePotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickups/WavePickupActor_RagePotion.h" },
		{ "ModuleRelativePath", "Pickups/WavePickupActor_RagePotion.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWavePickupActor_RagePotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWavePickupActor_RagePotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWavePickupActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePickupActor_RagePotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWavePickupActor_RagePotion_Statics::ClassParams = {
	&AWavePickupActor_RagePotion::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePickupActor_RagePotion_Statics::Class_MetaDataParams), Z_Construct_UClass_AWavePickupActor_RagePotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWavePickupActor_RagePotion()
{
	if (!Z_Registration_Info_UClass_AWavePickupActor_RagePotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWavePickupActor_RagePotion.OuterSingleton, Z_Construct_UClass_AWavePickupActor_RagePotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWavePickupActor_RagePotion.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWavePickupActor_RagePotion>()
{
	return AWavePickupActor_RagePotion::StaticClass();
}
AWavePickupActor_RagePotion::AWavePickupActor_RagePotion() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWavePickupActor_RagePotion);
AWavePickupActor_RagePotion::~AWavePickupActor_RagePotion() {}
// End Class AWavePickupActor_RagePotion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_RagePotion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWavePickupActor_RagePotion, AWavePickupActor_RagePotion::StaticClass, TEXT("AWavePickupActor_RagePotion"), &Z_Registration_Info_UClass_AWavePickupActor_RagePotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWavePickupActor_RagePotion), 2955412524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_RagePotion_h_2465733960(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_RagePotion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_RagePotion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
