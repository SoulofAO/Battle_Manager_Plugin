// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_Helper_plugin/Public/Inline_Value.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInline_Value() {}
// Cross Module References
	AI_HELPER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInline_Value_Struct();
	UPackage* Z_Construct_UPackage__Script_AI_Helper_plugin();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UInline_Value_NoRegister();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UInline_Value();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FInline_Value_Struct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AI_HELPER_PLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FInline_Value_Struct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInline_Value_Struct, Z_Construct_UPackage__Script_AI_Helper_plugin(), TEXT("Inline_Value_Struct"), sizeof(FInline_Value_Struct), Get_Z_Construct_UScriptStruct_FInline_Value_Struct_Hash());
	}
	return Singleton;
}
template<> AI_HELPER_PLUGIN_API UScriptStruct* StaticStruct<FInline_Value_Struct>()
{
	return FInline_Value_Struct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInline_Value_Struct(FInline_Value_Struct::StaticStruct, TEXT("/Script/AI_Helper_plugin"), TEXT("Inline_Value_Struct"), false, nullptr, nullptr);
static struct FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFInline_Value_Struct
{
	FScriptStruct_AI_Helper_plugin_StaticRegisterNativesFInline_Value_Struct()
	{
		UScriptStruct::DeferCppStructOps<FInline_Value_Struct>(FName(TEXT("Inline_Value_Struct")));
	}
} ScriptStruct_AI_Helper_plugin_StaticRegisterNativesFInline_Value_Struct;
	struct Z_Construct_UScriptStruct_FInline_Value_Struct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InlineValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InlineValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inline_Value.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInline_Value_Struct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::NewProp_InlineValue_MetaData[] = {
		{ "Category", "Inline_Value_Struct" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inline_Value.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::NewProp_InlineValue = { "InlineValue", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInline_Value_Struct, InlineValue), Z_Construct_UClass_UInline_Value_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::NewProp_InlineValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::NewProp_InlineValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::NewProp_InlineValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
		nullptr,
		&NewStructOps,
		"Inline_Value_Struct",
		sizeof(FInline_Value_Struct),
		alignof(FInline_Value_Struct),
		Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInline_Value_Struct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInline_Value_Struct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AI_Helper_plugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Inline_Value_Struct"), sizeof(FInline_Value_Struct), Get_Z_Construct_UScriptStruct_FInline_Value_Struct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInline_Value_Struct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInline_Value_Struct_Hash() { return 2384710103U; }
	void UInline_Value::StaticRegisterNativesUInline_Value()
	{
	}
	UClass* Z_Construct_UClass_UInline_Value_NoRegister()
	{
		return UInline_Value::StaticClass();
	}
	struct Z_Construct_UClass_UInline_Value_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInline_Value_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInline_Value_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Inline_Value.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inline_Value.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInline_Value_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInline_Value>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInline_Value_Statics::ClassParams = {
		&UInline_Value::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInline_Value_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInline_Value_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInline_Value()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInline_Value_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInline_Value, 2891877124);
	template<> AI_HELPER_PLUGIN_API UClass* StaticClass<UInline_Value>()
	{
		return UInline_Value::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInline_Value(Z_Construct_UClass_UInline_Value, &UInline_Value::StaticClass, TEXT("/Script/AI_Helper_plugin"), TEXT("UInline_Value"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInline_Value);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
