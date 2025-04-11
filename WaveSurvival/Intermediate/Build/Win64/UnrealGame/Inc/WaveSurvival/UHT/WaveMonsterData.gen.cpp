// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Core/WaveMonsterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveMonsterData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveMonsterData();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveMonsterData_NoRegister();
// End Cross Module References

// Begin Class UWaveMonsterData
void UWaveMonsterData::StaticRegisterNativesUWaveMonsterData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveMonsterData);
UClass* Z_Construct_UClass_UWaveMonsterData_NoRegister()
{
	return UWaveMonsterData::StaticClass();
}
struct Z_Construct_UClass_UWaveMonsterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/WaveMonsterData.h" },
		{ "ModuleRelativePath", "Core/WaveMonsterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterClass_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "ModuleRelativePath", "Core/WaveMonsterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Spawn Info" },
		{ "ModuleRelativePath", "Core/WaveMonsterData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MonsterClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveMonsterData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaveMonsterData_Statics::NewProp_MonsterClass = { "MonsterClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveMonsterData, MonsterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterClass_MetaData), NewProp_MonsterClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaveMonsterData_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UWaveAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveMonsterData_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveMonsterData, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveMonsterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveMonsterData_Statics::NewProp_MonsterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveMonsterData_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveMonsterData_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveMonsterData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveMonsterData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveMonsterData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveMonsterData_Statics::ClassParams = {
	&UWaveMonsterData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveMonsterData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveMonsterData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveMonsterData_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveMonsterData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveMonsterData()
{
	if (!Z_Registration_Info_UClass_UWaveMonsterData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveMonsterData.OuterSingleton, Z_Construct_UClass_UWaveMonsterData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveMonsterData.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveMonsterData>()
{
	return UWaveMonsterData::StaticClass();
}
UWaveMonsterData::UWaveMonsterData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveMonsterData);
UWaveMonsterData::~UWaveMonsterData() {}
// End Class UWaveMonsterData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveMonsterData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveMonsterData, UWaveMonsterData::StaticClass, TEXT("UWaveMonsterData"), &Z_Registration_Info_UClass_UWaveMonsterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveMonsterData), 962750819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveMonsterData_h_2396124354(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveMonsterData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveMonsterData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
