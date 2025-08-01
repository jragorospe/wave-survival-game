// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Player/WavePlayerCharacter.h"
#include "WaveSurvival/ActionSystem/WaveAction_HitScanAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWavePlayerCharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePlayerCharacter();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePlayerCharacter_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_HitScanAttack_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionComponent_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAttributeComponent_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveInteractionComponent_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveWorldUserWidget_NoRegister();
WAVESURVIVAL_API UFunction* Z_Construct_UDelegateFunction_WaveSurvival_OnPlayerAttack__DelegateSignature();
WAVESURVIVAL_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanData();
// End Cross Module References

// Begin Delegate FOnPlayerAttack
struct Z_Construct_UDelegateFunction_WaveSurvival_OnPlayerAttack__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WaveSurvival_OnPlayerAttack__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WaveSurvival, nullptr, "OnPlayerAttack__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WaveSurvival_OnPlayerAttack__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WaveSurvival_OnPlayerAttack__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_WaveSurvival_OnPlayerAttack__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WaveSurvival_OnPlayerAttack__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerAttack_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerAttack)
{
	OnPlayerAttack.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPlayerAttack

// Begin Class AWavePlayerCharacter Function OnHealthAttributeChanged
struct Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics
{
	struct WavePlayerCharacter_eventOnHealthAttributeChanged_Parms
	{
		AActor* InstigatorActor;
		UWaveAttributeComponent* OwningComp;
		float NewHealth;
		float Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WavePlayerCharacter_eventOnHealthAttributeChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WavePlayerCharacter_eventOnHealthAttributeChanged_Parms, OwningComp), Z_Construct_UClass_UWaveAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComp_MetaData), NewProp_OwningComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WavePlayerCharacter_eventOnHealthAttributeChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WavePlayerCharacter_eventOnHealthAttributeChanged_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::NewProp_OwningComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWavePlayerCharacter, nullptr, "OnHealthAttributeChanged", nullptr, nullptr, Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::WavePlayerCharacter_eventOnHealthAttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::WavePlayerCharacter_eventOnHealthAttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWavePlayerCharacter::execOnHealthAttributeChanged)
{
	P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
	P_GET_OBJECT(UWaveAttributeComponent,Z_Param_OwningComp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHealthAttributeChanged(Z_Param_InstigatorActor,Z_Param_OwningComp,Z_Param_NewHealth,Z_Param_Delta);
	P_NATIVE_END;
}
// End Class AWavePlayerCharacter Function OnHealthAttributeChanged

// Begin Class AWavePlayerCharacter Function SpawnHitScanEffects
struct WavePlayerCharacter_eventSpawnHitScanEffects_Parms
{
	UWaveAction_HitScanAttack* InAction;
	FHitScanData InHitScanData;
};
static FName NAME_AWavePlayerCharacter_SpawnHitScanEffects = FName(TEXT("SpawnHitScanEffects"));
void AWavePlayerCharacter::SpawnHitScanEffects(UWaveAction_HitScanAttack* InAction, FHitScanData const& InHitScanData)
{
	WavePlayerCharacter_eventSpawnHitScanEffects_Parms Parms;
	Parms.InAction=InAction;
	Parms.InHitScanData=InHitScanData;
	ProcessEvent(FindFunctionChecked(NAME_AWavePlayerCharacter_SpawnHitScanEffects),&Parms);
}
struct Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHitScanData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHitScanData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::NewProp_InAction = { "InAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WavePlayerCharacter_eventSpawnHitScanEffects_Parms, InAction), Z_Construct_UClass_UWaveAction_HitScanAttack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::NewProp_InHitScanData = { "InHitScanData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WavePlayerCharacter_eventSpawnHitScanEffects_Parms, InHitScanData), Z_Construct_UScriptStruct_FHitScanData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHitScanData_MetaData), NewProp_InHitScanData_MetaData) }; // 1635251743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::NewProp_InAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::NewProp_InHitScanData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWavePlayerCharacter, nullptr, "SpawnHitScanEffects", nullptr, nullptr, Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::PropPointers), sizeof(WavePlayerCharacter_eventSpawnHitScanEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(WavePlayerCharacter_eventSpawnHitScanEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWavePlayerCharacter::execSpawnHitScanEffects)
{
	P_GET_OBJECT(UWaveAction_HitScanAttack,Z_Param_InAction);
	P_GET_STRUCT(FHitScanData,Z_Param_InHitScanData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnHitScanEffects_Implementation(Z_Param_InAction,Z_Param_InHitScanData);
	P_NATIVE_END;
}
// End Class AWavePlayerCharacter Function SpawnHitScanEffects

// Begin Class AWavePlayerCharacter
void AWavePlayerCharacter::StaticRegisterNativesAWavePlayerCharacter()
{
	UClass* Class = AWavePlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHealthAttributeChanged", &AWavePlayerCharacter::execOnHealthAttributeChanged },
		{ "SpawnHitScanEffects", &AWavePlayerCharacter::execSpawnHitScanEffects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWavePlayerCharacter);
UClass* Z_Construct_UClass_AWavePlayerCharacter_NoRegister()
{
	return AWavePlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_AWavePlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/WavePlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_Move_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_LookMouse_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_Jump_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_Interact_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_Sprint_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_Dash_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_PrimaryAttack_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_SecondaryAttack_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_UltimateAttack_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathVOSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionStimuliComp_MetaData[] = {
		{ "Category", "WavePlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSoundsComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHealthBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerAttack_MetaData[] = {
		{ "ModuleRelativePath", "Player/WavePlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultInputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_LookMouse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Jump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Interact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Sprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Dash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_PrimaryAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_SecondaryAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_UltimateAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathVOSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionStimuliComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackSoundsComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveHealthBar;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWavePlayerCharacter_OnHealthAttributeChanged, "OnHealthAttributeChanged" }, // 4201260279
		{ &Z_Construct_UFunction_AWavePlayerCharacter_SpawnHitScanEffects, "SpawnHitScanEffects" }, // 2443190589
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWavePlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_DefaultInputMapping = { "DefaultInputMapping", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, DefaultInputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputMapping_MetaData), NewProp_DefaultInputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Move = { "Input_Move", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, Input_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_Move_MetaData), NewProp_Input_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_LookMouse = { "Input_LookMouse", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, Input_LookMouse), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_LookMouse_MetaData), NewProp_Input_LookMouse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Jump = { "Input_Jump", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, Input_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_Jump_MetaData), NewProp_Input_Jump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Interact = { "Input_Interact", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, Input_Interact), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_Interact_MetaData), NewProp_Input_Interact_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Sprint = { "Input_Sprint", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, Input_Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_Sprint_MetaData), NewProp_Input_Sprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Dash = { "Input_Dash", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, Input_Dash), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_Dash_MetaData), NewProp_Input_Dash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_PrimaryAttack = { "Input_PrimaryAttack", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, Input_PrimaryAttack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_PrimaryAttack_MetaData), NewProp_Input_PrimaryAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_SecondaryAttack = { "Input_SecondaryAttack", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, Input_SecondaryAttack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_SecondaryAttack_MetaData), NewProp_Input_SecondaryAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_UltimateAttack = { "Input_UltimateAttack", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, Input_UltimateAttack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_UltimateAttack_MetaData), NewProp_Input_UltimateAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_DeathVOSound = { "DeathVOSound", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, DeathVOSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathVOSound_MetaData), NewProp_DeathVOSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, InteractionComp), Z_Construct_UClass_UWaveInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_AttributeComp = { "AttributeComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, AttributeComp), Z_Construct_UClass_UWaveAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeComp_MetaData), NewProp_AttributeComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_ActionComp = { "ActionComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, ActionComp), Z_Construct_UClass_UWaveActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionComp_MetaData), NewProp_ActionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_PerceptionStimuliComp = { "PerceptionStimuliComp", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, PerceptionStimuliComp), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionStimuliComp_MetaData), NewProp_PerceptionStimuliComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_AttackSoundsComp = { "AttackSoundsComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, AttackSoundsComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSoundsComp_MetaData), NewProp_AttackSoundsComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, HealthBarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWaveWorldUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetClass_MetaData), NewProp_HealthBarWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_ActiveHealthBar = { "ActiveHealthBar", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, ActiveHealthBar), Z_Construct_UClass_UWaveWorldUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveHealthBar_MetaData), NewProp_ActiveHealthBar_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_OnPlayerAttack = { "OnPlayerAttack", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerCharacter, OnPlayerAttack), Z_Construct_UDelegateFunction_WaveSurvival_OnPlayerAttack__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerAttack_MetaData), NewProp_OnPlayerAttack_MetaData) }; // 3159052923
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWavePlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_DefaultInputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_LookMouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Interact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Sprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_Dash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_PrimaryAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_SecondaryAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_Input_UltimateAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_DeathVOSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_InteractionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_AttributeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_ActionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_PerceptionStimuliComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_AttackSoundsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_HealthBarWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_ActiveHealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerCharacter_Statics::NewProp_OnPlayerAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWavePlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWavePlayerCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AWavePlayerCharacter, IGenericTeamAgentInterface), false },  // 1380835789
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWavePlayerCharacter_Statics::ClassParams = {
	&AWavePlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWavePlayerCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWavePlayerCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWavePlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWavePlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AWavePlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWavePlayerCharacter.OuterSingleton, Z_Construct_UClass_AWavePlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWavePlayerCharacter.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWavePlayerCharacter>()
{
	return AWavePlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWavePlayerCharacter);
AWavePlayerCharacter::~AWavePlayerCharacter() {}
// End Class AWavePlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWavePlayerCharacter, AWavePlayerCharacter::StaticClass, TEXT("AWavePlayerCharacter"), &Z_Registration_Info_UClass_AWavePlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWavePlayerCharacter), 4137766646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_8590511(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
