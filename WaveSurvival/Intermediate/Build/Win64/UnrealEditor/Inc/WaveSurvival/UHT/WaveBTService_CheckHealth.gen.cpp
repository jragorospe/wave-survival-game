// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/AI/WaveBTService_CheckHealth.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveBTService_CheckHealth() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTService_CheckHealth();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTService_CheckHealth_NoRegister();
// End Cross Module References

// Begin Class UWaveBTService_CheckHealth
void UWaveBTService_CheckHealth::StaticRegisterNativesUWaveBTService_CheckHealth()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveBTService_CheckHealth);
UClass* Z_Construct_UClass_UWaveBTService_CheckHealth_NoRegister()
{
	return UWaveBTService_CheckHealth::StaticClass();
}
struct Z_Construct_UClass_UWaveBTService_CheckHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/WaveBTService_CheckHealth.h" },
		{ "ModuleRelativePath", "AI/WaveBTService_CheckHealth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowHealthKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/WaveBTService_CheckHealth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowHealthFraction_MetaData[] = {
		{ "Category", "AI" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "AI/WaveBTService_CheckHealth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowHealthKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowHealthFraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveBTService_CheckHealth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::NewProp_LowHealthKey = { "LowHealthKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveBTService_CheckHealth, LowHealthKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowHealthKey_MetaData), NewProp_LowHealthKey_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::NewProp_LowHealthFraction = { "LowHealthFraction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveBTService_CheckHealth, LowHealthFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowHealthFraction_MetaData), NewProp_LowHealthFraction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::NewProp_LowHealthKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::NewProp_LowHealthFraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::ClassParams = {
	&UWaveBTService_CheckHealth::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveBTService_CheckHealth()
{
	if (!Z_Registration_Info_UClass_UWaveBTService_CheckHealth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveBTService_CheckHealth.OuterSingleton, Z_Construct_UClass_UWaveBTService_CheckHealth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveBTService_CheckHealth.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveBTService_CheckHealth>()
{
	return UWaveBTService_CheckHealth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveBTService_CheckHealth);
UWaveBTService_CheckHealth::~UWaveBTService_CheckHealth() {}
// End Class UWaveBTService_CheckHealth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_CheckHealth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveBTService_CheckHealth, UWaveBTService_CheckHealth::StaticClass, TEXT("UWaveBTService_CheckHealth"), &Z_Registration_Info_UClass_UWaveBTService_CheckHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveBTService_CheckHealth), 938411625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_CheckHealth_h_509287179(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_CheckHealth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_CheckHealth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
