// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef TICTACTOE_TicTacToeBlock_generated_h
#error "TicTacToeBlock.generated.h already included, missing '#pragma once' in TicTacToeBlock.h"
#endif
#define TICTACTOE_TicTacToeBlock_generated_h

#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATicTacToeBlock(); \
	friend struct Z_Construct_UClass_ATicTacToeBlock_Statics; \
public: \
	DECLARE_CLASS(ATicTacToeBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TicTacToe"), TICTACTOE_API) \
	DECLARE_SERIALIZER(ATicTacToeBlock)


#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATicTacToeBlock(); \
	friend struct Z_Construct_UClass_ATicTacToeBlock_Statics; \
public: \
	DECLARE_CLASS(ATicTacToeBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TicTacToe"), TICTACTOE_API) \
	DECLARE_SERIALIZER(ATicTacToeBlock)


#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TICTACTOE_API ATicTacToeBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATicTacToeBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TICTACTOE_API, ATicTacToeBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATicTacToeBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TICTACTOE_API ATicTacToeBlock(ATicTacToeBlock&&); \
	TICTACTOE_API ATicTacToeBlock(const ATicTacToeBlock&); \
public:


#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TICTACTOE_API ATicTacToeBlock(ATicTacToeBlock&&); \
	TICTACTOE_API ATicTacToeBlock(const ATicTacToeBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TICTACTOE_API, ATicTacToeBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATicTacToeBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATicTacToeBlock)


#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(ATicTacToeBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(ATicTacToeBlock, BlockMesh); }


#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_10_PROLOG
#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_RPC_WRAPPERS \
	TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_INCLASS \
	TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_INCLASS_NO_PURE_DECLS \
	TicTacToe_Source_TicTacToe_TicTacToeBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TicTacToe_Source_TicTacToe_TicTacToeBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
