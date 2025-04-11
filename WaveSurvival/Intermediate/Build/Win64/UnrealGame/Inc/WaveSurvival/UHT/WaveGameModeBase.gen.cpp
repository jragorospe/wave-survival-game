// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Core/WaveGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveGameModeBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveAICharacter_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveGameModeBase();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveGameModeBase_NoRegister();
WAVESURVIVAL_API UScriptStruct* Z_Construct_UScriptStruct_FMonsterInfoRow();
// End Cross Module References

// Begin ScriptStruct FMonsterInfoRow
static_assert(std::is_polymorphic<FMonsterInfoRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMonsterInfoRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MonsterInfoRow;
class UScriptStruct* FMonsterInfoRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MonsterInfoRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MonsterInfoRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMonsterInfoRow, (UObject*)Z_Construct_UPackage__Script_WaveSurvival(), TEXT("MonsterInfoRow"));
	}
	return Z_Registration_Info_UScriptStruct_MonsterInfoRow.OuterSingleton;
}
template<> WAVESURVIVAL_API UScriptStruct* StaticStruct<FMonsterInfoRow>()
{
	return FMonsterInfoRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMonsterInfoRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterId_MetaData[] = {
		{ "Category", "MonsterInfoRow" },
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MonsterId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMonsterInfoRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::NewProp_MonsterId = { "MonsterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterInfoRow, MonsterId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterId_MetaData), NewProp_MonsterId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::NewProp_MonsterId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MonsterInfoRow",
	Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::PropPointers),
	sizeof(FMonsterInfoRow),
	alignof(FMonsterInfoRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMonsterInfoRow()
{
	if (!Z_Registration_Info_UScriptStruct_MonsterInfoRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MonsterInfoRow.InnerSingleton, Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MonsterInfoRow.InnerSingleton;
}
// End ScriptStruct FMonsterInfoRow

// Begin Class AWaveGameModeBase Function RespawnPlayerElapsed
struct Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics
{
	struct WaveGameModeBase_eventRespawnPlayerElapsed_Parms
	{
		AController* Controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameModeBase_eventRespawnPlayerElapsed_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveGameModeBase, nullptr, "RespawnPlayerElapsed", nullptr, nullptr, Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::WaveGameModeBase_eventRespawnPlayerElapsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::WaveGameModeBase_eventRespawnPlayerElapsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveGameModeBase::execRespawnPlayerElapsed)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RespawnPlayerElapsed(Z_Param_Controller);
	P_NATIVE_END;
}
// End Class AWaveGameModeBase Function RespawnPlayerElapsed

// Begin Class AWaveGameModeBase
void AWaveGameModeBase::StaticRegisterNativesAWaveGameModeBase()
{
	UClass* Class = AWaveGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RespawnPlayerElapsed", &AWaveGameModeBase::execRespawnPlayerElapsed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveGameModeBase);
UClass* Z_Construct_UClass_AWaveGameModeBase_NoRegister()
{
	return AWaveGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AWaveGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/WaveGameModeBase.h" },
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterTable_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBotQuery_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBoxSpawnCurve_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTimerInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Core/WaveGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MonsterTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnBotQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxBoxSpawnCurve;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTimerInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaveGameModeBase_RespawnPlayerElapsed, "RespawnPlayerElapsed" }, // 482405666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_MonsterTable = { "MonsterTable", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveGameModeBase, MonsterTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterTable_MetaData), NewProp_MonsterTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_SpawnBotQuery = { "SpawnBotQuery", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveGameModeBase, SpawnBotQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnBotQuery_MetaData), NewProp_SpawnBotQuery_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_MaxBoxSpawnCurve = { "MaxBoxSpawnCurve", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveGameModeBase, MaxBoxSpawnCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBoxSpawnCurve_MetaData), NewProp_MaxBoxSpawnCurve_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveGameModeBase, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWaveAICharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_SpawnTimerInterval = { "SpawnTimerInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveGameModeBase, SpawnTimerInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTimerInterval_MetaData), NewProp_SpawnTimerInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_MonsterTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_SpawnBotQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_MaxBoxSpawnCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveGameModeBase_Statics::NewProp_SpawnTimerInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaveGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveGameModeBase_Statics::ClassParams = {
	&AWaveGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWaveGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaveGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaveGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaveGameModeBase()
{
	if (!Z_Registration_Info_UClass_AWaveGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveGameModeBase.OuterSingleton, Z_Construct_UClass_AWaveGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaveGameModeBase.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWaveGameModeBase>()
{
	return AWaveGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveGameModeBase);
AWaveGameModeBase::~AWaveGameModeBase() {}
// End Class AWaveGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMonsterInfoRow::StaticStruct, Z_Construct_UScriptStruct_FMonsterInfoRow_Statics::NewStructOps, TEXT("MonsterInfoRow"), &Z_Registration_Info_UScriptStruct_MonsterInfoRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMonsterInfoRow), 3257968467U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaveGameModeBase, AWaveGameModeBase::StaticClass, TEXT("AWaveGameModeBase"), &Z_Registration_Info_UClass_AWaveGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveGameModeBase), 2881270598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_1359429654(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameModeBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
