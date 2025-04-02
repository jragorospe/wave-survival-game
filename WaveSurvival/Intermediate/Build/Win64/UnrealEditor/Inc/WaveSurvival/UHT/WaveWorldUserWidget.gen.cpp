// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/UI/WaveWorldUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveWorldUserWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveWorldUserWidget();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveWorldUserWidget_NoRegister();
// End Cross Module References

// Begin Class UWaveWorldUserWidget Function AddToRootCanvasPanel
struct Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics
{
	struct WaveWorldUserWidget_eventAddToRootCanvasPanel_Parms
	{
		UUserWidget* InNewWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/WaveWorldUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::NewProp_InNewWidget = { "InNewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveWorldUserWidget_eventAddToRootCanvasPanel_Parms, InNewWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewWidget_MetaData), NewProp_InNewWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::NewProp_InNewWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveWorldUserWidget, nullptr, "AddToRootCanvasPanel", nullptr, nullptr, Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::WaveWorldUserWidget_eventAddToRootCanvasPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::WaveWorldUserWidget_eventAddToRootCanvasPanel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveWorldUserWidget::execAddToRootCanvasPanel)
{
	P_GET_OBJECT(UUserWidget,Z_Param_InNewWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWaveWorldUserWidget::AddToRootCanvasPanel(Z_Param_InNewWidget);
	P_NATIVE_END;
}
// End Class UWaveWorldUserWidget Function AddToRootCanvasPanel

// Begin Class UWaveWorldUserWidget
void UWaveWorldUserWidget::StaticRegisterNativesUWaveWorldUserWidget()
{
	UClass* Class = UWaveWorldUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToRootCanvasPanel", &UWaveWorldUserWidget::execAddToRootCanvasPanel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveWorldUserWidget);
UClass* Z_Construct_UClass_UWaveWorldUserWidget_NoRegister()
{
	return UWaveWorldUserWidget::StaticClass();
}
struct Z_Construct_UClass_UWaveWorldUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WaveWorldUserWidget.h" },
		{ "ModuleRelativePath", "UI/WaveWorldUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/WaveWorldUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/WaveWorldUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[] = {
		{ "Category", "UI" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "UI/WaveWorldUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentOverlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveWorldUserWidget_AddToRootCanvasPanel, "AddToRootCanvasPanel" }, // 1042402398
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveWorldUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveWorldUserWidget_Statics::NewProp_ParentOverlay = { "ParentOverlay", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveWorldUserWidget, ParentOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentOverlay_MetaData), NewProp_ParentOverlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveWorldUserWidget_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveWorldUserWidget, WorldOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveWorldUserWidget_Statics::NewProp_AttachedActor = { "AttachedActor", nullptr, (EPropertyFlags)0x0115000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveWorldUserWidget, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedActor_MetaData), NewProp_AttachedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveWorldUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveWorldUserWidget_Statics::NewProp_ParentOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveWorldUserWidget_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveWorldUserWidget_Statics::NewProp_AttachedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveWorldUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveWorldUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveWorldUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveWorldUserWidget_Statics::ClassParams = {
	&UWaveWorldUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaveWorldUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveWorldUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveWorldUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveWorldUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveWorldUserWidget()
{
	if (!Z_Registration_Info_UClass_UWaveWorldUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveWorldUserWidget.OuterSingleton, Z_Construct_UClass_UWaveWorldUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveWorldUserWidget.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveWorldUserWidget>()
{
	return UWaveWorldUserWidget::StaticClass();
}
UWaveWorldUserWidget::UWaveWorldUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveWorldUserWidget);
UWaveWorldUserWidget::~UWaveWorldUserWidget() {}
// End Class UWaveWorldUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_UI_WaveWorldUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveWorldUserWidget, UWaveWorldUserWidget::StaticClass, TEXT("UWaveWorldUserWidget"), &Z_Registration_Info_UClass_UWaveWorldUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveWorldUserWidget), 4082300499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_UI_WaveWorldUserWidget_h_1899375125(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_UI_WaveWorldUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_UI_WaveWorldUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
