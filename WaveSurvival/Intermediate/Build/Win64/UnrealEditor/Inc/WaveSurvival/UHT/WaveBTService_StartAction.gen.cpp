// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/AI/WaveBTService_StartAction.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveBTService_StartAction() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTService_StartAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTService_StartAction_NoRegister();
// End Cross Module References

// Begin Class UWaveBTService_StartAction
void UWaveBTService_StartAction::StaticRegisterNativesUWaveBTService_StartAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveBTService_StartAction);
UClass* Z_Construct_UClass_UWaveBTService_StartAction_NoRegister()
{
	return UWaveBTService_StartAction::StaticClass();
}
struct Z_Construct_UClass_UWaveBTService_StartAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/WaveBTService_StartAction.h" },
		{ "ModuleRelativePath", "AI/WaveBTService_StartAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "AI/WaveBTService_StartAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveBTService_StartAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveBTService_StartAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveBTService_StartAction, ActionName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionName_MetaData), NewProp_ActionName_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveBTService_StartAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveBTService_StartAction_Statics::NewProp_ActionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_StartAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveBTService_StartAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_StartAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveBTService_StartAction_Statics::ClassParams = {
	&UWaveBTService_StartAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveBTService_StartAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_StartAction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_StartAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveBTService_StartAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveBTService_StartAction()
{
	if (!Z_Registration_Info_UClass_UWaveBTService_StartAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveBTService_StartAction.OuterSingleton, Z_Construct_UClass_UWaveBTService_StartAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveBTService_StartAction.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveBTService_StartAction>()
{
	return UWaveBTService_StartAction::StaticClass();
}
UWaveBTService_StartAction::UWaveBTService_StartAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveBTService_StartAction);
UWaveBTService_StartAction::~UWaveBTService_StartAction() {}
// End Class UWaveBTService_StartAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_StartAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveBTService_StartAction, UWaveBTService_StartAction::StaticClass, TEXT("UWaveBTService_StartAction"), &Z_Registration_Info_UClass_UWaveBTService_StartAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveBTService_StartAction), 2148888036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_StartAction_h_2574996861(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_StartAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_StartAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
