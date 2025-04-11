// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/ActionSystem/WaveAction_ProjectileAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveAction_ProjectileAttack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePlayerCharacter_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_ProjectileAttack();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_ProjectileAttack_NoRegister();
// End Cross Module References

// Begin Class UWaveAction_ProjectileAttack Function AttackDelay_Elapsed
struct Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics
{
	struct WaveAction_ProjectileAttack_eventAttackDelay_Elapsed_Parms
	{
		AWavePlayerCharacter* InstigatorCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_ProjectileAttack_eventAttackDelay_Elapsed_Parms, InstigatorCharacter), Z_Construct_UClass_AWavePlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::NewProp_InstigatorCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction_ProjectileAttack, nullptr, "AttackDelay_Elapsed", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::WaveAction_ProjectileAttack_eventAttackDelay_Elapsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::WaveAction_ProjectileAttack_eventAttackDelay_Elapsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction_ProjectileAttack::execAttackDelay_Elapsed)
{
	P_GET_OBJECT(AWavePlayerCharacter,Z_Param_InstigatorCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackDelay_Elapsed(Z_Param_InstigatorCharacter);
	P_NATIVE_END;
}
// End Class UWaveAction_ProjectileAttack Function AttackDelay_Elapsed

// Begin Class UWaveAction_ProjectileAttack
void UWaveAction_ProjectileAttack::StaticRegisterNativesUWaveAction_ProjectileAttack()
{
	UClass* Class = UWaveAction_ProjectileAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackDelay_Elapsed", &UWaveAction_ProjectileAttack::execAttackDelay_Elapsed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveAction_ProjectileAttack);
UClass* Z_Construct_UClass_UWaveAction_ProjectileAttack_NoRegister()
{
	return UWaveAction_ProjectileAttack::StaticClass();
}
struct Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepRadius_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sphere radius of the sweep to find desired target under crosshair. Adjusts final projectile direction */" },
#endif
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere radius of the sweep to find desired target under crosshair. Adjusts final projectile direction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepDistanceFallback_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Fallback distance when sweep finds no collision under crosshair. Adjusts final projectile direction */" },
#endif
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fallback distance when sweep finds no collision under crosshair. Adjusts final projectile direction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandSocketName_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimDelay_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastingEffect_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastingSound_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_ProjectileAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepDistanceFallback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackAnimDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastingEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastingSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveAction_ProjectileAttack_AttackDelay_Elapsed, "AttackDelay_Elapsed" }, // 3996185551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveAction_ProjectileAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_SweepRadius = { "SweepRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_ProjectileAttack, SweepRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepRadius_MetaData), NewProp_SweepRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_SweepDistanceFallback = { "SweepDistanceFallback", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_ProjectileAttack, SweepDistanceFallback), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepDistanceFallback_MetaData), NewProp_SweepDistanceFallback_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_ProjectileAttack, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_ProjectileAttack, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_HandSocketName = { "HandSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_ProjectileAttack, HandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandSocketName_MetaData), NewProp_HandSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_AttackAnimDelay = { "AttackAnimDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_ProjectileAttack, AttackAnimDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimDelay_MetaData), NewProp_AttackAnimDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_AttackAnim = { "AttackAnim", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_ProjectileAttack, AttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnim_MetaData), NewProp_AttackAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_CastingEffect = { "CastingEffect", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_ProjectileAttack, CastingEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastingEffect_MetaData), NewProp_CastingEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_CastingSound = { "CastingSound", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_ProjectileAttack, CastingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastingSound_MetaData), NewProp_CastingSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_SweepRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_SweepDistanceFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_HandSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_AttackAnimDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_AttackAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_CastingEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::NewProp_CastingSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWaveAction,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::ClassParams = {
	&UWaveAction_ProjectileAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveAction_ProjectileAttack()
{
	if (!Z_Registration_Info_UClass_UWaveAction_ProjectileAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveAction_ProjectileAttack.OuterSingleton, Z_Construct_UClass_UWaveAction_ProjectileAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveAction_ProjectileAttack.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveAction_ProjectileAttack>()
{
	return UWaveAction_ProjectileAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveAction_ProjectileAttack);
UWaveAction_ProjectileAttack::~UWaveAction_ProjectileAttack() {}
// End Class UWaveAction_ProjectileAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_ProjectileAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveAction_ProjectileAttack, UWaveAction_ProjectileAttack::StaticClass, TEXT("UWaveAction_ProjectileAttack"), &Z_Registration_Info_UClass_UWaveAction_ProjectileAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveAction_ProjectileAttack), 2658761141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_ProjectileAttack_h_2821489827(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_ProjectileAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_ProjectileAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
