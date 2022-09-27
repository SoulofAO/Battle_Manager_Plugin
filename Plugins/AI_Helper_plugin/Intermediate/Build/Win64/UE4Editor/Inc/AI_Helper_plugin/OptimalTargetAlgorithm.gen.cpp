// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_Helper_plugin/Public/OptimalTargetAlgorithm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimalTargetAlgorithm() {}
// Cross Module References
	AI_HELPER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct();
	UPackage* Z_Construct_UPackage__Script_AI_Helper_plugin();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UOptimalTargetAlgorithm_NoRegister();
	AI_HELPER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UOptimalTargetAlgorithm();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FOptimalTargetAlgorithmStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AI_HELPER_PLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct, Z_Construct_UPackage__Script_AI_Helper_plugin(), TEXT("OptimalTargetAlgorithmStruct"), sizeof(FOptimalTargetAlgorithmStruct), Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Hash());
	}
	return Singleton;
}
template<> AI_HELPER_PLUGIN_API UScriptStruct* StaticStruct<FOptimalTargetAlgorithmStruct>()
{
	return FOptimalTargetAlgorithmStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOptimalTargetAlgorithmStruct(FOptimalTargetAlgorithmStruct::StaticStruct, TEXT("/Script/AI_Helper_plugin"), TEXT("OptimalTargetAlgorithmStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFOptimalTargetAlgorithmStruct
{
	FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFOptimalTargetAlgorithmStruct()
	{
		UScriptStruct::DeferCppStructOps<FOptimalTargetAlgorithmStruct>(FName(TEXT("OptimalTargetAlgorithmStruct")));
	}
} ScriptStruct_AI_Helper_plugin_StaticRegisterNativesFOptimalTargetAlgorithmStruct;
	struct Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimalTargetAlgorithm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptimalTargetAlgorithm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OptimalTargetAlgorithm.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimalTargetAlgorithmStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::NewProp_OptimalTargetAlgorithm_MetaData[] = {
		{ "Category", "OptimalTargetAlgorithmStruct" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OptimalTargetAlgorithm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::NewProp_OptimalTargetAlgorithm = { "OptimalTargetAlgorithm", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOptimalTargetAlgorithmStruct, OptimalTargetAlgorithm), Z_Construct_UClass_UOptimalTargetAlgorithm_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::NewProp_OptimalTargetAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::NewProp_OptimalTargetAlgorithm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::NewProp_OptimalTargetAlgorithm,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
		nullptr,
		&NewStructOps,
		"OptimalTargetAlgorithmStruct",
		sizeof(FOptimalTargetAlgorithmStruct),
		alignof(FOptimalTargetAlgorithmStruct),
		Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AI_Helper_plugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OptimalTargetAlgorithmStruct"), sizeof(FOptimalTargetAlgorithmStruct), Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmStruct_Hash() { return 2581959057U; }
class UScriptStruct* FOptimalTargetAlgorithmReturn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AI_HELPER_PLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn, Z_Construct_UPackage__Script_AI_Helper_plugin(), TEXT("OptimalTargetAlgorithmReturn"), sizeof(FOptimalTargetAlgorithmReturn), Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Hash());
	}
	return Singleton;
}
template<> AI_HELPER_PLUGIN_API UScriptStruct* StaticStruct<FOptimalTargetAlgorithmReturn>()
{
	return FOptimalTargetAlgorithmReturn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOptimalTargetAlgorithmReturn(FOptimalTargetAlgorithmReturn::StaticStruct, TEXT("/Script/AI_Helper_plugin"), TEXT("OptimalTargetAlgorithmReturn"), false, nullptr, nullptr);
static struct FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFOptimalTargetAlgorithmReturn
{
	FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFOptimalTargetAlgorithmReturn()
	{
		UScriptStruct::DeferCppStructOps<FOptimalTargetAlgorithmReturn>(FName(TEXT("OptimalTargetAlgorithmReturn")));
	}
} ScriptStruct_AI_Helper_plugin_StaticRegisterNativesFOptimalTargetAlgorithmReturn;
	struct Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemenys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemenys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemenys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/OptimalTargetAlgorithm.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimalTargetAlgorithmReturn>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_Enemenys_Inner = { "Enemenys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_Enemenys_MetaData[] = {
		{ "Category", "OptimalTargetAlgorithmReturn" },
		{ "ModuleRelativePath", "Public/OptimalTargetAlgorithm.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_Enemenys = { "Enemenys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOptimalTargetAlgorithmReturn, Enemenys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_Enemenys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_Enemenys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_CallerActor_MetaData[] = {
		{ "Category", "OptimalTargetAlgorithmReturn" },
		{ "ModuleRelativePath", "Public/OptimalTargetAlgorithm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_CallerActor = { "CallerActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOptimalTargetAlgorithmReturn, CallerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_CallerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_CallerActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_Enemenys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_Enemenys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::NewProp_CallerActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
		nullptr,
		&NewStructOps,
		"OptimalTargetAlgorithmReturn",
		sizeof(FOptimalTargetAlgorithmReturn),
		alignof(FOptimalTargetAlgorithmReturn),
		Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AI_Helper_plugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OptimalTargetAlgorithmReturn"), sizeof(FOptimalTargetAlgorithmReturn), Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn_Hash() { return 1373166252U; }
	static FName NAME_UOptimalTargetAlgorithm_BattleStart = FName(TEXT("BattleStart"));
	void UOptimalTargetAlgorithm::BattleStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOptimalTargetAlgorithm_BattleStart),NULL);
	}
	static FName NAME_UOptimalTargetAlgorithm_Clear = FName(TEXT("Clear"));
	void UOptimalTargetAlgorithm::Clear()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOptimalTargetAlgorithm_Clear),NULL);
	}
	static FName NAME_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors = FName(TEXT("GetOptimalTargetAlgorithmActors"));
	TArray<AActor*> UOptimalTargetAlgorithm::GetOptimalTargetAlgorithmActors(FOptimalTargetAlgorithmReturn Enemenys)
	{
		OptimalTargetAlgorithm_eventGetOptimalTargetAlgorithmActors_Parms Parms;
		Parms.Enemenys=Enemenys;
		ProcessEvent(FindFunctionChecked(NAME_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors),&Parms);
		return Parms.ReturnValue;
	}
	void UOptimalTargetAlgorithm::StaticRegisterNativesUOptimalTargetAlgorithm()
	{
	}
	struct Z_Construct_UFunction_UOptimalTargetAlgorithm_BattleStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimalTargetAlgorithm_BattleStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/OptimalTargetAlgorithm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimalTargetAlgorithm_BattleStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimalTargetAlgorithm, nullptr, "BattleStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimalTargetAlgorithm_BattleStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimalTargetAlgorithm_BattleStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimalTargetAlgorithm_BattleStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOptimalTargetAlgorithm_BattleStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimalTargetAlgorithm_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimalTargetAlgorithm_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/OptimalTargetAlgorithm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimalTargetAlgorithm_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimalTargetAlgorithm, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimalTargetAlgorithm_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimalTargetAlgorithm_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimalTargetAlgorithm_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOptimalTargetAlgorithm_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Enemenys;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::NewProp_Enemenys = { "Enemenys", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OptimalTargetAlgorithm_eventGetOptimalTargetAlgorithmActors_Parms, Enemenys), Z_Construct_UScriptStruct_FOptimalTargetAlgorithmReturn, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OptimalTargetAlgorithm_eventGetOptimalTargetAlgorithmActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::NewProp_Enemenys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/OptimalTargetAlgorithm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimalTargetAlgorithm, nullptr, "GetOptimalTargetAlgorithmActors", nullptr, nullptr, sizeof(OptimalTargetAlgorithm_eventGetOptimalTargetAlgorithmActors_Parms), Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOptimalTargetAlgorithm_NoRegister()
	{
		return UOptimalTargetAlgorithm::StaticClass();
	}
	struct Z_Construct_UClass_UOptimalTargetAlgorithm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimalTargetAlgorithm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptimalTargetAlgorithm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimalTargetAlgorithm_BattleStart, "BattleStart" }, // 382904013
		{ &Z_Construct_UFunction_UOptimalTargetAlgorithm_Clear, "Clear" }, // 3920084859
		{ &Z_Construct_UFunction_UOptimalTargetAlgorithm_GetOptimalTargetAlgorithmActors, "GetOptimalTargetAlgorithmActors" }, // 2415359087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimalTargetAlgorithm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimalTargetAlgorithm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OptimalTargetAlgorithm.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimalTargetAlgorithm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimalTargetAlgorithm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOptimalTargetAlgorithm_Statics::ClassParams = {
		&UOptimalTargetAlgorithm::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimalTargetAlgorithm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimalTargetAlgorithm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimalTargetAlgorithm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOptimalTargetAlgorithm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOptimalTargetAlgorithm, 2564793529);
	template<> AI_HELPER_PLUGIN_API UClass* StaticClass<UOptimalTargetAlgorithm>()
	{
		return UOptimalTargetAlgorithm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOptimalTargetAlgorithm(Z_Construct_UClass_UOptimalTargetAlgorithm, &UOptimalTargetAlgorithm::StaticClass, TEXT("/Script/AI_Helper_plugin"), TEXT("UOptimalTargetAlgorithm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimalTargetAlgorithm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
