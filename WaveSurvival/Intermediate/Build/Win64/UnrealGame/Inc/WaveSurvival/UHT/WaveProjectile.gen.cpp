// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveSurvival/Projectiles/WaveProjectile.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_WaveSurvival();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile();
WAVESURVIVAL_API UClass* Z_Construct_UClass_AWaveProjectile_NoRegister();
// End Cross Module References

// Begin Class AWaveProjectile Function Explode
static FName NAME_AWaveProjectile_Explode = FName(TEXT("Explode"));
void AWaveProjectile::Explode()
{
	ProcessEvent(FindFunctionChecked(NAME_AWaveProjectile_Explode),NULL);
}
struct Z_Construct_UFunction_AWaveProjectile_Explode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveProjectile_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveProjectile, nullptr, "Explode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_Explode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveProjectile_Explode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWaveProjectile_Explode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveProjectile_Explode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveProjectile::execExplode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Explode_Implementation();
	P_NATIVE_END;
}
// End Class AWaveProjectile Function Explode

// Begin Class AWaveProjectile Function OnActorHit
struct Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics
{
	struct WaveProjectile_eventOnActorHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_eventOnActorHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_eventOnActorHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_eventOnActorHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_eventOnActorHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveProjectile_eventOnActorHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveProjectile, nullptr, "OnActorHit", nullptr, nullptr, Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::WaveProjectile_eventOnActorHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::WaveProjectile_eventOnActorHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWaveProjectile_OnActorHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveProjectile_OnActorHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveProjectile::execOnActorHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AWaveProjectile Function OnActorHit

// Begin Class AWaveProjectile
void AWaveProjectile::StaticRegisterNativesAWaveProjectile()
{
	UClass* Class = AWaveProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Explode", &AWaveProjectile::execExplode },
		{ "OnActorHit", &AWaveProjectile::execOnActorHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveProjectile);
UClass* Z_Construct_UClass_AWaveProjectile_NoRegister()
{
	return AWaveProjectile::StaticClass();
}
struct Z_Construct_UClass_AWaveProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectiles/WaveProjectile.h" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactShakeInnerRadius_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactShakeOuterRadius_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactShake_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectLoopComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectiles/WaveProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactShakeInnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactShakeOuterRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ImpactShake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectLoopComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaveProjectile_Explode, "Explode" }, // 987149316
		{ &Z_Construct_UFunction_AWaveProjectile_OnActorHit, "OnActorHit" }, // 2452619426
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactShakeInnerRadius = { "ImpactShakeInnerRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile, ImpactShakeInnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactShakeInnerRadius_MetaData), NewProp_ImpactShakeInnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactShakeOuterRadius = { "ImpactShakeOuterRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile, ImpactShakeOuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactShakeOuterRadius_MetaData), NewProp_ImpactShakeOuterRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactShake = { "ImpactShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile, ImpactShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactShake_MetaData), NewProp_ImpactShake_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactVFX = { "ImpactVFX", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile, ImpactVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVFX_MetaData), NewProp_ImpactVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSound_MetaData), NewProp_ImpactSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComp_MetaData), NewProp_SphereComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveProjectile_Statics::NewProp_MoveComp = { "MoveComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile, MoveComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveComp_MetaData), NewProp_MoveComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveProjectile_Statics::NewProp_EffectLoopComp = { "EffectLoopComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile, EffectLoopComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectLoopComp_MetaData), NewProp_EffectLoopComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveProjectile_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveProjectile, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComp_MetaData), NewProp_AudioComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactShakeInnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactShakeOuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Statics::NewProp_ImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Statics::NewProp_SphereComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Statics::NewProp_MoveComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Statics::NewProp_EffectLoopComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveProjectile_Statics::NewProp_AudioComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaveProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveSurvival,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveProjectile_Statics::ClassParams = {
	&AWaveProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWaveProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaveProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaveProjectile()
{
	if (!Z_Registration_Info_UClass_AWaveProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveProjectile.OuterSingleton, Z_Construct_UClass_AWaveProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaveProjectile.OuterSingleton;
}
template<> WAVESURVIVAL_API UClass* StaticClass<AWaveProjectile>()
{
	return AWaveProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveProjectile);
AWaveProjectile::~AWaveProjectile() {}
// End Class AWaveProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaveProjectile, AWaveProjectile::StaticClass, TEXT("AWaveProjectile"), &Z_Registration_Info_UClass_AWaveProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveProjectile), 960581561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_h_804586338(TEXT("/Script/WaveSurvival"),
	Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jrago_Documents_GitHub_WaveSurvival_WaveSurvival_Source_WaveSurvival_Projectiles_WaveProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
