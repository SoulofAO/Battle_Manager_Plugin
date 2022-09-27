// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef AI_HELPER_PLUGIN_CheckBattleStep_generated_h
#error "CheckBattleStep.generated.h already included, missing '#pragma once' in CheckBattleStep.h"
#endif
#define AI_HELPER_PLUGIN_CheckBattleStep_generated_h

#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructCheckBattleStep_Statics; \
	AI_HELPER_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> AI_HELPER_PLUGIN_API UScriptStruct* StaticStruct<struct FStructCheckBattleStep>();

#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_SPARSE_DATA
#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_RPC_WRAPPERS
#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_EVENT_PARMS \
	struct CheckBattleStep_eventCheck_Parms \
	{ \
		AActor* Caller; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CheckBattleStep_eventCheck_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct CheckBattleStep_eventEnd_Recive_Parms \
	{ \
		AActor* BattleManager; \
	}; \
	struct CheckBattleStep_eventStart_Recive_Parms \
	{ \
		AActor* BattleManager; \
	};


#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_CALLBACK_WRAPPERS
#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckBattleStep(); \
	friend struct Z_Construct_UClass_UCheckBattleStep_Statics; \
public: \
	DECLARE_CLASS(UCheckBattleStep, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AI_Helper_plugin"), NO_API) \
	DECLARE_SERIALIZER(UCheckBattleStep)


#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUCheckBattleStep(); \
	friend struct Z_Construct_UClass_UCheckBattleStep_Statics; \
public: \
	DECLARE_CLASS(UCheckBattleStep, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AI_Helper_plugin"), NO_API) \
	DECLARE_SERIALIZER(UCheckBattleStep)


#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBattleStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBattleStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBattleStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBattleStep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckBattleStep(UCheckBattleStep&&); \
	NO_API UCheckBattleStep(const UCheckBattleStep&); \
public:


#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBattleStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckBattleStep(UCheckBattleStep&&); \
	NO_API UCheckBattleStep(const UCheckBattleStep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBattleStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBattleStep); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBattleStep)


#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_PRIVATE_PROPERTY_OFFSET
#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_31_PROLOG \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_EVENT_PARMS


#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_PRIVATE_PROPERTY_OFFSET \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_SPARSE_DATA \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_RPC_WRAPPERS \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_CALLBACK_WRAPPERS \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_INCLASS \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_PRIVATE_PROPERTY_OFFSET \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_SPARSE_DATA \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_CALLBACK_WRAPPERS \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_INCLASS_NO_PURE_DECLS \
	Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AI_HELPER_PLUGIN_API UClass* StaticClass<class UCheckBattleStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stole_DaVInchy_Plugins_AI_Helper_plugin_Source_AI_Helper_plugin_Public_CheckBattleStep_h


#define FOREACH_ENUM_BOOL_OPERATION_APPLY(op) \
	op(Bool_Operation_Apply::OR) \
	op(Bool_Operation_Apply::AND) 

enum class Bool_Operation_Apply : uint8;
template<> AI_HELPER_PLUGIN_API UEnum* StaticEnum<Bool_Operation_Apply>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
