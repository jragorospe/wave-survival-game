// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Player/WavePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWavePlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePlayerController();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWavePlayerController_NoRegister();
// End Cross Module References

// Begin Class AWavePlayerController Function TogglePauseMenu
struct Z_Construct_UFunction_AWavePlayerController_TogglePauseMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/WavePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWavePlayerController_TogglePauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWavePlayerController, nullptr, "TogglePauseMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWavePlayerController_TogglePauseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWavePlayerController_TogglePauseMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWavePlayerController_TogglePauseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWavePlayerController_TogglePauseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWavePlayerController::execTogglePauseMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePauseMenu();
	P_NATIVE_END;
}
// End Class AWavePlayerController Function TogglePauseMenu

// Begin Class AWavePlayerController
void AWavePlayerController::StaticRegisterNativesAWavePlayerController()
{
	UClass* Class = AWavePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TogglePauseMenu", &AWavePlayerController::execTogglePauseMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWavePlayerController);
UClass* Z_Construct_UClass_AWavePlayerController_NoRegister()
{
	return AWavePlayerController::StaticClass();
}
struct Z_Construct_UClass_AWavePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/WavePlayerController.h" },
		{ "ModuleRelativePath", "Player/WavePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/WavePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/WavePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_Pause_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Player/WavePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseMenuInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Input_Pause;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWavePlayerController_TogglePauseMenu, "TogglePauseMenu" }, // 2161584685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWavePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWavePlayerController_Statics::NewProp_PauseMenuClass = { "PauseMenuClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerController, PauseMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuClass_MetaData), NewProp_PauseMenuClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerController_Statics::NewProp_PauseMenuInstance = { "PauseMenuInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerController, PauseMenuInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuInstance_MetaData), NewProp_PauseMenuInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWavePlayerController_Statics::NewProp_Input_Pause = { "Input_Pause", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWavePlayerController, Input_Pause), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_Pause_MetaData), NewProp_Input_Pause_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWavePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerController_Statics::NewProp_PauseMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerController_Statics::NewProp_PauseMenuInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWavePlayerController_Statics::NewProp_Input_Pause,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWavePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWavePlayerController_Statics::ClassParams = {
	&AWavePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWavePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWavePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWavePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWavePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWavePlayerController()
{
	if (!Z_Registration_Info_UClass_AWavePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWavePlayerController.OuterSingleton, Z_Construct_UClass_AWavePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWavePlayerController.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWavePlayerController>()
{
	return AWavePlayerController::StaticClass();
}
AWavePlayerController::AWavePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWavePlayerController);
AWavePlayerController::~AWavePlayerController() {}
// End Class AWavePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWavePlayerController, AWavePlayerController::StaticClass, TEXT("AWavePlayerController"), &Z_Registration_Info_UClass_AWavePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWavePlayerController), 704584631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerController_h_2578915839(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Player_WavePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
