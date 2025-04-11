// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/AI/WaveAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveAICharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveAICharacter();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveAICharacter_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveActionComponent_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveAttributeComponent_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveWorldUserWidget_NoRegister();
// End Cross Module References

// Begin Class AWaveAICharacter Function GetTargetActor
struct Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics
{
	struct WaveAICharacter_eventGetTargetActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAICharacter_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveAICharacter, nullptr, "GetTargetActor", nullptr, nullptr, Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::WaveAICharacter_eventGetTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::WaveAICharacter_eventGetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWaveAICharacter_GetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveAICharacter_GetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveAICharacter::execGetTargetActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTargetActor();
	P_NATIVE_END;
}
// End Class AWaveAICharacter Function GetTargetActor

// Begin Class AWaveAICharacter Function MulticastPlayAttackFX
static FName NAME_AWaveAICharacter_MulticastPlayAttackFX = FName(TEXT("MulticastPlayAttackFX"));
void AWaveAICharacter::MulticastPlayAttackFX()
{
	ProcessEvent(FindFunctionChecked(NAME_AWaveAICharacter_MulticastPlayAttackFX),NULL);
}
struct Z_Construct_UFunction_AWaveAICharacter_MulticastPlayAttackFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveAICharacter_MulticastPlayAttackFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveAICharacter, nullptr, "MulticastPlayAttackFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveAICharacter_MulticastPlayAttackFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveAICharacter_MulticastPlayAttackFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWaveAICharacter_MulticastPlayAttackFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveAICharacter_MulticastPlayAttackFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveAICharacter::execMulticastPlayAttackFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastPlayAttackFX_Implementation();
	P_NATIVE_END;
}
// End Class AWaveAICharacter Function MulticastPlayAttackFX

// Begin Class AWaveAICharacter Function OnHealthAttributeChanged
struct Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics
{
	struct WaveAICharacter_eventOnHealthAttributeChanged_Parms
	{
		AActor* InstigatorActor;
		UWaveAttributeComponent* OwningComp;
		float NewHealth;
		float Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAICharacter_eventOnHealthAttributeChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAICharacter_eventOnHealthAttributeChanged_Parms, OwningComp), Z_Construct_UClass_UWaveAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComp_MetaData), NewProp_OwningComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAICharacter_eventOnHealthAttributeChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveAICharacter_eventOnHealthAttributeChanged_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::NewProp_OwningComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveAICharacter, nullptr, "OnHealthAttributeChanged", nullptr, nullptr, Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::WaveAICharacter_eventOnHealthAttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::WaveAICharacter_eventOnHealthAttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveAICharacter::execOnHealthAttributeChanged)
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
// End Class AWaveAICharacter Function OnHealthAttributeChanged

// Begin Class AWaveAICharacter
void AWaveAICharacter::StaticRegisterNativesAWaveAICharacter()
{
	UClass* Class = AWaveAICharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTargetActor", &AWaveAICharacter::execGetTargetActor },
		{ "MulticastPlayAttackFX", &AWaveAICharacter::execMulticastPlayAttackFX },
		{ "OnHealthAttributeChanged", &AWaveAICharacter::execOnHealthAttributeChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveAICharacter);
UClass* Z_Construct_UClass_AWaveAICharacter_NoRegister()
{
	return AWaveAICharacter::StaticClass();
}
struct Z_Construct_UClass_AWaveAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/WaveAICharacter.h" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackFX_Socket_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSoundComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackParticleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHealthBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/WaveAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackFX_Socket;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackSoundComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackParticleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveHealthBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaveAICharacter_GetTargetActor, "GetTargetActor" }, // 1084592558
		{ &Z_Construct_UFunction_AWaveAICharacter_MulticastPlayAttackFX, "MulticastPlayAttackFX" }, // 2123251282
		{ &Z_Construct_UFunction_AWaveAICharacter_OnHealthAttributeChanged, "OnHealthAttributeChanged" }, // 3726861834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveAICharacter, HealthBarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetClass_MetaData), NewProp_HealthBarWidgetClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttackFX_Socket = { "AttackFX_Socket", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveAICharacter, AttackFX_Socket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackFX_Socket_MetaData), NewProp_AttackFX_Socket_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveAICharacter, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_ActionComp = { "ActionComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveAICharacter, ActionComp), Z_Construct_UClass_UWaveActionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionComp_MetaData), NewProp_ActionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttributeComp = { "AttributeComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveAICharacter, AttributeComp), Z_Construct_UClass_UWaveAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeComp_MetaData), NewProp_AttributeComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttackSoundComp = { "AttackSoundComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveAICharacter, AttackSoundComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSoundComp_MetaData), NewProp_AttackSoundComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttackParticleComp = { "AttackParticleComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveAICharacter, AttackParticleComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackParticleComp_MetaData), NewProp_AttackParticleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_ActiveHealthBar = { "ActiveHealthBar", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveAICharacter, ActiveHealthBar), Z_Construct_UClass_UWaveWorldUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveHealthBar_MetaData), NewProp_ActiveHealthBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveAICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_HealthBarWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttackFX_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_ActionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttributeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttackSoundComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_AttackParticleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveAICharacter_Statics::NewProp_ActiveHealthBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveAICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaveAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWaveAICharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AWaveAICharacter, IGenericTeamAgentInterface), false },  // 1380835789
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveAICharacter_Statics::ClassParams = {
	&AWaveAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWaveAICharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaveAICharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaveAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaveAICharacter()
{
	if (!Z_Registration_Info_UClass_AWaveAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveAICharacter.OuterSingleton, Z_Construct_UClass_AWaveAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaveAICharacter.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWaveAICharacter>()
{
	return AWaveAICharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveAICharacter);
AWaveAICharacter::~AWaveAICharacter() {}
// End Class AWaveAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaveAICharacter, AWaveAICharacter::StaticClass, TEXT("AWaveAICharacter"), &Z_Registration_Info_UClass_AWaveAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveAICharacter), 4140612087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_3892118631(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_AI_WaveAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
