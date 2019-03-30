// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TicTacToe/TicTacToeBlockGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTicTacToeBlockGrid() {}
// Cross Module References
	TICTACTOE_API UClass* Z_Construct_UClass_ATicTacToeBlockGrid_NoRegister();
	TICTACTOE_API UClass* Z_Construct_UClass_ATicTacToeBlockGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TicTacToe();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ATicTacToeBlockGrid::StaticRegisterNativesATicTacToeBlockGrid()
	{
	}
	UClass* Z_Construct_UClass_ATicTacToeBlockGrid_NoRegister()
	{
		return ATicTacToeBlockGrid::StaticClass();
	}
	struct Z_Construct_UClass_ATicTacToeBlockGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATicTacToeBlockGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TicTacToe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATicTacToeBlockGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TicTacToeBlockGrid.h" },
		{ "ModuleRelativePath", "TicTacToeBlockGrid.h" },
		{ "ToolTip", "Class used to spawn blocks and manage score" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_BlockSpacing_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TicTacToeBlockGrid.h" },
		{ "ToolTip", "Spacing of blocks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_BlockSpacing = { UE4CodeGen_Private::EPropertyClass::Float, "BlockSpacing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ATicTacToeBlockGrid, BlockSpacing), METADATA_PARAMS(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_BlockSpacing_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_BlockSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "TicTacToeBlockGrid.h" },
		{ "ToolTip", "Number of blocks along each side of grid" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Int, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ATicTacToeBlockGrid, Size), METADATA_PARAMS(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_ScoreText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TicTacToeBlockGrid.h" },
		{ "ToolTip", "Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_ScoreText = { UE4CodeGen_Private::EPropertyClass::Object, "ScoreText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ATicTacToeBlockGrid, ScoreText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_ScoreText_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_ScoreText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TicTacToeBlockGrid.h" },
		{ "ToolTip", "Dummy root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_DummyRoot = { UE4CodeGen_Private::EPropertyClass::Object, "DummyRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ATicTacToeBlockGrid, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_DummyRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_DummyRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATicTacToeBlockGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_BlockSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_ScoreText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATicTacToeBlockGrid_Statics::NewProp_DummyRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATicTacToeBlockGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATicTacToeBlockGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATicTacToeBlockGrid_Statics::ClassParams = {
		&ATicTacToeBlockGrid::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_ATicTacToeBlockGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATicTacToeBlockGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATicTacToeBlockGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATicTacToeBlockGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATicTacToeBlockGrid, 868093730);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATicTacToeBlockGrid(Z_Construct_UClass_ATicTacToeBlockGrid, &ATicTacToeBlockGrid::StaticClass, TEXT("/Script/TicTacToe"), TEXT("ATicTacToeBlockGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATicTacToeBlockGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
