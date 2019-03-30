// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TicTacToe/TicTacToePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTicTacToePlayerController() {}
// Cross Module References
	TICTACTOE_API UClass* Z_Construct_UClass_ATicTacToePlayerController_NoRegister();
	TICTACTOE_API UClass* Z_Construct_UClass_ATicTacToePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TicTacToe();
// End Cross Module References
	void ATicTacToePlayerController::StaticRegisterNativesATicTacToePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATicTacToePlayerController_NoRegister()
	{
		return ATicTacToePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATicTacToePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATicTacToePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TicTacToe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATicTacToePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TicTacToePlayerController.h" },
		{ "ModuleRelativePath", "TicTacToePlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATicTacToePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATicTacToePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATicTacToePlayerController_Statics::ClassParams = {
		&ATicTacToePlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATicTacToePlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATicTacToePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATicTacToePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATicTacToePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATicTacToePlayerController, 68635159);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATicTacToePlayerController(Z_Construct_UClass_ATicTacToePlayerController, &ATicTacToePlayerController::StaticClass, TEXT("/Script/TicTacToe"), TEXT("ATicTacToePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATicTacToePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
