// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Core/WaveGameplayFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveGameplayFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveGameplayFunctionLibrary();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveGameplayFunctionLibrary_NoRegister();
// End Cross Module References

// Begin Class UWaveGameplayFunctionLibrary Function ApplyDamage
struct Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics
{
	struct WaveGameplayFunctionLibrary_eventApplyDamage_Parms
	{
		AActor* DamageCauser;
		AActor* TargetActor;
		float DamageMultiplier;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Core/WaveGameplayFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayFunctionLibrary_eventApplyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayFunctionLibrary_eventApplyDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayFunctionLibrary_eventApplyDamage_Parms, DamageMultiplier), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveGameplayFunctionLibrary_eventApplyDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveGameplayFunctionLibrary_eventApplyDamage_Parms), &Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveGameplayFunctionLibrary, nullptr, "ApplyDamage", nullptr, nullptr, Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::WaveGameplayFunctionLibrary_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::WaveGameplayFunctionLibrary_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveGameplayFunctionLibrary::execApplyDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWaveGameplayFunctionLibrary::ApplyDamage(Z_Param_DamageCauser,Z_Param_TargetActor,Z_Param_DamageMultiplier);
	P_NATIVE_END;
}
// End Class UWaveGameplayFunctionLibrary Function ApplyDamage

// Begin Class UWaveGameplayFunctionLibrary Function ApplyDirectionalDamage
struct Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics
{
	struct WaveGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms
	{
		AActor* DamageCauser;
		AActor* TargetActor;
		float DamageMultiplier;
		FHitResult HitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Core/WaveGameplayFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, DamageMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
void Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms), &Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveGameplayFunctionLibrary, nullptr, "ApplyDirectionalDamage", nullptr, nullptr, Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::WaveGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::WaveGameplayFunctionLibrary_eventApplyDirectionalDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveGameplayFunctionLibrary::execApplyDirectionalDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageMultiplier);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWaveGameplayFunctionLibrary::ApplyDirectionalDamage(Z_Param_DamageCauser,Z_Param_TargetActor,Z_Param_DamageMultiplier,Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class UWaveGameplayFunctionLibrary Function ApplyDirectionalDamage

// Begin Class UWaveGameplayFunctionLibrary Function IsAlive
struct Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics
{
	struct WaveGameplayFunctionLibrary_eventIsAlive_Parms
	{
		AActor* InActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Core/WaveGameplayFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayFunctionLibrary_eventIsAlive_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveGameplayFunctionLibrary_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveGameplayFunctionLibrary_eventIsAlive_Parms), &Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveGameplayFunctionLibrary, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::WaveGameplayFunctionLibrary_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::WaveGameplayFunctionLibrary_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveGameplayFunctionLibrary::execIsAlive)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWaveGameplayFunctionLibrary::IsAlive(Z_Param_InActor);
	P_NATIVE_END;
}
// End Class UWaveGameplayFunctionLibrary Function IsAlive

// Begin Class UWaveGameplayFunctionLibrary
void UWaveGameplayFunctionLibrary::StaticRegisterNativesUWaveGameplayFunctionLibrary()
{
	UClass* Class = UWaveGameplayFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamage", &UWaveGameplayFunctionLibrary::execApplyDamage },
		{ "ApplyDirectionalDamage", &UWaveGameplayFunctionLibrary::execApplyDirectionalDamage },
		{ "IsAlive", &UWaveGameplayFunctionLibrary::execIsAlive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveGameplayFunctionLibrary);
UClass* Z_Construct_UClass_UWaveGameplayFunctionLibrary_NoRegister()
{
	return UWaveGameplayFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UWaveGameplayFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/WaveGameplayFunctionLibrary.h" },
		{ "ModuleRelativePath", "Core/WaveGameplayFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDamage, "ApplyDamage" }, // 1437749321
		{ &Z_Construct_UFunction_UWaveGameplayFunctionLibrary_ApplyDirectionalDamage, "ApplyDirectionalDamage" }, // 3985569926
		{ &Z_Construct_UFunction_UWaveGameplayFunctionLibrary_IsAlive, "IsAlive" }, // 2122922687
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveGameplayFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWaveGameplayFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveGameplayFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveGameplayFunctionLibrary_Statics::ClassParams = {
	&UWaveGameplayFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveGameplayFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveGameplayFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveGameplayFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UWaveGameplayFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveGameplayFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWaveGameplayFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveGameplayFunctionLibrary.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveGameplayFunctionLibrary>()
{
	return UWaveGameplayFunctionLibrary::StaticClass();
}
UWaveGameplayFunctionLibrary::UWaveGameplayFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveGameplayFunctionLibrary);
UWaveGameplayFunctionLibrary::~UWaveGameplayFunctionLibrary() {}
// End Class UWaveGameplayFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveGameplayFunctionLibrary, UWaveGameplayFunctionLibrary::StaticClass, TEXT("UWaveGameplayFunctionLibrary"), &Z_Registration_Info_UClass_UWaveGameplayFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveGameplayFunctionLibrary), 3536590627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayFunctionLibrary_h_1265413570(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
