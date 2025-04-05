// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Projectiles/WaveProjectile_Magic.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveProjectile_Magic() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile_Magic();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile_Magic_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionEffect_NoRegister();
// End Cross Module References

// Begin Class AWaveProjectile_Magic Function OnActorOverlap
struct Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics
{
	struct WaveProjectile_Magic_eventOnActorOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_Magic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_Magic_eventOnActorOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_Magic_eventOnActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_Magic_eventOnActorOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_Magic_eventOnActorOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WaveProjectile_Magic_eventOnActorOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveProjectile_Magic_eventOnActorOverlap_Parms), &Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_Magic_eventOnActorOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveProjectile_Magic, nullptr, "OnActorOverlap", nullptr, nullptr, Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::WaveProjectile_Magic_eventOnActorOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::WaveProjectile_Magic_eventOnActorOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveProjectile_Magic::execOnActorOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWaveProjectile_Magic Function OnActorOverlap

// Begin Class AWaveProjectile_Magic
void AWaveProjectile_Magic::StaticRegisterNativesAWaveProjectile_Magic()
{
	UClass* Class = AWaveProjectile_Magic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnActorOverlap", &AWaveProjectile_Magic::execOnActorOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveProjectile_Magic);
UClass* Z_Construct_UClass_AWaveProjectile_Magic_NoRegister()
{
	return AWaveProjectile_Magic::StaticClass();
}
struct Z_Construct_UClass_AWaveProjectile_Magic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Projectiles/WaveProjectile_Magic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_Magic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_Magic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurningEffectClass_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_Magic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagedActor_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile_Magic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BurningEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaveProjectile_Magic_OnActorOverlap, "OnActorOverlap" }, // 2019326137
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveProjectile_Magic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaveProjectile_Magic_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile_Magic, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWaveProjectile_Magic_Statics::NewProp_BurningEffectClass = { "BurningEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile_Magic, BurningEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWaveActionEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurningEffectClass_MetaData), NewProp_BurningEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveProjectile_Magic_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile_Magic, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagedActor_MetaData), NewProp_DamagedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveProjectile_Magic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Magic_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Magic_Statics::NewProp_BurningEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Magic_Statics::NewProp_DamagedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Magic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaveProjectile_Magic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWaveProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Magic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveProjectile_Magic_Statics::ClassParams = {
	&AWaveProjectile_Magic::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWaveProjectile_Magic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Magic_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Magic_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaveProjectile_Magic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaveProjectile_Magic()
{
	if (!Z_Registration_Info_UClass_AWaveProjectile_Magic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveProjectile_Magic.OuterSingleton, Z_Construct_UClass_AWaveProjectile_Magic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaveProjectile_Magic.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWaveProjectile_Magic>()
{
	return AWaveProjectile_Magic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveProjectile_Magic);
AWaveProjectile_Magic::~AWaveProjectile_Magic() {}
// End Class AWaveProjectile_Magic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaveProjectile_Magic, AWaveProjectile_Magic::StaticClass, TEXT("AWaveProjectile_Magic"), &Z_Registration_Info_UClass_AWaveProjectile_Magic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveProjectile_Magic), 994056341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_206104814(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_Magic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
