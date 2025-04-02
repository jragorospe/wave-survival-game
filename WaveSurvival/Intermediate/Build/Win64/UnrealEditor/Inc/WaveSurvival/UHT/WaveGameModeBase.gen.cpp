// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Core/WaveGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveGameModeBase();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveGameModeBase_NoRegister();
// End Cross Module References

// Begin Class AWaveGameModeBase
void AWaveGameModeBase::StaticRegisterNativesAWaveGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveGameModeBase);
UClass* Z_Construct_UClass_AWaveGameModeBase_NoRegister()
{
	return AWaveGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AWaveGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/WaveGameModeBase.h" },
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWaveGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveGameModeBase_Statics::ClassParams = {
	&AWaveGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaveGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaveGameModeBase()
{
	if (!Z_Registration_Info_UClass_AWaveGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveGameModeBase.OuterSingleton, Z_Construct_UClass_AWaveGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaveGameModeBase.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWaveGameModeBase>()
{
	return AWaveGameModeBase::StaticClass();
}
AWaveGameModeBase::AWaveGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveGameModeBase);
AWaveGameModeBase::~AWaveGameModeBase() {}
// End Class AWaveGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaveGameModeBase, AWaveGameModeBase::StaticClass, TEXT("AWaveGameModeBase"), &Z_Registration_Info_UClass_AWaveGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveGameModeBase), 1073178103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_1024841259(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
