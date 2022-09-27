// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_Helper_plugin/Public/Test_Distanse_Without_Normalaize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_Distanse_Without_Normalaize() {}
// Cross Module References
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UTest_Distanse_Without_Normalaize_NoRegister();
	AI_HELPER_PLUGIN_API UClass* Z_Construct_UClass_UTest_Distanse_Without_Normalaize();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AI_Helper_plugin();
// End Cross Module References
	void UTest_Distanse_Without_Normalaize::StaticRegisterNativesUTest_Distanse_Without_Normalaize()
	{
	}
	UClass* Z_Construct_UClass_UTest_Distanse_Without_Normalaize_NoRegister()
	{
		return UTest_Distanse_Without_Normalaize::StaticClass();
	}
	struct Z_Construct_UClass_UTest_Distanse_Without_Normalaize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTest_Distanse_Without_Normalaize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AI_Helper_plugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest_Distanse_Without_Normalaize_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Test_Distanse_Without_Normalaize.h" },
		{ "ModuleRelativePath", "Public/Test_Distanse_Without_Normalaize.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTest_Distanse_Without_Normalaize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTest_Distanse_Without_Normalaize>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTest_Distanse_Without_Normalaize_Statics::ClassParams = {
		&UTest_Distanse_Without_Normalaize::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTest_Distanse_Without_Normalaize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTest_Distanse_Without_Normalaize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTest_Distanse_Without_Normalaize()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTest_Distanse_Without_Normalaize_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest_Distanse_Without_Normalaize, 2693649414);
	template<> AI_HELPER_PLUGIN_API UClass* StaticClass<UTest_Distanse_Without_Normalaize>()
	{
		return UTest_Distanse_Without_Normalaize::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest_Distanse_Without_Normalaize(Z_Construct_UClass_UTest_Distanse_Without_Normalaize, &UTest_Distanse_Without_Normalaize::StaticClass, TEXT("/Script/AI_Helper_plugin"), TEXT("UTest_Distanse_Without_Normalaize"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest_Distanse_Without_Normalaize);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
