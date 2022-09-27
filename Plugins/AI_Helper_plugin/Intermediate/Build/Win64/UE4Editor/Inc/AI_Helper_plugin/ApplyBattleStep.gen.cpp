// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_Helper_plugin/Public/ApplyBattleStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplyBattleStep() {}
// Cross Module References
	AI_HELPER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStructBattleStep();
	UPackage* Z_Construct_UPackage__Script_AI_Helper_plugin();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UApplyBattleStep_NoRegister();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UApplyBattleStep();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FStructBattleStep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AI_HELPER_PLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStructBattleStep_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructBattleStep, Z_Construct_UPackage__Script_AI_Helper_plugin(), TEXT("StructBattleStep"), sizeof(FStructBattleStep), Get_Z_Construct_UScriptStruct_FStructBattleStep_Hash());
	}
	return Singleton;
}
template<> AI_HELPER_PLUGIN_API UScriptStruct* StaticStruct<FStructBattleStep>()
{
	return FStructBattleStep::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructBattleStep(FStructBattleStep::StaticStruct, TEXT("/Script/AI_Helper_plugin"), TEXT("StructBattleStep"), false, nullptr, nullptr);
static struct FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFStructBattleStep
{
	FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFStructBattleStep()
	{
		UScriptStruct::DeferCppStructOps<FStructBattleStep>(FName(TEXT("StructBattleStep")));
	}
} ScriptStruct_AI_Helper_plugin_StaticRegisterNativesFStructBattleStep;
	struct Z_Construct_UScriptStruct_FStructBattleStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyBattleStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApplyBattleStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructBattleStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ApplyBattleStep.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructBattleStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructBattleStep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructBattleStep_Statics::NewProp_ApplyBattleStep_MetaData[] = {
		{ "Category", "StructBattleStep" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ApplyBattleStep.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStructBattleStep_Statics::NewProp_ApplyBattleStep = { "ApplyBattleStep", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructBattleStep, ApplyBattleStep), Z_Construct_UClass_UApplyBattleStep_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructBattleStep_Statics::NewProp_ApplyBattleStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructBattleStep_Statics::NewProp_ApplyBattleStep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructBattleStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructBattleStep_Statics::NewProp_ApplyBattleStep,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructBattleStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
		nullptr,
		&NewStructOps,
		"StructBattleStep",
		sizeof(FStructBattleStep),
		alignof(FStructBattleStep),
		Z_Construct_UScriptStruct_FStructBattleStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructBattleStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructBattleStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructBattleStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructBattleStep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructBattleStep_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AI_Helper_plugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructBattleStep"), sizeof(FStructBattleStep), Get_Z_Construct_UScriptStruct_FStructBattleStep_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructBattleStep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructBattleStep_Hash() { return 2303929185U; }
	static FName NAME_UApplyBattleStep_ApplyStep = FName(TEXT("ApplyStep"));
	void UApplyBattleStep::ApplyStep(AActor* Battle_Manager)
	{
		ApplyBattleStep_eventApplyStep_Parms Parms;
		Parms.Battle_Manager=Battle_Manager;
		ProcessEvent(FindFunctionChecked(NAME_UApplyBattleStep_ApplyStep),&Parms);
	}
	void UApplyBattleStep::StaticRegisterNativesUApplyBattleStep()
	{
	}
	struct Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Battle_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::NewProp_Battle_Manager = { "Battle_Manager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApplyBattleStep_eventApplyStep_Parms, Battle_Manager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::NewProp_Battle_Manager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Check_Battle_Step" },
		{ "ModuleRelativePath", "Public/ApplyBattleStep.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplyBattleStep, nullptr, "ApplyStep", nullptr, nullptr, sizeof(ApplyBattleStep_eventApplyStep_Parms), Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApplyBattleStep_ApplyStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApplyBattleStep_ApplyStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UApplyBattleStep_NoRegister()
	{
		return UApplyBattleStep::StaticClass();
	}
	struct Z_Construct_UClass_UApplyBattleStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApplyBattleStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApplyBattleStep_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApplyBattleStep_ApplyStep, "ApplyStep" }, // 3430586187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplyBattleStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ApplyBattleStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ApplyBattleStep.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApplyBattleStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplyBattleStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApplyBattleStep_Statics::ClassParams = {
		&UApplyBattleStep::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UApplyBattleStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApplyBattleStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApplyBattleStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApplyBattleStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApplyBattleStep, 3578720310);
	template<> AI_HELPER_PLUGIN_API UClass* StaticClass<UApplyBattleStep>()
	{
		return UApplyBattleStep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApplyBattleStep(Z_Construct_UClass_UApplyBattleStep, &UApplyBattleStep::StaticClass, TEXT("/Script/AI_Helper_plugin"), TEXT("UApplyBattleStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplyBattleStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
