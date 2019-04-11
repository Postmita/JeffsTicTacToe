// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TicTacToeBlockGrid.h"
#include "TicTacToeBlock.h"
#include "Components/TextRenderComponent.h"
#include "Engine/World.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGrid"

ATicTacToeBlockGrid::ATicTacToeBlockGrid() {
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;
	// Create static mesh component
	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
	ScoreText->SetRelativeLocation(FVector(200.f,0.f,0.f));
	ScoreText->SetRelativeRotation(FRotator(90.f,0.f,0.f));
	ScoreText->SetText("X's turn");
	ScoreText->SetupAttachment(DummyRoot);
	// Set defaults
	Size = 3;
	BlockSpacing = 300.f;
	
}


void ATicTacToeBlockGrid::BeginPlay() {
	Super::BeginPlay();
	// Number of blocks
	const int32 NumBlocks = Size * Size;
	// Loop to spawn each block
	for(int32 BlockIndex=0; BlockIndex<NumBlocks; BlockIndex++)	{
		const float XOffset = (BlockIndex/Size) * BlockSpacing; // Divide by dimension
		const float YOffset = (BlockIndex%Size) * BlockSpacing; // Modulo gives remainder
		// Make position vector, offset from Grid location
		const FVector BlockLocation = FVector(XOffset, YOffset, 0.f) + GetActorLocation();
		// Spawn a block
		ATicTacToeBlock* NewBlock = GetWorld()->SpawnActor<ATicTacToeBlock>(BlockLocation, FRotator(0,0,0));
		// Tell the block about its owner
		if (NewBlock != nullptr) {
			NewBlock->OwningGrid = this;
			
			// Add the block to the array.
			//Blocks.Add(NewBlock);
		}
	}
}

void ATicTacToeBlockGrid::CheckIfWinner() {
	UE_LOG(LogTemp, Warning, TEXT("Checking If Winner."));
	// Check 0 1 2, 3 4 5, 6 7 8, 0 3 6, 1 4 7, 2 5 8, 2 4 6, 0 4 8 for winning.
	//if (Blocks[0]->ActorHasTag(TEXT("X")) && Blocks[1]->ActorHasTag(TEXT("X")) && Blocks[2]->ActorHasTag(TEXT("X"))) {
		ScoreText->SetText("X wins!");
	//}
	
}

void ATicTacToeBlockGrid::AddScore() {
	// Increment score
	Score++;
	// Update text
	if (Score % 2 == 0) {
		ScoreText->SetText("Orange's turn");
	}
	else {
		ScoreText->SetText("Green's turn");
	}
	//ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(Score)));
	//CheckIfWinner();
}

#undef LOCTEXT_NAMESPACE
