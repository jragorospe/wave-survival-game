// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/ActionSystem/WaveAction.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionComponent_NoRegister();
WAVESURVIVAL_API UScriptStruct* Z_Construct_UScriptStruct_FActionRepData();
// End Cross Module References

// Begin ScriptStruct FActionRepData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionRepData;
class UScriptStruct* FActionRepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionRepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionRepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionRepData, (UObject*)Z_Construct_UPackage__Script_WaveSurvival(), TEXT("ActionRepData"));
	}
	return Z_Registration_Info_UScriptStruct_ActionRepData.OuterSingleton;
}
template<> WAVESURVIVAL_API UScriptStruct* StaticStruct<FActionRepData>()
{
	return FActionRepData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActionRepData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionRepData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_SetBit(void* Obj)
{
	((FActionRepData*)Obj)->bIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActionRepData), &Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunning_MetaData), NewProp_bIsRunning_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionRepData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionRepData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
	nullptr,
	&NewStructOps,
	"ActionRepData",
	Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers),
	sizeof(FActionRepData),
	alignof(FActionRepData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionRepData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActionRepData()
{
	if (!Z_Registration_Info_UScriptStruct_ActionRepData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionRepData.InnerSingleton, Z_Construct_UScriptStruct_FActionRepData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActionRepData.InnerSingleton;
}
// End ScriptStruct FActionRepData

// Begin Class UWaveAction Function CanStart
struct WaveAction_eventCanStart_Parms
{
	AActor* Instigator;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	WaveAction_eventCanStart_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UWaveAction_CanStart = FName(TEXT("CanStart"));
bool UWaveAction::CanStart(AActor* Instigator)
{
	WaveAction_eventCanStart_Parms Parms;
	Parms.Instigator=Instigator;
	ProcessEvent(FindFunctionChecked(NAME_UWaveAction_CanStart),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UWaveAction_CanStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAction_CanStart_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_eventCanStart_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWaveAction_CanStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveAction_eventCanStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveAction_CanStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveAction_eventCanStart_Parms), &Z_Construct_UFunction_UWaveAction_CanStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_CanStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_CanStart_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_CanStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_CanStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_CanStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction, nullptr, "CanStart", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_CanStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_CanStart_Statics::PropPointers), sizeof(WaveAction_eventCanStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_CanStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_CanStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveAction_eventCanStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_CanStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_CanStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction::execCanStart)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStart_Implementation(Z_Param_Instigator);
	P_NATIVE_END;
}
// End Class UWaveAction Function CanStart

// Begin Class UWaveAction Function GetActivationTag
struct Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics
{
	struct WaveAction_eventGetActivationTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_eventGetActivationTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction, nullptr, "GetActivationTag", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::WaveAction_eventGetActivationTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::WaveAction_eventGetActivationTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_GetActivationTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_GetActivationTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction::execGetActivationTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetActivationTag();
	P_NATIVE_END;
}
// End Class UWaveAction Function GetActivationTag

// Begin Class UWaveAction Function GetOwningComponent
struct Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics
{
	struct WaveAction_eventGetOwningComponent_Parms
	{
		UWaveActionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_UWaveActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction, nullptr, "GetOwningComponent", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::WaveAction_eventGetOwningComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::WaveAction_eventGetOwningComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_GetOwningComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_GetOwningComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction::execGetOwningComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWaveActionComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
	P_NATIVE_END;
}
// End Class UWaveAction Function GetOwningComponent

// Begin Class UWaveAction Function IsAutoStart
struct Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics
{
	struct WaveAction_eventIsAutoStart_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveAction_eventIsAutoStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveAction_eventIsAutoStart_Parms), &Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction, nullptr, "IsAutoStart", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::WaveAction_eventIsAutoStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::WaveAction_eventIsAutoStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_IsAutoStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_IsAutoStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction::execIsAutoStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAutoStart();
	P_NATIVE_END;
}
// End Class UWaveAction Function IsAutoStart

// Begin Class UWaveAction Function IsRunning
struct Z_Construct_UFunction_UWaveAction_IsRunning_Statics
{
	struct WaveAction_eventIsRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWaveAction_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveAction_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveAction_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveAction_eventIsRunning_Parms), &Z_Construct_UFunction_UWaveAction_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_IsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_IsRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_IsRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction, nullptr, "IsRunning", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_IsRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAction_IsRunning_Statics::WaveAction_eventIsRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_IsRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAction_IsRunning_Statics::WaveAction_eventIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction::execIsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRunning();
	P_NATIVE_END;
}
// End Class UWaveAction Function IsRunning

// Begin Class UWaveAction Function OnRep_RepData
struct Z_Construct_UFunction_UWaveAction_OnRep_RepData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_OnRep_RepData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction, nullptr, "OnRep_RepData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_OnRep_RepData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_OnRep_RepData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWaveAction_OnRep_RepData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_OnRep_RepData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction::execOnRep_RepData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RepData();
	P_NATIVE_END;
}
// End Class UWaveAction Function OnRep_RepData

// Begin Class UWaveAction Function StartAction
struct WaveAction_eventStartAction_Parms
{
	AActor* Instigator;
};
static FName NAME_UWaveAction_StartAction = FName(TEXT("StartAction"));
void UWaveAction::StartAction(AActor* Instigator)
{
	WaveAction_eventStartAction_Parms Parms;
	Parms.Instigator=Instigator;
	ProcessEvent(FindFunctionChecked(NAME_UWaveAction_StartAction),&Parms);
}
struct Z_Construct_UFunction_UWaveAction_StartAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAction_StartAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_eventStartAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_StartAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_StartAction_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_StartAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_StartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction, nullptr, "StartAction", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_StartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_StartAction_Statics::PropPointers), sizeof(WaveAction_eventStartAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_StartAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_StartAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveAction_eventStartAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_StartAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_StartAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction::execStartAction)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAction_Implementation(Z_Param_Instigator);
	P_NATIVE_END;
}
// End Class UWaveAction Function StartAction

// Begin Class UWaveAction Function StopAction
struct WaveAction_eventStopAction_Parms
{
	AActor* Instigator;
};
static FName NAME_UWaveAction_StopAction = FName(TEXT("StopAction"));
void UWaveAction::StopAction(AActor* Instigator)
{
	WaveAction_eventStopAction_Parms Parms;
	Parms.Instigator=Instigator;
	ProcessEvent(FindFunctionChecked(NAME_UWaveAction_StopAction),&Parms);
}
struct Z_Construct_UFunction_UWaveAction_StopAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAction_StopAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_eventStopAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_StopAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_StopAction_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_StopAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_StopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction, nullptr, "StopAction", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_StopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_StopAction_Statics::PropPointers), sizeof(WaveAction_eventStopAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_StopAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_StopAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveAction_eventStopAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_StopAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_StopAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction::execStopAction)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAction_Implementation(Z_Param_Instigator);
	P_NATIVE_END;
}
// End Class UWaveAction Function StopAction

// Begin Class UWaveAction
void UWaveAction::StaticRegisterNativesUWaveAction()
{
	UClass* Class = UWaveAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanStart", &UWaveAction::execCanStart },
		{ "GetActivationTag", &UWaveAction::execGetActivationTag },
		{ "GetOwningComponent", &UWaveAction::execGetOwningComponent },
		{ "IsAutoStart", &UWaveAction::execIsAutoStart },
		{ "IsRunning", &UWaveAction::execIsRunning },
		{ "OnRep_RepData", &UWaveAction::execOnRep_RepData },
		{ "StartAction", &UWaveAction::execStartAction },
		{ "StopAction", &UWaveAction::execStopAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveAction);
UClass* Z_Construct_UClass_UWaveAction_NoRegister()
{
	return UWaveAction::StaticClass();
}
struct Z_Construct_UClass_UWaveAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionSystem/WaveAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantsTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepData_MetaData[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStarted_MetaData[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationTag_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantsTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RepData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStarted;
	static void NewProp_bAutoStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveAction_CanStart, "CanStart" }, // 1028490515
		{ &Z_Construct_UFunction_UWaveAction_GetActivationTag, "GetActivationTag" }, // 3865838317
		{ &Z_Construct_UFunction_UWaveAction_GetOwningComponent, "GetOwningComponent" }, // 3442216282
		{ &Z_Construct_UFunction_UWaveAction_IsAutoStart, "IsAutoStart" }, // 1592978280
		{ &Z_Construct_UFunction_UWaveAction_IsRunning, "IsRunning" }, // 3763628857
		{ &Z_Construct_UFunction_UWaveAction_OnRep_RepData, "OnRep_RepData" }, // 1830217429
		{ &Z_Construct_UFunction_UWaveAction_StartAction, "StartAction" }, // 3420352697
		{ &Z_Construct_UFunction_UWaveAction_StopAction, "StopAction" }, // 3816562458
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaveAction_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_Statics::NewProp_ActionComp = { "ActionComp", nullptr, (EPropertyFlags)0x0124080000080028, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction, ActionComp), Z_Construct_UClass_UWaveActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionComp_MetaData), NewProp_ActionComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveAction_Statics::NewProp_GrantsTags = { "GrantsTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction, GrantsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantsTags_MetaData), NewProp_GrantsTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveAction_Statics::NewProp_BlockedTags = { "BlockedTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction, BlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedTags_MetaData), NewProp_BlockedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveAction_Statics::NewProp_RepData = { "RepData", "OnRep_RepData", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction, RepData), Z_Construct_UScriptStruct_FActionRepData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepData_MetaData), NewProp_RepData_MetaData) }; // 2132742126
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAction_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction, TimeStarted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStarted_MetaData), NewProp_TimeStarted_MetaData) };
void Z_Construct_UClass_UWaveAction_Statics::NewProp_bAutoStart_SetBit(void* Obj)
{
	((UWaveAction*)Obj)->bAutoStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaveAction_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWaveAction), &Z_Construct_UClass_UWaveAction_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStart_MetaData), NewProp_bAutoStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveAction_Statics::NewProp_ActivationTag = { "ActivationTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction, ActivationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationTag_MetaData), NewProp_ActivationTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_Statics::NewProp_ActionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_Statics::NewProp_GrantsTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_Statics::NewProp_BlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_Statics::NewProp_RepData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_Statics::NewProp_TimeStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_Statics::NewProp_bAutoStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_Statics::NewProp_ActivationTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveAction_Statics::ClassParams = {
	&UWaveAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaveAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveAction()
{
	if (!Z_Registration_Info_UClass_UWaveAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveAction.OuterSingleton, Z_Construct_UClass_UWaveAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveAction.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveAction>()
{
	return UWaveAction::StaticClass();
}
void UWaveAction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ActionComp(TEXT("ActionComp"));
	static const FName Name_RepData(TEXT("RepData"));
	static const FName Name_TimeStarted(TEXT("TimeStarted"));
	const bool bIsValid = true
		&& Name_ActionComp == ClassReps[(int32)ENetFields_Private::ActionComp].Property->GetFName()
		&& Name_RepData == ClassReps[(int32)ENetFields_Private::RepData].Property->GetFName()
		&& Name_TimeStarted == ClassReps[(int32)ENetFields_Private::TimeStarted].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWaveAction"));
}
UWaveAction::UWaveAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveAction);
UWaveAction::~UWaveAction() {}
// End Class UWaveAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActionRepData::StaticStruct, Z_Construct_UScriptStruct_FActionRepData_Statics::NewStructOps, TEXT("ActionRepData"), &Z_Registration_Info_UScriptStruct_ActionRepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionRepData), 2132742126U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveAction, UWaveAction::StaticClass, TEXT("UWaveAction"), &Z_Registration_Info_UClass_UWaveAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveAction), 2633505359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_383577174(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
