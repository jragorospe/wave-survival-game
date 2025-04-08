// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/AI/WaveBTService_CheckAttackRange.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveBTService_CheckAttackRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTService_CheckAttackRange();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveBTService_CheckAttackRange_NoRegister();
// End Cross Module References

// Begin Class UWaveBTService_CheckAttackRange
void UWaveBTService_CheckAttackRange::StaticRegisterNativesUWaveBTService_CheckAttackRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveBTService_CheckAttackRange);
UClass* Z_Construct_UClass_UWaveBTService_CheckAttackRange_NoRegister()
{
	return UWaveBTService_CheckAttackRange::StaticClass();
}
struct Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/WaveBTService_CheckAttackRange.h" },
		{ "ModuleRelativePath", "AI/WaveBTService_CheckAttackRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRangeKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/WaveBTService_CheckAttackRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/WaveBTService_CheckAttackRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttackRange_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Max desired attack range of AI pawn */" },
#endif
		{ "ModuleRelativePath", "AI/WaveBTService_CheckAttackRange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max desired attack range of AI pawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackRangeKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttackRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveBTService_CheckAttackRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::NewProp_AttackRangeKey = { "AttackRangeKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveBTService_CheckAttackRange, AttackRangeKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRangeKey_MetaData), NewProp_AttackRangeKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveBTService_CheckAttackRange, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorKey_MetaData), NewProp_TargetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::NewProp_MaxAttackRange = { "MaxAttackRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveBTService_CheckAttackRange, MaxAttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttackRange_MetaData), NewProp_MaxAttackRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::NewProp_AttackRangeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::NewProp_TargetActorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::NewProp_MaxAttackRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::ClassParams = {
	&UWaveBTService_CheckAttackRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveBTService_CheckAttackRange()
{
	if (!Z_Registration_Info_UClass_UWaveBTService_CheckAttackRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveBTService_CheckAttackRange.OuterSingleton, Z_Construct_UClass_UWaveBTService_CheckAttackRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveBTService_CheckAttackRange.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveBTService_CheckAttackRange>()
{
	return UWaveBTService_CheckAttackRange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveBTService_CheckAttackRange);
UWaveBTService_CheckAttackRange::~UWaveBTService_CheckAttackRange() {}
// End Class UWaveBTService_CheckAttackRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_CheckAttackRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveBTService_CheckAttackRange, UWaveBTService_CheckAttackRange::StaticClass, TEXT("UWaveBTService_CheckAttackRange"), &Z_Registration_Info_UClass_UWaveBTService_CheckAttackRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveBTService_CheckAttackRange), 3810782232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_CheckAttackRange_h_2303466278(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_CheckAttackRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveBTService_CheckAttackRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
