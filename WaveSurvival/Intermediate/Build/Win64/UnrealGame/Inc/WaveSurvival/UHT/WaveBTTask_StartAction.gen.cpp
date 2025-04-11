// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/AI/WaveBTTask_StartAction.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveBTTask_StartAction() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTTask_StartAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTTask_StartAction_NoRegister();
// End Cross Module References

// Begin Class UWaveBTTask_StartAction
void UWaveBTTask_StartAction::StaticRegisterNativesUWaveBTTask_StartAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveBTTask_StartAction);
UClass* Z_Construct_UClass_UWaveBTTask_StartAction_NoRegister()
{
	return UWaveBTTask_StartAction::StaticClass();
}
struct Z_Construct_UClass_UWaveBTTask_StartAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/WaveBTTask_StartAction.h" },
		{ "ModuleRelativePath", "AI/WaveBTTask_StartAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "AI/WaveBTTask_StartAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveBTTask_StartAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveBTTask_StartAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveBTTask_StartAction, ActionName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveBTTask_StartAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveBTTask_StartAction_Statics::NewProp_ActionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTTask_StartAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveBTTask_StartAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTTask_StartAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveBTTask_StartAction_Statics::ClassParams = {
	&UWaveBTTask_StartAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveBTTask_StartAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTTask_StartAction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTTask_StartAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveBTTask_StartAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveBTTask_StartAction()
{
	if (!Z_Registration_Info_UClass_UWaveBTTask_StartAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveBTTask_StartAction.OuterSingleton, Z_Construct_UClass_UWaveBTTask_StartAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveBTTask_StartAction.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveBTTask_StartAction>()
{
	return UWaveBTTask_StartAction::StaticClass();
}
UWaveBTTask_StartAction::UWaveBTTask_StartAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveBTTask_StartAction);
UWaveBTTask_StartAction::~UWaveBTTask_StartAction() {}
// End Class UWaveBTTask_StartAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTTask_StartAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveBTTask_StartAction, UWaveBTTask_StartAction::StaticClass, TEXT("UWaveBTTask_StartAction"), &Z_Registration_Info_UClass_UWaveBTTask_StartAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveBTTask_StartAction), 163762116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTTask_StartAction_h_213394500(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTTask_StartAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTTask_StartAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
