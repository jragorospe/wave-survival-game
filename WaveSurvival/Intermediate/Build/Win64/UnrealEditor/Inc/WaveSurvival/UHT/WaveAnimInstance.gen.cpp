// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Animation/WaveAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionComponent_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAnimInstance();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAnimInstance_NoRegister();
// End Cross Module References

// Begin Class UWaveAnimInstance
void UWaveAnimInstance::StaticRegisterNativesUWaveAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveAnimInstance);
UClass* Z_Construct_UClass_UWaveAnimInstance_NoRegister()
{
	return UWaveAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWaveAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/WaveAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/WaveAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionComp_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Animation/WaveAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAnimInstance_Statics::NewProp_ActionComp = { "ActionComp", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAnimInstance, ActionComp), Z_Construct_UClass_UWaveActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionComp_MetaData), NewProp_ActionComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAnimInstance_Statics::NewProp_ActionComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveAnimInstance_Statics::ClassParams = {
	&UWaveAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWaveAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveAnimInstance.OuterSingleton, Z_Construct_UClass_UWaveAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveAnimInstance.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveAnimInstance>()
{
	return UWaveAnimInstance::StaticClass();
}
UWaveAnimInstance::UWaveAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveAnimInstance);
UWaveAnimInstance::~UWaveAnimInstance() {}
// End Class UWaveAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Animation_WaveAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveAnimInstance, UWaveAnimInstance::StaticClass, TEXT("UWaveAnimInstance"), &Z_Registration_Info_UClass_UWaveAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveAnimInstance), 1656363643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Animation_WaveAnimInstance_h_805263362(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Animation_WaveAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Animation_WaveAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
