// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/AI/WaveBTTask_HealSelf.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveBTTask_HealSelf() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTTask_HealSelf();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTTask_HealSelf_NoRegister();
// End Cross Module References

// Begin Class UWaveBTTask_HealSelf
void UWaveBTTask_HealSelf::StaticRegisterNativesUWaveBTTask_HealSelf()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveBTTask_HealSelf);
UClass* Z_Construct_UClass_UWaveBTTask_HealSelf_NoRegister()
{
	return UWaveBTTask_HealSelf::StaticClass();
}
struct Z_Construct_UClass_UWaveBTTask_HealSelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/WaveBTTask_HealSelf.h" },
		{ "ModuleRelativePath", "AI/WaveBTTask_HealSelf.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveBTTask_HealSelf>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWaveBTTask_HealSelf_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTTask_HealSelf_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveBTTask_HealSelf_Statics::ClassParams = {
	&UWaveBTTask_HealSelf::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTTask_HealSelf_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveBTTask_HealSelf_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveBTTask_HealSelf()
{
	if (!Z_Registration_Info_UClass_UWaveBTTask_HealSelf.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveBTTask_HealSelf.OuterSingleton, Z_Construct_UClass_UWaveBTTask_HealSelf_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveBTTask_HealSelf.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveBTTask_HealSelf>()
{
	return UWaveBTTask_HealSelf::StaticClass();
}
UWaveBTTask_HealSelf::UWaveBTTask_HealSelf(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveBTTask_HealSelf);
UWaveBTTask_HealSelf::~UWaveBTTask_HealSelf() {}
// End Class UWaveBTTask_HealSelf

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTTask_HealSelf_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveBTTask_HealSelf, UWaveBTTask_HealSelf::StaticClass, TEXT("UWaveBTTask_HealSelf"), &Z_Registration_Info_UClass_UWaveBTTask_HealSelf, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveBTTask_HealSelf), 247018586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTTask_HealSelf_h_3617448476(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTTask_HealSelf_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTTask_HealSelf_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
