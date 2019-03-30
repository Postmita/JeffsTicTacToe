// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TICTACTOE_TicTacToePawn_generated_h
#error "TicTacToePawn.generated.h already included, missing '#pragma once' in TicTacToePawn.h"
#endif
#define TICTACTOE_TicTacToePawn_generated_h

#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_RPC_WRAPPERS
#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATicTacToePawn(); \
	friend struct Z_Construct_UClass_ATicTacToePawn_Statics; \
public: \
	DECLARE_CLASS(ATicTacToePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TicTacToe"), NO_API) \
	DECLARE_SERIALIZER(ATicTacToePawn)


#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATicTacToePawn(); \
	friend struct Z_Construct_UClass_ATicTacToePawn_Statics; \
public: \
	DECLARE_CLASS(ATicTacToePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TicTacToe"), NO_API) \
	DECLARE_SERIALIZER(ATicTacToePawn)


#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATicTacToePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATicTacToePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATicTacToePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATicTacToePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATicTacToePawn(ATicTacToePawn&&); \
	NO_API ATicTacToePawn(const ATicTacToePawn&); \
public:


#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATicTacToePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATicTacToePawn(ATicTacToePawn&&); \
	NO_API ATicTacToePawn(const ATicTacToePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATicTacToePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATicTacToePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATicTacToePawn)


#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(ATicTacToePawn, CurrentBlockFocus); }


#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_9_PROLOG
#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_RPC_WRAPPERS \
	TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_INCLASS \
	TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_INCLASS_NO_PURE_DECLS \
	TicTacToe_Source_TicTacToe_TicTacToePawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TicTacToePawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TicTacToe_Source_TicTacToe_TicTacToePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
