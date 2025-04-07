// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Pickups/WavePickupActor_GrantAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWavePickupActor_GrantAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePickupActor();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePickupActor_GrantAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePickupActor_GrantAction_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_NoRegister();
// End Cross Module References

// Begin Class AWavePickupActor_GrantAction
void AWavePickupActor_GrantAction::StaticRegisterNativesAWavePickupActor_GrantAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWavePickupActor_GrantAction);
UClass* Z_Construct_UClass_AWavePickupActor_GrantAction_NoRegister()
{
	return AWavePickupActor_GrantAction::StaticClass();
}
struct Z_Construct_UClass_AWavePickupActor_GrantAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickups/WavePickupActor_GrantAction.h" },
		{ "ModuleRelativePath", "Pickups/WavePickupActor_GrantAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionToGrant_MetaData[] = {
		{ "Category", "Powerup" },
		{ "ModuleRelativePath", "Pickups/WavePickupActor_GrantAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActionToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWavePickupActor_GrantAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::NewProp_ActionToGrant = { "ActionToGrant", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePickupActor_GrantAction, ActionToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UWaveAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionToGrant_MetaData), NewProp_ActionToGrant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::NewProp_ActionToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWavePickupActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::ClassParams = {
	&AWavePickupActor_GrantAction::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::Class_MetaDataParams), Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWavePickupActor_GrantAction()
{
	if (!Z_Registration_Info_UClass_AWavePickupActor_GrantAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWavePickupActor_GrantAction.OuterSingleton, Z_Construct_UClass_AWavePickupActor_GrantAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWavePickupActor_GrantAction.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWavePickupActor_GrantAction>()
{
	return AWavePickupActor_GrantAction::StaticClass();
}
AWavePickupActor_GrantAction::AWavePickupActor_GrantAction() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWavePickupActor_GrantAction);
AWavePickupActor_GrantAction::~AWavePickupActor_GrantAction() {}
// End Class AWavePickupActor_GrantAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_GrantAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWavePickupActor_GrantAction, AWavePickupActor_GrantAction::StaticClass, TEXT("AWavePickupActor_GrantAction"), &Z_Registration_Info_UClass_AWavePickupActor_GrantAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWavePickupActor_GrantAction), 4152510279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_GrantAction_h_3046141701(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_GrantAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Pickups_WavePickupActor_GrantAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
