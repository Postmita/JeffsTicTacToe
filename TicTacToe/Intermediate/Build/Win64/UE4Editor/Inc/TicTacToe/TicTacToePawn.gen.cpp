// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TicTacToe/TicTacToePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTicTacToePawn() {}
// Cross Module References
	TICTACTOE_API UClass* Z_Construct_UClass_ATicTacToePawn_NoRegister();
	TICTACTOE_API UClass* Z_Construct_UClass_ATicTacToePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TicTacToe();
	TICTACTOE_API UClass* Z_Construct_UClass_ATicTacToeBlock_NoRegister();
// End Cross Module References
	void ATicTacToePawn::StaticRegisterNativesATicTacToePawn()
	{
	}
	UClass* Z_Construct_UClass_ATicTacToePawn_NoRegister()
	{
		return ATicTacToePawn::StaticClass();
	}
	struct Z_Construct_UClass_ATicTacToePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATicTacToePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TicTacToe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATicTacToePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TicTacToePawn.h" },
		{ "ModuleRelativePath", "TicTacToePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATicTacToePawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "TicTacToePawn" },
		{ "ModuleRelativePath", "TicTacToePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATicTacToePawn_Statics::NewProp_CurrentBlockFocus = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentBlockFocus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000805, 1, nullptr, STRUCT_OFFSET(ATicTacToePawn, CurrentBlockFocus), Z_Construct_UClass_ATicTacToeBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATicTacToePawn_Statics::NewProp_CurrentBlockFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATicTacToePawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATicTacToePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATicTacToePawn_Statics::NewProp_CurrentBlockFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATicTacToePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATicTacToePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATicTacToePawn_Statics::ClassParams = {
		&ATicTacToePawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		Z_Construct_UClass_ATicTacToePawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATicTacToePawn_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATicTacToePawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATicTacToePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATicTacToePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATicTacToePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATicTacToePawn, 179921515);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATicTacToePawn(Z_Construct_UClass_ATicTacToePawn, &ATicTacToePawn::StaticClass, TEXT("/Script/TicTacToe"), TEXT("ATicTacToePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATicTacToePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
