// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Projectiles/WaveProjectile_BlackHole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveProjectile_BlackHole() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile_BlackHole();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile_BlackHole_NoRegister();
// End Cross Module References

// Begin Class AWaveProjectile_BlackHole Function ApplyTickDamage
struct Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics
{
	struct WaveProjectile_BlackHole_eventApplyTickDamage_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_BlackHole.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_BlackHole_eventApplyTickDamage_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveProjectile_BlackHole, nullptr, "ApplyTickDamage", nullptr, nullptr, Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::WaveProjectile_BlackHole_eventApplyTickDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::WaveProjectile_BlackHole_eventApplyTickDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveProjectile_BlackHole::execApplyTickDamage)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyTickDamage(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AWaveProjectile_BlackHole Function ApplyTickDamage

// Begin Class AWaveProjectile_BlackHole
void AWaveProjectile_BlackHole::StaticRegisterNativesAWaveProjectile_BlackHole()
{
	UClass* Class = AWaveProjectile_BlackHole::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyTickDamage", &AWaveProjectile_BlackHole::execApplyTickDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveProjectile_BlackHole);
UClass* Z_Construct_UClass_AWaveProjectile_BlackHole_NoRegister()
{
	return AWaveProjectile_BlackHole::StaticClass();
}
struct Z_Construct_UClass_AWaveProjectile_BlackHole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Projectiles/WaveProjectile_BlackHole.h" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_BlackHole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_BlackHole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_BlackHole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageInterval_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_BlackHole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_BlackHole.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaveProjectile_BlackHole_ApplyTickDamage, "ApplyTickDamage" }, // 105278528
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveProjectile_BlackHole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile_BlackHole, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile_BlackHole, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::NewProp_DamageInterval = { "DamageInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile_BlackHole, DamageInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageInterval_MetaData), NewProp_DamageInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::NewProp_DecalComp = { "DecalComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile_BlackHole, DecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalComp_MetaData), NewProp_DecalComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::NewProp_DamageInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::NewProp_DecalComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWaveProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::ClassParams = {
	&AWaveProjectile_BlackHole::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaveProjectile_BlackHole()
{
	if (!Z_Registration_Info_UClass_AWaveProjectile_BlackHole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveProjectile_BlackHole.OuterSingleton, Z_Construct_UClass_AWaveProjectile_BlackHole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaveProjectile_BlackHole.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWaveProjectile_BlackHole>()
{
	return AWaveProjectile_BlackHole::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveProjectile_BlackHole);
AWaveProjectile_BlackHole::~AWaveProjectile_BlackHole() {}
// End Class AWaveProjectile_BlackHole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_BlackHole_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaveProjectile_BlackHole, AWaveProjectile_BlackHole::StaticClass, TEXT("AWaveProjectile_BlackHole"), &Z_Registration_Info_UClass_AWaveProjectile_BlackHole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveProjectile_BlackHole), 2346800702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_BlackHole_h_1688576003(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_BlackHole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_BlackHole_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
