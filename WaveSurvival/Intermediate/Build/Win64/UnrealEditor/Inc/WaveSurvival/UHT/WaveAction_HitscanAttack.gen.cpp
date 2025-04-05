// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/ActionSystem/WaveAction_HitScanAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveAction_HitScanAttack() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePlayerCharacter_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_HitScanAttack();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAction_HitScanAttack_NoRegister();
WAVESURVIVAL_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanData();
// End Cross Module References

// Begin ScriptStruct FHitScanData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitScanData;
class UScriptStruct* FHitScanData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitScanData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitScanData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanData, (UObject*)Z_Construct_UPackage__Script_WaveSurvival(), TEXT("HitScanData"));
	}
	return Z_Registration_Info_UScriptStruct_HitScanData.OuterSingleton;
}
template<> WAVESURVIVAL_API UScriptStruct* StaticStruct<FHitScanData>()
{
	return FHitScanData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHitScanData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitStart_MetaData[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEnd_MetaData[] = {
		{ "Category", "HitScanData" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanData_Statics::NewProp_HitStart = { "HitStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitScanData, HitStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitStart_MetaData), NewProp_HitStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitScanData_Statics::NewProp_HitEnd = { "HitEnd", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitScanData, HitEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEnd_MetaData), NewProp_HitEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitScanData_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitScanData, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitActor_MetaData), NewProp_HitActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitScanData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanData_Statics::NewProp_HitStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanData_Statics::NewProp_HitEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanData_Statics::NewProp_HitActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitScanData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
	nullptr,
	&NewStructOps,
	"HitScanData",
	Z_Construct_UScriptStruct_FHitScanData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanData_Statics::PropPointers),
	sizeof(FHitScanData),
	alignof(FHitScanData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHitScanData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHitScanData()
{
	if (!Z_Registration_Info_UScriptStruct_HitScanData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitScanData.InnerSingleton, Z_Construct_UScriptStruct_FHitScanData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HitScanData.InnerSingleton;
}
// End ScriptStruct FHitScanData

// Begin Class UWaveAction_HitScanAttack Function AttackDelay_Elapsed
struct Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics
{
	struct WaveAction_HitScanAttack_eventAttackDelay_Elapsed_Parms
	{
		AWavePlayerCharacter* InstigatorCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_HitScanAttack_eventAttackDelay_Elapsed_Parms, InstigatorCharacter), Z_Construct_UClass_AWavePlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::NewProp_InstigatorCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction_HitScanAttack, nullptr, "AttackDelay_Elapsed", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::WaveAction_HitScanAttack_eventAttackDelay_Elapsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::WaveAction_HitScanAttack_eventAttackDelay_Elapsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction_HitScanAttack::execAttackDelay_Elapsed)
{
	P_GET_OBJECT(AWavePlayerCharacter,Z_Param_InstigatorCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackDelay_Elapsed(Z_Param_InstigatorCharacter);
	P_NATIVE_END;
}
// End Class UWaveAction_HitScanAttack Function AttackDelay_Elapsed

// Begin Class UWaveAction_HitScanAttack Function MulticastSpawnHitScanEffects
struct Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics
{
	struct WaveAction_HitScanAttack_eventMulticastSpawnHitScanEffects_Parms
	{
		AWavePlayerCharacter* InstigatorCharacter;
		FHitScanData InHitScanData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHitScanData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHitScanData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_HitScanAttack_eventMulticastSpawnHitScanEffects_Parms, InstigatorCharacter), Z_Construct_UClass_AWavePlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::NewProp_InHitScanData = { "InHitScanData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_HitScanAttack_eventMulticastSpawnHitScanEffects_Parms, InHitScanData), Z_Construct_UScriptStruct_FHitScanData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHitScanData_MetaData), NewProp_InHitScanData_MetaData) }; // 1635251743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::NewProp_InstigatorCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::NewProp_InHitScanData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction_HitScanAttack, nullptr, "MulticastSpawnHitScanEffects", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::WaveAction_HitScanAttack_eventMulticastSpawnHitScanEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::WaveAction_HitScanAttack_eventMulticastSpawnHitScanEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction_HitScanAttack::execMulticastSpawnHitScanEffects)
{
	P_GET_OBJECT(AWavePlayerCharacter,Z_Param_InstigatorCharacter);
	P_GET_STRUCT_REF(FHitScanData,Z_Param_Out_InHitScanData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSpawnHitScanEffects(Z_Param_InstigatorCharacter,Z_Param_Out_InHitScanData);
	P_NATIVE_END;
}
// End Class UWaveAction_HitScanAttack Function MulticastSpawnHitScanEffects

// Begin Class UWaveAction_HitScanAttack Function RunHitScan
struct Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics
{
	struct WaveAction_HitScanAttack_eventRunHitScan_Parms
	{
		AWavePlayerCharacter* InstigatorCharacter;
		bool bIsLocal;
		FHitScanData OutHitScanData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static void NewProp_bIsLocal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitScanData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_HitScanAttack_eventRunHitScan_Parms, InstigatorCharacter), Z_Construct_UClass_AWavePlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::NewProp_bIsLocal_SetBit(void* Obj)
{
	((WaveAction_HitScanAttack_eventRunHitScan_Parms*)Obj)->bIsLocal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::NewProp_bIsLocal = { "bIsLocal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WaveAction_HitScanAttack_eventRunHitScan_Parms), &Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::NewProp_bIsLocal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::NewProp_OutHitScanData = { "OutHitScanData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_HitScanAttack_eventRunHitScan_Parms, OutHitScanData), Z_Construct_UScriptStruct_FHitScanData, METADATA_PARAMS(0, nullptr) }; // 1635251743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::NewProp_InstigatorCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::NewProp_bIsLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::NewProp_OutHitScanData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction_HitScanAttack, nullptr, "RunHitScan", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::WaveAction_HitScanAttack_eventRunHitScan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::WaveAction_HitScanAttack_eventRunHitScan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction_HitScanAttack::execRunHitScan)
{
	P_GET_OBJECT(AWavePlayerCharacter,Z_Param_InstigatorCharacter);
	P_GET_UBOOL(Z_Param_bIsLocal);
	P_GET_STRUCT_REF(FHitScanData,Z_Param_Out_OutHitScanData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunHitScan(Z_Param_InstigatorCharacter,Z_Param_bIsLocal,Z_Param_Out_OutHitScanData);
	P_NATIVE_END;
}
// End Class UWaveAction_HitScanAttack Function RunHitScan

// Begin Class UWaveAction_HitScanAttack Function SpawnHitScanEffects
struct WaveAction_HitScanAttack_eventSpawnHitScanEffects_Parms
{
	AWavePlayerCharacter* InstigatorCharacter;
	FHitScanData InHitScanData;
};
static FName NAME_UWaveAction_HitScanAttack_SpawnHitScanEffects = FName(TEXT("SpawnHitScanEffects"));
void UWaveAction_HitScanAttack::SpawnHitScanEffects(AWavePlayerCharacter* InstigatorCharacter, FHitScanData const& InHitScanData)
{
	WaveAction_HitScanAttack_eventSpawnHitScanEffects_Parms Parms;
	Parms.InstigatorCharacter=InstigatorCharacter;
	Parms.InHitScanData=InHitScanData;
	ProcessEvent(FindFunctionChecked(NAME_UWaveAction_HitScanAttack_SpawnHitScanEffects),&Parms);
}
struct Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHitScanData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHitScanData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_HitScanAttack_eventSpawnHitScanEffects_Parms, InstigatorCharacter), Z_Construct_UClass_AWavePlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::NewProp_InHitScanData = { "InHitScanData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAction_HitScanAttack_eventSpawnHitScanEffects_Parms, InHitScanData), Z_Construct_UScriptStruct_FHitScanData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHitScanData_MetaData), NewProp_InHitScanData_MetaData) }; // 1635251743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::NewProp_InstigatorCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::NewProp_InHitScanData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveAction_HitScanAttack, nullptr, "SpawnHitScanEffects", nullptr, nullptr, Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::PropPointers), sizeof(WaveAction_HitScanAttack_eventSpawnHitScanEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveAction_HitScanAttack_eventSpawnHitScanEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveAction_HitScanAttack::execSpawnHitScanEffects)
{
	P_GET_OBJECT(AWavePlayerCharacter,Z_Param_InstigatorCharacter);
	P_GET_STRUCT_REF(FHitScanData,Z_Param_Out_InHitScanData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnHitScanEffects_Implementation(Z_Param_InstigatorCharacter,Z_Param_Out_InHitScanData);
	P_NATIVE_END;
}
// End Class UWaveAction_HitScanAttack Function SpawnHitScanEffects

// Begin Class UWaveAction_HitScanAttack
void UWaveAction_HitScanAttack::StaticRegisterNativesUWaveAction_HitScanAttack()
{
	UClass* Class = UWaveAction_HitScanAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackDelay_Elapsed", &UWaveAction_HitScanAttack::execAttackDelay_Elapsed },
		{ "MulticastSpawnHitScanEffects", &UWaveAction_HitScanAttack::execMulticastSpawnHitScanEffects },
		{ "RunHitScan", &UWaveAction_HitScanAttack::execRunHitScan },
		{ "SpawnHitScanEffects", &UWaveAction_HitScanAttack::execSpawnHitScanEffects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveAction_HitScanAttack);
UClass* Z_Construct_UClass_UWaveAction_HitScanAttack_NoRegister()
{
	return UWaveAction_HitScanAttack::StaticClass();
}
struct Z_Construct_UClass_UWaveAction_HitScanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActionSystem/WaveAction_HitScanAttack.h" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepRadius_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sphere radius of the sweep to find desired target under crosshair. Adjusts final projectile direction */" },
#endif
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere radius of the sweep to find desired target under crosshair. Adjusts final projectile direction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitScanLength_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandSocketName_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimDelay_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastingEffect_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastingSound_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletTracerEffect_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletTracerEffectInstance_MetaData[] = {
		{ "Category", "WaveAction_HitScanAttack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracerEffectParamName_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "ActionSystem/WaveAction_HitScanAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitScanLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackAnimDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastingEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastingSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletTracerEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletTracerEffectInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TracerEffectParamName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveAction_HitScanAttack_AttackDelay_Elapsed, "AttackDelay_Elapsed" }, // 3000321455
		{ &Z_Construct_UFunction_UWaveAction_HitScanAttack_MulticastSpawnHitScanEffects, "MulticastSpawnHitScanEffects" }, // 3486138785
		{ &Z_Construct_UFunction_UWaveAction_HitScanAttack_RunHitScan, "RunHitScan" }, // 3493108792
		{ &Z_Construct_UFunction_UWaveAction_HitScanAttack_SpawnHitScanEffects, "SpawnHitScanEffects" }, // 3024136481
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveAction_HitScanAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_SweepRadius = { "SweepRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, SweepRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepRadius_MetaData), NewProp_SweepRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_HitScanLength = { "HitScanLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, HitScanLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitScanLength_MetaData), NewProp_HitScanLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_HandSocketName = { "HandSocketName", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, HandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandSocketName_MetaData), NewProp_HandSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_AttackAnimDelay = { "AttackAnimDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, AttackAnimDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimDelay_MetaData), NewProp_AttackAnimDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_AttackAnim = { "AttackAnim", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, AttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnim_MetaData), NewProp_AttackAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_CastingEffect = { "CastingEffect", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, CastingEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastingEffect_MetaData), NewProp_CastingEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_CastingSound = { "CastingSound", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, CastingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastingSound_MetaData), NewProp_CastingSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_BulletTracerEffect = { "BulletTracerEffect", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, BulletTracerEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletTracerEffect_MetaData), NewProp_BulletTracerEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_BulletTracerEffectInstance = { "BulletTracerEffectInstance", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, BulletTracerEffectInstance), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletTracerEffectInstance_MetaData), NewProp_BulletTracerEffectInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_ImpactVFX = { "ImpactVFX", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, ImpactVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVFX_MetaData), NewProp_ImpactVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSound_MetaData), NewProp_ImpactSound_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_TracerEffectParamName = { "TracerEffectParamName", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveAction_HitScanAttack, TracerEffectParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracerEffectParamName_MetaData), NewProp_TracerEffectParamName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_SweepRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_HitScanLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_HandSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_AttackAnimDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_AttackAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_CastingEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_CastingSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_BulletTracerEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_BulletTracerEffectInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_ImpactVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_ImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::NewProp_TracerEffectParamName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWaveAction,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::ClassParams = {
	&UWaveAction_HitScanAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveAction_HitScanAttack()
{
	if (!Z_Registration_Info_UClass_UWaveAction_HitScanAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveAction_HitScanAttack.OuterSingleton, Z_Construct_UClass_UWaveAction_HitScanAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveAction_HitScanAttack.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveAction_HitScanAttack>()
{
	return UWaveAction_HitScanAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveAction_HitScanAttack);
UWaveAction_HitScanAttack::~UWaveAction_HitScanAttack() {}
// End Class UWaveAction_HitScanAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHitScanData::StaticStruct, Z_Construct_UScriptStruct_FHitScanData_Statics::NewStructOps, TEXT("HitScanData"), &Z_Registration_Info_UScriptStruct_HitScanData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitScanData), 1635251743U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveAction_HitScanAttack, UWaveAction_HitScanAttack::StaticClass, TEXT("UWaveAction_HitScanAttack"), &Z_Registration_Info_UClass_UWaveAction_HitScanAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveAction_HitScanAttack), 3394356528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_979546913(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_ActionSystem_WaveAction_HitScanAttack_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
