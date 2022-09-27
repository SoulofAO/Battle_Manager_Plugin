// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_Helper_plugin/Public/CheckBattleStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckBattleStep() {}
// Cross Module References
	AI_HELPER_PLUGIN_API UEnum* Z_Construct_UEnum_AI_Helper_plugin_Bool_Operation_Apply();
	UPackage* Z_Construct_UPackage__Script_AI_Helper_plugin();
	AI_HELPER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStructCheckBattleStep();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UCheckBattleStep_NoRegister();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UCheckBattleStep();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* Bool_Operation_Apply_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AI_Helper_plugin_Bool_Operation_Apply, Z_Construct_UPackage__Script_AI_Helper_plugin(), TEXT("Bool_Operation_Apply"));
		}
		return Singleton;
	}
	template<> AI_HELPER_PLUGIN_API UEnum* StaticEnum<Bool_Operation_Apply>()
	{
		return Bool_Operation_Apply_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Bool_Operation_Apply(Bool_Operation_Apply_StaticEnum, TEXT("/Script/AI_Helper_plugin"), TEXT("Bool_Operation_Apply"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AI_Helper_plugin_Bool_Operation_Apply_Hash() { return 2532641497U; }
	UEnum* Z_Construct_UEnum_AI_Helper_plugin_Bool_Operation_Apply()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AI_Helper_plugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Bool_Operation_Apply"), 0, Get_Z_Construct_UEnum_AI_Helper_plugin_Bool_Operation_Apply_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Bool_Operation_Apply::OR", (int64)Bool_Operation_Apply::OR },
				{ "Bool_Operation_Apply::AND", (int64)Bool_Operation_Apply::AND },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AND.DisplayName", "AND" },
				{ "AND.Name", "Bool_Operation_Apply::AND" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/CheckBattleStep.h" },
				{ "OR.DisplayName", "OR" },
				{ "OR.Name", "Bool_Operation_Apply::OR" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
				nullptr,
				"Bool_Operation_Apply",
				"Bool_Operation_Apply",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStructCheckBattleStep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AI_HELPER_PLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStructCheckBattleStep_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructCheckBattleStep, Z_Construct_UPackage__Script_AI_Helper_plugin(), TEXT("StructCheckBattleStep"), sizeof(FStructCheckBattleStep), Get_Z_Construct_UScriptStruct_FStructCheckBattleStep_Hash());
	}
	return Singleton;
}
template<> AI_HELPER_PLUGIN_API UScriptStruct* StaticStruct<FStructCheckBattleStep>()
{
	return FStructCheckBattleStep::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructCheckBattleStep(FStructCheckBattleStep::StaticStruct, TEXT("/Script/AI_Helper_plugin"), TEXT("StructCheckBattleStep"), false, nullptr, nullptr);
static struct FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFStructCheckBattleStep
{
	FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFStructCheckBattleStep()
	{
		UScriptStruct::DeferCppStructOps<FStructCheckBattleStep>(FName(TEXT("StructCheckBattleStep")));
	}
} ScriptStruct_AI_Helper_plugin_StaticRegisterNativesFStructCheckBattleStep;
	struct Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckBattleStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckBattleStep;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bool_Operation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bool_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bool_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CheckBattleStep.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructCheckBattleStep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_CheckBattleStep_MetaData[] = {
		{ "Category", "StructCheckBattleStep" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CheckBattleStep.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_CheckBattleStep = { "CheckBattleStep", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructCheckBattleStep, CheckBattleStep), Z_Construct_UClass_UCheckBattleStep_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_CheckBattleStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_CheckBattleStep_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_Bool_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_Bool_Operation_MetaData[] = {
		{ "Category", "StructCheckBattleStep" },
		{ "ModuleRelativePath", "Public/CheckBattleStep.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_Bool_Operation = { "Bool_Operation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructCheckBattleStep, Bool_Operation), Z_Construct_UEnum_AI_Helper_plugin_Bool_Operation_Apply, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_Bool_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_Bool_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_CheckBattleStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_Bool_Operation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::NewProp_Bool_Operation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
		nullptr,
		&NewStructOps,
		"StructCheckBattleStep",
		sizeof(FStructCheckBattleStep),
		alignof(FStructCheckBattleStep),
		Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructCheckBattleStep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructCheckBattleStep_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AI_Helper_plugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructCheckBattleStep"), sizeof(FStructCheckBattleStep), Get_Z_Construct_UScriptStruct_FStructCheckBattleStep_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructCheckBattleStep_Hash() { return 171914129U; }
	static FName NAME_UCheckBattleStep_Check = FName(TEXT("Check"));
	bool UCheckBattleStep::Check(AActor* Caller)
	{
		CheckBattleStep_eventCheck_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_UCheckBattleStep_Check),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCheckBattleStep_End_Recive = FName(TEXT("End_Recive"));
	void UCheckBattleStep::End_Recive(AActor* BattleManager)
	{
		CheckBattleStep_eventEnd_Recive_Parms Parms;
		Parms.BattleManager=BattleManager;
		ProcessEvent(FindFunctionChecked(NAME_UCheckBattleStep_End_Recive),&Parms);
	}
	static FName NAME_UCheckBattleStep_Start_Recive = FName(TEXT("Start_Recive"));
	void UCheckBattleStep::Start_Recive(AActor* BattleManager)
	{
		CheckBattleStep_eventStart_Recive_Parms Parms;
		Parms.BattleManager=BattleManager;
		ProcessEvent(FindFunctionChecked(NAME_UCheckBattleStep_Start_Recive),&Parms);
	}
	void UCheckBattleStep::StaticRegisterNativesUCheckBattleStep()
	{
	}
	struct Z_Construct_UFunction_UCheckBattleStep_Check_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckBattleStep_Check_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckBattleStep_eventCheck_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCheckBattleStep_Check_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CheckBattleStep_eventCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckBattleStep_Check_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckBattleStep_eventCheck_Parms), &Z_Construct_UFunction_UCheckBattleStep_Check_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBattleStep_Check_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBattleStep_Check_Statics::NewProp_Caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBattleStep_Check_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBattleStep_Check_Statics::Function_MetaDataParams[] = {
		{ "Category", "Check_Battle_Step" },
		{ "ModuleRelativePath", "Public/CheckBattleStep.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBattleStep_Check_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBattleStep, nullptr, "Check", nullptr, nullptr, sizeof(CheckBattleStep_eventCheck_Parms), Z_Construct_UFunction_UCheckBattleStep_Check_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBattleStep_Check_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBattleStep_Check_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBattleStep_Check_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBattleStep_Check()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckBattleStep_Check_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BattleManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::NewProp_BattleManager = { "BattleManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckBattleStep_eventEnd_Recive_Parms, BattleManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::NewProp_BattleManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Check_Battle_Step" },
		{ "ModuleRelativePath", "Public/CheckBattleStep.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBattleStep, nullptr, "End_Recive", nullptr, nullptr, sizeof(CheckBattleStep_eventEnd_Recive_Parms), Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBattleStep_End_Recive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckBattleStep_End_Recive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BattleManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::NewProp_BattleManager = { "BattleManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckBattleStep_eventStart_Recive_Parms, BattleManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::NewProp_BattleManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Check_Battle_Step" },
		{ "ModuleRelativePath", "Public/CheckBattleStep.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBattleStep, nullptr, "Start_Recive", nullptr, nullptr, sizeof(CheckBattleStep_eventStart_Recive_Parms), Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBattleStep_Start_Recive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckBattleStep_Start_Recive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckBattleStep_NoRegister()
	{
		return UCheckBattleStep::StaticClass();
	}
	struct Z_Construct_UClass_UCheckBattleStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckBattleStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckBattleStep_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckBattleStep_Check, "Check" }, // 4110564660
		{ &Z_Construct_UFunction_UCheckBattleStep_End_Recive, "End_Recive" }, // 1495966955
		{ &Z_Construct_UFunction_UCheckBattleStep_Start_Recive, "Start_Recive" }, // 2728041217
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBattleStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CheckBattleStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CheckBattleStep.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckBattleStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckBattleStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckBattleStep_Statics::ClassParams = {
		&UCheckBattleStep::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCheckBattleStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBattleStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckBattleStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckBattleStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckBattleStep, 4160891031);
	template<> AI_HELPER_PLUGIN_API UClass* StaticClass<UCheckBattleStep>()
	{
		return UCheckBattleStep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckBattleStep(Z_Construct_UClass_UCheckBattleStep, &UCheckBattleStep::StaticClass, TEXT("/Script/AI_Helper_plugin"), TEXT("UCheckBattleStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBattleStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
