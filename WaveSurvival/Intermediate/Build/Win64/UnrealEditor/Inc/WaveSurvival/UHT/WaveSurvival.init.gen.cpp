// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveSurvival_init() {}
	WAVESURVIVAL_API UFunction* Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature();
	WAVESURVIVAL_API UFunction* Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WaveSurvival;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WaveSurvival()
	{
		if (!Z_Registration_Info_UPackage__Script_WaveSurvival.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WaveSurvival_OnActionStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WaveSurvival_OnAttributeChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WaveSurvival",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD0A8BB59,
				0x8650ECEA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WaveSurvival.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WaveSurvival.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WaveSurvival(Z_Construct_UPackage__Script_WaveSurvival, TEXT("/Script/WaveSurvival"), Z_Registration_Info_UPackage__Script_WaveSurvival, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD0A8BB59, 0x8650ECEA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
