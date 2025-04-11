// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Player/WaveInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveInteractionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveInteractionComponent();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveInteractionComponent_NoRegister();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveWorldUserWidget_NoRegister();
// End Cross Module References

// Begin Class UWaveInteractionComponent Function ServerInteract
struct WaveInteractionComponent_eventServerInteract_Parms
{
	AActor* InFocus;
};
static FName NAME_UWaveInteractionComponent_ServerInteract = FName(TEXT("ServerInteract"));
void UWaveInteractionComponent::ServerInteract(AActor* InFocus)
{
	WaveInteractionComponent_eventServerInteract_Parms Parms;
	Parms.InFocus=InFocus;
	ProcessEvent(FindFunctionChecked(NAME_UWaveInteractionComponent_ServerInteract),&Parms);
}
struct Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/WaveInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InFocus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveInteractionComponent_eventServerInteract_Parms, InFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::NewProp_InFocus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveInteractionComponent, nullptr, "ServerInteract", nullptr, nullptr, Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::PropPointers), sizeof(WaveInteractionComponent_eventServerInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveInteractionComponent_eventServerInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveInteractionComponent::execServerInteract)
{
	P_GET_OBJECT(AActor,Z_Param_InFocus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerInteract_Implementation(Z_Param_InFocus);
	P_NATIVE_END;
}
// End Class UWaveInteractionComponent Function ServerInteract

// Begin Class UWaveInteractionComponent
void UWaveInteractionComponent::StaticRegisterNativesUWaveInteractionComponent()
{
	UClass* Class = UWaveInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ServerInteract", &UWaveInteractionComponent::execServerInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveInteractionComponent);
UClass* Z_Construct_UClass_UWaveInteractionComponent_NoRegister()
{
	return UWaveInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_UWaveInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/WaveInteractionComponent.h" },
		{ "ModuleRelativePath", "Player/WaveInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedActor_MetaData[] = {
		{ "ModuleRelativePath", "Player/WaveInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Player/WaveInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Player/WaveInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/WaveInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WaveInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveInteractionComponent_ServerInteract, "ServerInteract" }, // 3441191778
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_FocusedActor = { "FocusedActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveInteractionComponent, FocusedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedActor_MetaData), NewProp_FocusedActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveInteractionComponent, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveInteractionComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_DefaultWidgetClass = { "DefaultWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveInteractionComponent, DefaultWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWaveWorldUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWidgetClass_MetaData), NewProp_DefaultWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_WidgetInstance = { "WidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveInteractionComponent, WidgetInstance), Z_Construct_UClass_UWaveWorldUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInstance_MetaData), NewProp_WidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_FocusedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_DefaultWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveInteractionComponent_Statics::NewProp_WidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveInteractionComponent_Statics::ClassParams = {
	&UWaveInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaveInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UWaveInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveInteractionComponent.OuterSingleton, Z_Construct_UClass_UWaveInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveInteractionComponent.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveInteractionComponent>()
{
	return UWaveInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveInteractionComponent);
UWaveInteractionComponent::~UWaveInteractionComponent() {}
// End Class UWaveInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveInteractionComponent, UWaveInteractionComponent::StaticClass, TEXT("UWaveInteractionComponent"), &Z_Registration_Info_UClass_UWaveInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveInteractionComponent), 573543875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_984859808(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WaveInteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
