// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Core/WaveGameplayInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveGameplayInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveGameplayInterface();
WAVESURVIVAL_API UClass* Z_Construct_UClass_UWaveGameplayInterface_NoRegister();
// End Cross Module References

// Begin Interface UWaveGameplayInterface Function GetInteractText
struct WaveGameplayInterface_eventGetInteractText_Parms
{
	APawn* InstigatorPawn;
	FText ReturnValue;
};
FText IWaveGameplayInterface::GetInteractText(APawn* InstigatorPawn)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractText instead.");
	WaveGameplayInterface_eventGetInteractText_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UWaveGameplayInterface_GetInteractText = FName(TEXT("GetInteractText"));
FText IWaveGameplayInterface::Execute_GetInteractText(UObject* O, APawn* InstigatorPawn)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWaveGameplayInterface::StaticClass()));
	WaveGameplayInterface_eventGetInteractText_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UWaveGameplayInterface_GetInteractText);
	if (Func)
	{
		Parms.InstigatorPawn=InstigatorPawn;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IWaveGameplayInterface*)(O->GetNativeInterfaceAddress(UWaveGameplayInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInteractText_Implementation(InstigatorPawn);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Core/WaveGameplayInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayInterface_eventGetInteractText_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayInterface_eventGetInteractText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::NewProp_InstigatorPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveGameplayInterface, nullptr, "GetInteractText", nullptr, nullptr, Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::PropPointers), sizeof(WaveGameplayInterface_eventGetInteractText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveGameplayInterface_eventGetInteractText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWaveGameplayInterface::execGetInteractText)
{
	P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetInteractText_Implementation(Z_Param_InstigatorPawn);
	P_NATIVE_END;
}
// End Interface UWaveGameplayInterface Function GetInteractText

// Begin Interface UWaveGameplayInterface Function Interact
struct WaveGameplayInterface_eventInteract_Parms
{
	APawn* InstigatorPawn;
};
void IWaveGameplayInterface::Interact(APawn* InstigatorPawn)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UWaveGameplayInterface_Interact = FName(TEXT("Interact"));
void IWaveGameplayInterface::Execute_Interact(UObject* O, APawn* InstigatorPawn)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWaveGameplayInterface::StaticClass()));
	WaveGameplayInterface_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UWaveGameplayInterface_Interact);
	if (Func)
	{
		Parms.InstigatorPawn=InstigatorPawn;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IWaveGameplayInterface*)(O->GetNativeInterfaceAddress(UWaveGameplayInterface::StaticClass())))
	{
		I->Interact_Implementation(InstigatorPawn);
	}
}
struct Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Core/WaveGameplayInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveGameplayInterface_eventInteract_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::NewProp_InstigatorPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveGameplayInterface, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::PropPointers), sizeof(WaveGameplayInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(WaveGameplayInterface_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveGameplayInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveGameplayInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWaveGameplayInterface::execInteract)
{
	P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_InstigatorPawn);
	P_NATIVE_END;
}
// End Interface UWaveGameplayInterface Function Interact

// Begin Interface UWaveGameplayInterface
void UWaveGameplayInterface::StaticRegisterNativesUWaveGameplayInterface()
{
	UClass* Class = UWaveGameplayInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractText", &IWaveGameplayInterface::execGetInteractText },
		{ "Interact", &IWaveGameplayInterface::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveGameplayInterface);
UClass* Z_Construct_UClass_UWaveGameplayInterface_NoRegister()
{
	return UWaveGameplayInterface::StaticClass();
}
struct Z_Construct_UClass_UWaveGameplayInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Core/WaveGameplayInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveGameplayInterface_GetInteractText, "GetInteractText" }, // 1660074029
		{ &Z_Construct_UFunction_UWaveGameplayInterface_Interact, "Interact" }, // 467078393
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWaveGameplayInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWaveGameplayInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveGameplayInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveGameplayInterface_Statics::ClassParams = {
	&UWaveGameplayInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveGameplayInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveGameplayInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveGameplayInterface()
{
	if (!Z_Registration_Info_UClass_UWaveGameplayInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveGameplayInterface.OuterSingleton, Z_Construct_UClass_UWaveGameplayInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveGameplayInterface.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<UWaveGameplayInterface>()
{
	return UWaveGameplayInterface::StaticClass();
}
UWaveGameplayInterface::UWaveGameplayInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveGameplayInterface);
UWaveGameplayInterface::~UWaveGameplayInterface() {}
// End Interface UWaveGameplayInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveGameplayInterface, UWaveGameplayInterface::StaticClass, TEXT("UWaveGameplayInterface"), &Z_Registration_Info_UClass_UWaveGameplayInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveGameplayInterface), 3349288223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_3488654132(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Core_WaveGameplayInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
