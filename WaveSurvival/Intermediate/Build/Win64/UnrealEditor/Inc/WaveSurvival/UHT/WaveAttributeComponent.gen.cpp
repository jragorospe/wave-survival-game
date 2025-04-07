// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/ActionSystem/WaveAttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveAttributeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAttributeComponent();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAttributeComponent_NoRegister();
WAVESURVIVAL_API UFunction* Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnAttributeChanged
struct Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics
{
	struct _Script_WaveSurvival_eventOnAttributeChanged_Parms
	{
		AActor* InstigatorActor;
		UWaveAttributeComponent* OwningComp;
		float NewValue;
		float Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WaveSurvival_eventOnAttributeChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WaveSurvival_eventOnAttributeChanged_Parms, OwningComp), Z_Construct_UClass_UWaveAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComp_MetaData), NewProp_OwningComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WaveSurvival_eventOnAttributeChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WaveSurvival_eventOnAttributeChanged_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::NewProp_OwningComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WaveSurvival, nullptr, "OnAttributeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::_Script_WaveSurvival_eventOnAttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::_Script_WaveSurvival_eventOnAttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, AActor* InstigatorActor, UWaveAttributeComponent* OwningComp, float NewValue, float Delta)
{
	struct _Script_WaveSurvival_eventOnAttributeChanged_Parms
	{
		AActor* InstigatorActor;
		UWaveAttributeComponent* OwningComp;
		float NewValue;
		float Delta;
	};
	_Script_WaveSurvival_eventOnAttributeChanged_Parms Parms;
	Parms.InstigatorActor=InstigatorActor;
	Parms.OwningComp=OwningComp;
	Parms.NewValue=NewValue;
	Parms.Delta=Delta;
	OnAttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAttributeChanged

// Begin Class UWaveAttributeComponent Function ApplyHealthChange
struct Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics
{
	struct WaveAttributeComponent_eventApplyHealthChange_Parms
	{
		AActor* InstigatorActor;
		float Delta;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventApplyHealthChange_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventApplyHealthChange_Parms, Delta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveAttributeComponent_eventApplyHealthChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveAttributeComponent_eventApplyHealthChange_Parms), &Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "ApplyHealthChange", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::WaveAttributeComponent_eventApplyHealthChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::WaveAttributeComponent_eventApplyHealthChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execApplyHealthChange)
{
	P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyHealthChange(Z_Param_InstigatorActor,Z_Param_Delta);
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function ApplyHealthChange

// Begin Class UWaveAttributeComponent Function ApplyRage
struct Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics
{
	struct WaveAttributeComponent_eventApplyRage_Parms
	{
		AActor* InstigatorActor;
		float Delta;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventApplyRage_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventApplyRage_Parms, Delta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveAttributeComponent_eventApplyRage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveAttributeComponent_eventApplyRage_Parms), &Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "ApplyRage", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::WaveAttributeComponent_eventApplyRage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::WaveAttributeComponent_eventApplyRage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execApplyRage)
{
	P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyRage(Z_Param_InstigatorActor,Z_Param_Delta);
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function ApplyRage

// Begin Class UWaveAttributeComponent Function GetAttributes
struct Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics
{
	struct WaveAttributeComponent_eventGetAttributes_Parms
	{
		AActor* FromActor;
		UWaveAttributeComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::NewProp_FromActor = { "FromActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventGetAttributes_Parms, FromActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventGetAttributes_Parms, ReturnValue), Z_Construct_UClass_UWaveAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::NewProp_FromActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "GetAttributes", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::WaveAttributeComponent_eventGetAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::WaveAttributeComponent_eventGetAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execGetAttributes)
{
	P_GET_OBJECT(AActor,Z_Param_FromActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWaveAttributeComponent**)Z_Param__Result=UWaveAttributeComponent::GetAttributes(Z_Param_FromActor);
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function GetAttributes

// Begin Class UWaveAttributeComponent Function GetBaseDamage
struct Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics
{
	struct WaveAttributeComponent_eventGetBaseDamage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventGetBaseDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "GetBaseDamage", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::WaveAttributeComponent_eventGetBaseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::WaveAttributeComponent_eventGetBaseDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execGetBaseDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBaseDamage();
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function GetBaseDamage

// Begin Class UWaveAttributeComponent Function GetHealth
struct Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics
{
	struct WaveAttributeComponent_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::WaveAttributeComponent_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::WaveAttributeComponent_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function GetHealth

// Begin Class UWaveAttributeComponent Function GetHealthMax
struct Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics
{
	struct WaveAttributeComponent_eventGetHealthMax_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventGetHealthMax_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "GetHealthMax", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::WaveAttributeComponent_eventGetHealthMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::WaveAttributeComponent_eventGetHealthMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execGetHealthMax)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthMax();
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function GetHealthMax

// Begin Class UWaveAttributeComponent Function GetRage
struct Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics
{
	struct WaveAttributeComponent_eventGetRage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventGetRage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "GetRage", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::WaveAttributeComponent_eventGetRage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::WaveAttributeComponent_eventGetRage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_GetRage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_GetRage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execGetRage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRage();
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function GetRage

// Begin Class UWaveAttributeComponent Function IsAlive
struct Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics
{
	struct WaveAttributeComponent_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveAttributeComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveAttributeComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::WaveAttributeComponent_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::WaveAttributeComponent_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function IsAlive

// Begin Class UWaveAttributeComponent Function IsFullHealth
struct Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics
{
	struct WaveAttributeComponent_eventIsFullHealth_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveAttributeComponent_eventIsFullHealth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveAttributeComponent_eventIsFullHealth_Parms), &Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "IsFullHealth", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::WaveAttributeComponent_eventIsFullHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::WaveAttributeComponent_eventIsFullHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execIsFullHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFullHealth();
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function IsFullHealth

// Begin Class UWaveAttributeComponent Function Kill
struct Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics
{
	struct WaveAttributeComponent_eventKill_Parms
	{
		AActor* InstigatorActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventKill_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveAttributeComponent_eventKill_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveAttributeComponent_eventKill_Parms), &Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "Kill", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::WaveAttributeComponent_eventKill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::WaveAttributeComponent_eventKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_Kill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_Kill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execKill)
{
	P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Kill(Z_Param_InstigatorActor);
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function Kill

// Begin Class UWaveAttributeComponent Function MulticastHealthChanged
struct WaveAttributeComponent_eventMulticastHealthChanged_Parms
{
	AActor* InstigatorActor;
	float NewHealth;
	float Delta;
};
static FName NAME_UWaveAttributeComponent_MulticastHealthChanged = FName(TEXT("MulticastHealthChanged"));
void UWaveAttributeComponent::MulticastHealthChanged(AActor* InstigatorActor, float NewHealth, float Delta)
{
	WaveAttributeComponent_eventMulticastHealthChanged_Parms Parms;
	Parms.InstigatorActor=InstigatorActor;
	Parms.NewHealth=NewHealth;
	Parms.Delta=Delta;
	ProcessEvent(FindFunctionChecked(NAME_UWaveAttributeComponent_MulticastHealthChanged),&Parms);
}
struct Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventMulticastHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventMulticastHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventMulticastHealthChanged_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "MulticastHealthChanged", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::PropPointers), sizeof(WaveAttributeComponent_eventMulticastHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveAttributeComponent_eventMulticastHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execMulticastHealthChanged)
{
	P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastHealthChanged_Implementation(Z_Param_InstigatorActor,Z_Param_NewHealth,Z_Param_Delta);
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function MulticastHealthChanged

// Begin Class UWaveAttributeComponent Function MulticastRageChanged
struct WaveAttributeComponent_eventMulticastRageChanged_Parms
{
	AActor* InstigatorActor;
	float NewRage;
	float Delta;
};
static FName NAME_UWaveAttributeComponent_MulticastRageChanged = FName(TEXT("MulticastRageChanged"));
void UWaveAttributeComponent::MulticastRageChanged(AActor* InstigatorActor, float NewRage, float Delta)
{
	WaveAttributeComponent_eventMulticastRageChanged_Parms Parms;
	Parms.InstigatorActor=InstigatorActor;
	Parms.NewRage=NewRage;
	Parms.Delta=Delta;
	ProcessEvent(FindFunctionChecked(NAME_UWaveAttributeComponent_MulticastRageChanged),&Parms);
}
struct Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventMulticastRageChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::NewProp_NewRage = { "NewRage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventMulticastRageChanged_Parms, NewRage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAttributeComponent_eventMulticastRageChanged_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::NewProp_NewRage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAttributeComponent, nullptr, "MulticastRageChanged", nullptr, nullptr, Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::PropPointers), sizeof(WaveAttributeComponent_eventMulticastRageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveAttributeComponent_eventMulticastRageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAttributeComponent::execMulticastRageChanged)
{
	P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRageChanged_Implementation(Z_Param_InstigatorActor,Z_Param_NewRage,Z_Param_Delta);
	P_NATIVE_END;
}
// End Class UWaveAttributeComponent Function MulticastRageChanged

// Begin Class UWaveAttributeComponent
void UWaveAttributeComponent::StaticRegisterNativesUWaveAttributeComponent()
{
	UClass* Class = UWaveAttributeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyHealthChange", &UWaveAttributeComponent::execApplyHealthChange },
		{ "ApplyRage", &UWaveAttributeComponent::execApplyRage },
		{ "GetAttributes", &UWaveAttributeComponent::execGetAttributes },
		{ "GetBaseDamage", &UWaveAttributeComponent::execGetBaseDamage },
		{ "GetHealth", &UWaveAttributeComponent::execGetHealth },
		{ "GetHealthMax", &UWaveAttributeComponent::execGetHealthMax },
		{ "GetRage", &UWaveAttributeComponent::execGetRage },
		{ "IsAlive", &UWaveAttributeComponent::execIsAlive },
		{ "IsFullHealth", &UWaveAttributeComponent::execIsFullHealth },
		{ "Kill", &UWaveAttributeComponent::execKill },
		{ "MulticastHealthChanged", &UWaveAttributeComponent::execMulticastHealthChanged },
		{ "MulticastRageChanged", &UWaveAttributeComponent::execMulticastRageChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveAttributeComponent);
UClass* Z_Construct_UClass_UWaveAttributeComponent_NoRegister()
{
	return UWaveAttributeComponent::StaticClass();
}
struct Z_Construct_UClass_UWaveAttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActionSystem/WaveAttributeComponent.h" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthMax_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rage_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RageMax_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRageChanged_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "ActionSystem/WaveAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RageMax;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRageChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveAttributeComponent_ApplyHealthChange, "ApplyHealthChange" }, // 3800445363
		{ &Z_Construct_UFunction_UWaveAttributeComponent_ApplyRage, "ApplyRage" }, // 1538016983
		{ &Z_Construct_UFunction_UWaveAttributeComponent_GetAttributes, "GetAttributes" }, // 2880920471
		{ &Z_Construct_UFunction_UWaveAttributeComponent_GetBaseDamage, "GetBaseDamage" }, // 913168499
		{ &Z_Construct_UFunction_UWaveAttributeComponent_GetHealth, "GetHealth" }, // 1194356221
		{ &Z_Construct_UFunction_UWaveAttributeComponent_GetHealthMax, "GetHealthMax" }, // 1490449512
		{ &Z_Construct_UFunction_UWaveAttributeComponent_GetRage, "GetRage" }, // 1957342478
		{ &Z_Construct_UFunction_UWaveAttributeComponent_IsAlive, "IsAlive" }, // 1444266098
		{ &Z_Construct_UFunction_UWaveAttributeComponent_IsFullHealth, "IsFullHealth" }, // 151192606
		{ &Z_Construct_UFunction_UWaveAttributeComponent_Kill, "Kill" }, // 1483940094
		{ &Z_Construct_UFunction_UWaveAttributeComponent_MulticastHealthChanged, "MulticastHealthChanged" }, // 289482484
		{ &Z_Construct_UFunction_UWaveAttributeComponent_MulticastRageChanged, "MulticastRageChanged" }, // 3099371830
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveAttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAttributeComponent, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAttributeComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_HealthMax = { "HealthMax", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAttributeComponent, HealthMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthMax_MetaData), NewProp_HealthMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_Rage = { "Rage", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAttributeComponent, Rage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rage_MetaData), NewProp_Rage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_RageMax = { "RageMax", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAttributeComponent, RageMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RageMax_MetaData), NewProp_RageMax_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAttributeComponent, OnHealthChanged), Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 1723944188
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_OnRageChanged = { "OnRageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAttributeComponent, OnRageChanged), Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRageChanged_MetaData), NewProp_OnRageChanged_MetaData) }; // 1723944188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveAttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_HealthMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_Rage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_RageMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAttributeComponent_Statics::NewProp_OnRageChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveAttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveAttributeComponent_Statics::ClassParams = {
	&UWaveAttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaveAttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAttributeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveAttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveAttributeComponent()
{
	if (!Z_Registration_Info_UClass_UWaveAttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveAttributeComponent.OuterSingleton, Z_Construct_UClass_UWaveAttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveAttributeComponent.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveAttributeComponent>()
{
	return UWaveAttributeComponent::StaticClass();
}
void UWaveAttributeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_BaseDamage(TEXT("BaseDamage"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_HealthMax(TEXT("HealthMax"));
	static const FName Name_Rage(TEXT("Rage"));
	static const FName Name_RageMax(TEXT("RageMax"));
	const bool bIsValid = true
		&& Name_BaseDamage == ClassReps[(int32)ENetFields_Private::BaseDamage].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_HealthMax == ClassReps[(int32)ENetFields_Private::HealthMax].Property->GetFName()
		&& Name_Rage == ClassReps[(int32)ENetFields_Private::Rage].Property->GetFName()
		&& Name_RageMax == ClassReps[(int32)ENetFields_Private::RageMax].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWaveAttributeComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveAttributeComponent);
UWaveAttributeComponent::~UWaveAttributeComponent() {}
// End Class UWaveAttributeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveAttributeComponent, UWaveAttributeComponent::StaticClass, TEXT("UWaveAttributeComponent"), &Z_Registration_Info_UClass_UWaveAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveAttributeComponent), 518787400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_162731068(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAttributeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
