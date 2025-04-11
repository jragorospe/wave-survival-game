// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/ActionSystem/WaveActionEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveActionEffect() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionEffect();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionEffect_NoRegister();
// End Cross Module References

// Begin Class UWaveActionEffect Function ExecutePeriodicEffect
struct WaveActionEffect_eventExecutePeriodicEffect_Parms
{
	AActor* Instigator;
};
static FName NAME_UWaveActionEffect_ExecutePeriodicEffect = FName(TEXT("ExecutePeriodicEffect"));
void UWaveActionEffect::ExecutePeriodicEffect(AActor* Instigator)
{
	WaveActionEffect_eventExecutePeriodicEffect_Parms Parms;
	Parms.Instigator=Instigator;
	ProcessEvent(FindFunctionChecked(NAME_UWaveActionEffect_ExecutePeriodicEffect),&Parms);
}
struct Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionEffect_eventExecutePeriodicEffect_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveActionEffect, nullptr, "ExecutePeriodicEffect", nullptr, nullptr, Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::PropPointers), sizeof(WaveActionEffect_eventExecutePeriodicEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveActionEffect_eventExecutePeriodicEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveActionEffect::execExecutePeriodicEffect)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecutePeriodicEffect_Implementation(Z_Param_Instigator);
	P_NATIVE_END;
}
// End Class UWaveActionEffect Function ExecutePeriodicEffect

// Begin Class UWaveActionEffect Function GetTimeRemaining
struct Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics
{
	struct WaveActionEffect_eventGetTimeRemaining_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionEffect_eventGetTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveActionEffect, nullptr, "GetTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::WaveActionEffect_eventGetTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::WaveActionEffect_eventGetTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveActionEffect::execGetTimeRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeRemaining();
	P_NATIVE_END;
}
// End Class UWaveActionEffect Function GetTimeRemaining

// Begin Class UWaveActionEffect
void UWaveActionEffect::StaticRegisterNativesUWaveActionEffect()
{
	UClass* Class = UWaveActionEffect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecutePeriodicEffect", &UWaveActionEffect::execExecutePeriodicEffect },
		{ "GetTimeRemaining", &UWaveActionEffect::execGetTimeRemaining },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveActionEffect);
UClass* Z_Construct_UClass_UWaveActionEffect_NoRegister()
{
	return UWaveActionEffect::StaticClass();
}
struct Z_Construct_UClass_UWaveActionEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionSystem/WaveActionEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "Category", "Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time between 'ticks' to apply effect\n" },
#endif
		{ "ModuleRelativePath", "ActionSystem/WaveActionEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time between 'ticks' to apply effect" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveActionEffect_ExecutePeriodicEffect, "ExecutePeriodicEffect" }, // 3643185339
		{ &Z_Construct_UFunction_UWaveActionEffect_GetTimeRemaining, "GetTimeRemaining" }, // 934426814
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveActionEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveActionEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveActionEffect, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveActionEffect_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveActionEffect, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveActionEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionEffect_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionEffect_Statics::NewProp_Period,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveActionEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWaveAction,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveActionEffect_Statics::ClassParams = {
	&UWaveActionEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaveActionEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionEffect_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveActionEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveActionEffect()
{
	if (!Z_Registration_Info_UClass_UWaveActionEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveActionEffect.OuterSingleton, Z_Construct_UClass_UWaveActionEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveActionEffect.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveActionEffect>()
{
	return UWaveActionEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveActionEffect);
UWaveActionEffect::~UWaveActionEffect() {}
// End Class UWaveActionEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveActionEffect, UWaveActionEffect::StaticClass, TEXT("UWaveActionEffect"), &Z_Registration_Info_UClass_UWaveActionEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveActionEffect), 2269054088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_2798274109(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
