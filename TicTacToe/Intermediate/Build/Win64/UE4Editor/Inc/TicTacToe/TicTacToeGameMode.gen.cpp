// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TicTacToe/TicTacToeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTicTacToeGameMode() {}
// Cross Module References
	TICTACTOE_API UClass* Z_Construct_UClass_ATicTacToeGameMode_NoRegister();
	TICTACTOE_API UClass* Z_Construct_UClass_ATicTacToeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TicTacToe();
// End Cross Module References
	void ATicTacToeGameMode::StaticRegisterNativesATicTacToeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATicTacToeGameMode_NoRegister()
	{
		return ATicTacToeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATicTacToeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATicTacToeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TicTacToe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATicTacToeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TicTacToeGameMode.h" },
		{ "ModuleRelativePath", "TicTacToeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATicTacToeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATicTacToeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATicTacToeGameMode_Statics::ClassParams = {
		&ATicTacToeGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATicTacToeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATicTacToeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATicTacToeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATicTacToeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATicTacToeGameMode, 268703837);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATicTacToeGameMode(Z_Construct_UClass_ATicTacToeGameMode, &ATicTacToeGameMode::StaticClass, TEXT("/Script/TicTacToe"), TEXT("ATicTacToeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATicTacToeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
