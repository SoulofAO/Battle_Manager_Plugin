// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_Helper_plugin/Public/AI_Helper_pluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Helper_pluginBPLibrary() {}
// Cross Module References
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UAI_Helper_pluginBPLibrary_NoRegister();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UAI_Helper_pluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AI_Helper_plugin();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UAI_Helper_pluginBPLibrary::execAI_Helper_GetActorOrLocaltion)
	{
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->AI_Helper_GetActorOrLocaltion(Z_Param_NodeOwner,Z_Param_Out_Key);
		P_NATIVE_END;
	}
	void UAI_Helper_pluginBPLibrary::StaticRegisterNativesUAI_Helper_pluginBPLibrary()
	{
		UClass* Class = UAI_Helper_pluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AI_Helper_GetActorOrLocaltion", &UAI_Helper_pluginBPLibrary::execAI_Helper_GetActorOrLocaltion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics
	{
		struct AI_Helper_pluginBPLibrary_eventAI_Helper_GetActorOrLocaltion_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Helper_pluginBPLibrary_eventAI_Helper_GetActorOrLocaltion_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Helper_pluginBPLibrary_eventAI_Helper_GetActorOrLocaltion_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Helper_pluginBPLibrary_eventAI_Helper_GetActorOrLocaltion_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::NewProp_NodeOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI_Helper_pluginTesting" },
		{ "DisplayName", "GetBlackbordKeyVector" },
		{ "Keywords", "GetBlackbordKeyVector" },
		{ "ModuleRelativePath", "Public/AI_Helper_pluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAI_Helper_pluginBPLibrary, nullptr, "AI_Helper_GetActorOrLocaltion", nullptr, nullptr, sizeof(AI_Helper_pluginBPLibrary_eventAI_Helper_GetActorOrLocaltion_Parms), Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAI_Helper_pluginBPLibrary_NoRegister()
	{
		return UAI_Helper_pluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAI_Helper_pluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAI_Helper_pluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAI_Helper_pluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAI_Helper_pluginBPLibrary_AI_Helper_GetActorOrLocaltion, "AI_Helper_GetActorOrLocaltion" }, // 1584246342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAI_Helper_pluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI_Helper_pluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AI_Helper_pluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAI_Helper_pluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAI_Helper_pluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAI_Helper_pluginBPLibrary_Statics::ClassParams = {
		&UAI_Helper_pluginBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAI_Helper_pluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAI_Helper_pluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAI_Helper_pluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAI_Helper_pluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAI_Helper_pluginBPLibrary, 897031629);
	template<> AI_HELPER_PLUGIN_API UClass* StaticClass<UAI_Helper_pluginBPLibrary>()
	{
		return UAI_Helper_pluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAI_Helper_pluginBPLibrary(Z_Construct_UClass_UAI_Helper_pluginBPLibrary, &UAI_Helper_pluginBPLibrary::StaticClass, TEXT("/Script/AI_Helper_plugin"), TEXT("UAI_Helper_pluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAI_Helper_pluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
