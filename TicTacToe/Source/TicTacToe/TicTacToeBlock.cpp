// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TicTacToeBlock.h"
#include "TicTacToeBlockGrid.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstance.h"

ATicTacToeBlock::ATicTacToeBlock() {
	// Structure to hold one-time initialization
	struct FConstructorStatics 	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> BlueMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> OrangeMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> GreenMaterial;
		FConstructorStatics()
			: PlaneMesh(TEXT("/Game/Puzzle/Meshes/PuzzleCube.PuzzleCube"))
			, BaseMaterial(TEXT("/Game/Puzzle/Meshes/BaseMaterial.BaseMaterial"))
			, BlueMaterial(TEXT("/Game/Puzzle/Meshes/BlueMaterial.BlueMaterial"))
			, OrangeMaterial(TEXT("/Game/Puzzle/Meshes/OrangeMaterial.OrangeMaterial"))
			, GreenMaterial(TEXT("/Game/Puzzle/Meshes/GreenMaterial.GreenMaterial"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;
	// Create static mesh component
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh0"));
	BlockMesh->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());
	BlockMesh->SetRelativeScale3D(FVector(1.f,1.f,0.25f));
	BlockMesh->SetRelativeLocation(FVector(0.f,0.f,25.f));
	BlockMesh->SetMaterial(0, ConstructorStatics.BlueMaterial.Get());
	BlockMesh->SetupAttachment(DummyRoot);
	BlockMesh->OnClicked.AddDynamic(this, &ATicTacToeBlock::BlockClicked);
	BlockMesh->OnInputTouchBegin.AddDynamic(this, &ATicTacToeBlock::OnFingerPressedBlock);
	// Save a pointer to the orange material
	BaseMaterial = ConstructorStatics.BaseMaterial.Get();
	BlueMaterial = ConstructorStatics.BlueMaterial.Get();
	OrangeMaterial = ConstructorStatics.OrangeMaterial.Get();
	GreenMaterial = ConstructorStatics.GreenMaterial.Get();
}

void ATicTacToeBlock::BlockClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked) {
	HandleClicked();
}

void ATicTacToeBlock::OnFingerPressedBlock(ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) {
	HandleClicked();
}

void ATicTacToeBlock::HandleClicked() {
	// Check we are not already active
	if (!bIsActive) {
		bIsActive = true;
		// Change material
		if (OwningGrid != nullptr) {
			if (OwningGrid->Score % 2 == 0) {
				BlockMesh->SetMaterial(0, OrangeMaterial);
				this->Tags.AddUnique(TEXT("X"));
				bIsX = true;
			}
			else {
				BlockMesh->SetMaterial(0, GreenMaterial);
				this->Tags.AddUnique(TEXT("O"));
				bIsO = true;
			}
		// Tell the Grid
			OwningGrid->AddScore();
		}
	}
}

void ATicTacToeBlock::Highlight(bool bOn) {
	// Do not highlight if the block has already been activated.
	if (bIsActive) {
		return;
	}
	if (bOn) {
		BlockMesh->SetMaterial(0, BaseMaterial);
	}
	else {
		BlockMesh->SetMaterial(0, BlueMaterial);
	}
}
