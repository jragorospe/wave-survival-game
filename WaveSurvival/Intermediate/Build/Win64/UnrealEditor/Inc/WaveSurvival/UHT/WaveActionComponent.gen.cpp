// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/ActionSystem/WaveActionComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveActionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionComponent();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionComponent_NoRegister();
WAVESURVIVAL_API UFunction* Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnActionStateChanged
struct Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics
{
	struct _Script_WaveSurvival_eventOnActionStateChanged_Parms
	{
		UWaveActionComponent* OwningComp;
		UWaveAction* Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WaveSurvival_eventOnActionStateChanged_Parms, OwningComp), Z_Construct_UClass_UWaveActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComp_MetaData), NewProp_OwningComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WaveSurvival_eventOnActionStateChanged_Parms, Action), Z_Construct_UClass_UWaveAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::NewProp_OwningComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WaveSurvival, nullptr, "OnActionStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::_Script_WaveSurvival_eventOnActionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::_Script_WaveSurvival_eventOnActionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActionStateChanged, UWaveActionComponent* OwningComp, UWaveAction* Action)
{
	struct _Script_WaveSurvival_eventOnActionStateChanged_Parms
	{
		UWaveActionComponent* OwningComp;
		UWaveAction* Action;
	};
	_Script_WaveSurvival_eventOnActionStateChanged_Parms Parms;
	Parms.OwningComp=OwningComp;
	Parms.Action=Action;
	OnActionStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnActionStateChanged

// Begin Class UWaveActionComponent Function AddAction
struct Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics
{
	struct WaveActionComponent_eventAddAction_Parms
	{
		AActor* Instigator;
		TSubclassOf<UWaveAction> ActionClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventAddAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventAddAction_Parms, ActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWaveAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::NewProp_ActionClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveActionComponent, nullptr, "AddAction", nullptr, nullptr, Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::WaveActionComponent_eventAddAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::WaveActionComponent_eventAddAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveActionComponent_AddAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveActionComponent_AddAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveActionComponent::execAddAction)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(UClass,Z_Param_ActionClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAction(Z_Param_Instigator,Z_Param_ActionClass);
	P_NATIVE_END;
}
// End Class UWaveActionComponent Function AddAction

// Begin Class UWaveActionComponent Function RemoveAction
struct Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics
{
	struct WaveActionComponent_eventRemoveAction_Parms
	{
		UWaveAction* ActionToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::NewProp_ActionToRemove = { "ActionToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventRemoveAction_Parms, ActionToRemove), Z_Construct_UClass_UWaveAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::NewProp_ActionToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveActionComponent, nullptr, "RemoveAction", nullptr, nullptr, Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::WaveActionComponent_eventRemoveAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::WaveActionComponent_eventRemoveAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveActionComponent_RemoveAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveActionComponent_RemoveAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveActionComponent::execRemoveAction)
{
	P_GET_OBJECT(UWaveAction,Z_Param_ActionToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAction(Z_Param_ActionToRemove);
	P_NATIVE_END;
}
// End Class UWaveActionComponent Function RemoveAction

// Begin Class UWaveActionComponent Function ServerStartAction
struct WaveActionComponent_eventServerStartAction_Parms
{
	AActor* Instigator;
	FGameplayTag ActionName;
};
static FName NAME_UWaveActionComponent_ServerStartAction = FName(TEXT("ServerStartAction"));
void UWaveActionComponent::ServerStartAction(AActor* Instigator, FGameplayTag ActionName)
{
	WaveActionComponent_eventServerStartAction_Parms Parms;
	Parms.Instigator=Instigator;
	Parms.ActionName=ActionName;
	ProcessEvent(FindFunctionChecked(NAME_UWaveActionComponent_ServerStartAction),&Parms);
}
struct Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventServerStartAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventServerStartAction_Parms, ActionName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::NewProp_ActionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveActionComponent, nullptr, "ServerStartAction", nullptr, nullptr, Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::PropPointers), sizeof(WaveActionComponent_eventServerStartAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveActionComponent_eventServerStartAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveActionComponent_ServerStartAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveActionComponent_ServerStartAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveActionComponent::execServerStartAction)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_STRUCT(FGameplayTag,Z_Param_ActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartAction_Implementation(Z_Param_Instigator,Z_Param_ActionName);
	P_NATIVE_END;
}
// End Class UWaveActionComponent Function ServerStartAction

// Begin Class UWaveActionComponent Function ServerStopAction
struct WaveActionComponent_eventServerStopAction_Parms
{
	AActor* Instigator;
	FGameplayTag ActionName;
};
static FName NAME_UWaveActionComponent_ServerStopAction = FName(TEXT("ServerStopAction"));
void UWaveActionComponent::ServerStopAction(AActor* Instigator, FGameplayTag ActionName)
{
	WaveActionComponent_eventServerStopAction_Parms Parms;
	Parms.Instigator=Instigator;
	Parms.ActionName=ActionName;
	ProcessEvent(FindFunctionChecked(NAME_UWaveActionComponent_ServerStopAction),&Parms);
}
struct Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventServerStopAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventServerStopAction_Parms, ActionName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::NewProp_ActionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveActionComponent, nullptr, "ServerStopAction", nullptr, nullptr, Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::PropPointers), sizeof(WaveActionComponent_eventServerStopAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveActionComponent_eventServerStopAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveActionComponent_ServerStopAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveActionComponent_ServerStopAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveActionComponent::execServerStopAction)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_STRUCT(FGameplayTag,Z_Param_ActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopAction_Implementation(Z_Param_Instigator,Z_Param_ActionName);
	P_NATIVE_END;
}
// End Class UWaveActionComponent Function ServerStopAction

// Begin Class UWaveActionComponent Function StartActionByName
struct Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics
{
	struct WaveActionComponent_eventStartActionByName_Parms
	{
		AActor* Instigator;
		FGameplayTag ActionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventStartActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventStartActionByName_Parms, ActionName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveActionComponent_eventStartActionByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveActionComponent_eventStartActionByName_Parms), &Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveActionComponent, nullptr, "StartActionByName", nullptr, nullptr, Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::WaveActionComponent_eventStartActionByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::WaveActionComponent_eventStartActionByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveActionComponent_StartActionByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveActionComponent_StartActionByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveActionComponent::execStartActionByName)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_STRUCT(FGameplayTag,Z_Param_ActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartActionByName(Z_Param_Instigator,Z_Param_ActionName);
	P_NATIVE_END;
}
// End Class UWaveActionComponent Function StartActionByName

// Begin Class UWaveActionComponent Function StopActionByName
struct Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics
{
	struct WaveActionComponent_eventStopActionByName_Parms
	{
		AActor* Instigator;
		FGameplayTag ActionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventStopActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveActionComponent_eventStopActionByName_Parms, ActionName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WaveActionComponent_eventStopActionByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveActionComponent_eventStopActionByName_Parms), &Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::NewProp_ActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveActionComponent, nullptr, "StopActionByName", nullptr, nullptr, Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::WaveActionComponent_eventStopActionByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::WaveActionComponent_eventStopActionByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveActionComponent_StopActionByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveActionComponent_StopActionByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveActionComponent::execStopActionByName)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_STRUCT(FGameplayTag,Z_Param_ActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StopActionByName(Z_Param_Instigator,Z_Param_ActionName);
	P_NATIVE_END;
}
// End Class UWaveActionComponent Function StopActionByName

// Begin Class UWaveActionComponent
void UWaveActionComponent::StaticRegisterNativesUWaveActionComponent()
{
	UClass* Class = UWaveActionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAction", &UWaveActionComponent::execAddAction },
		{ "RemoveAction", &UWaveActionComponent::execRemoveAction },
		{ "ServerStartAction", &UWaveActionComponent::execServerStartAction },
		{ "ServerStopAction", &UWaveActionComponent::execServerStopAction },
		{ "StartActionByName", &UWaveActionComponent::execStartActionByName },
		{ "StopActionByName", &UWaveActionComponent::execStopActionByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveActionComponent);
UClass* Z_Construct_UClass_UWaveActionComponent_NoRegister()
{
	return UWaveActionComponent::StaticClass();
}
struct Z_Construct_UClass_UWaveActionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActionSystem/WaveActionComponent.h" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGameplayTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultActions_MetaData[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "WaveActionComponent" },
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionStarted_MetaData[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionStopped_MetaData[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveActionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGameplayTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionStopped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveActionComponent_AddAction, "AddAction" }, // 1771417865
		{ &Z_Construct_UFunction_UWaveActionComponent_RemoveAction, "RemoveAction" }, // 3388222112
		{ &Z_Construct_UFunction_UWaveActionComponent_ServerStartAction, "ServerStartAction" }, // 2803990961
		{ &Z_Construct_UFunction_UWaveActionComponent_ServerStopAction, "ServerStopAction" }, // 2540762916
		{ &Z_Construct_UFunction_UWaveActionComponent_StartActionByName, "StartActionByName" }, // 1789756303
		{ &Z_Construct_UFunction_UWaveActionComponent_StopActionByName, "StopActionByName" }, // 2825953330
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveActionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_ActiveGameplayTags = { "ActiveGameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveActionComponent, ActiveGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGameplayTags_MetaData), NewProp_ActiveGameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_DefaultActions_Inner = { "DefaultActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UWaveAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_DefaultActions = { "DefaultActions", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveActionComponent, DefaultActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultActions_MetaData), NewProp_DefaultActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWaveAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0124080000002034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveActionComponent, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_OnActionStarted = { "OnActionStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveActionComponent, OnActionStarted), Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionStarted_MetaData), NewProp_OnActionStarted_MetaData) }; // 2339935452
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_OnActionStopped = { "OnActionStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveActionComponent, OnActionStopped), Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionStopped_MetaData), NewProp_OnActionStopped_MetaData) }; // 2339935452
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveActionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_ActiveGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_DefaultActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_DefaultActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_OnActionStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveActionComponent_Statics::NewProp_OnActionStopped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveActionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveActionComponent_Statics::ClassParams = {
	&UWaveActionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaveActionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveActionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveActionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveActionComponent()
{
	if (!Z_Registration_Info_UClass_UWaveActionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveActionComponent.OuterSingleton, Z_Construct_UClass_UWaveActionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveActionComponent.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveActionComponent>()
{
	return UWaveActionComponent::StaticClass();
}
void UWaveActionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Actions(TEXT("Actions"));
	const bool bIsValid = true
		&& Name_Actions == ClassReps[(int32)ENetFields_Private::Actions].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWaveActionComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveActionComponent);
UWaveActionComponent::~UWaveActionComponent() {}
// End Class UWaveActionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveActionComponent, UWaveActionComponent::StaticClass, TEXT("UWaveActionComponent"), &Z_Registration_Info_UClass_UWaveActionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveActionComponent), 2661168442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_206176998(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveActionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
