// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TicTacToeBlockGrid.h"
#include "TicTacToeBlock.h"
#include "Components/TextRenderComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGrid"

ATicTacToeBlockGrid::ATicTacToeBlockGrid() {
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;
	// Create static mesh component
	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
	ScoreText->SetRelativeLocation(FVector(200.f,0.f,0.f));
	ScoreText->SetRelativeRotation(FRotator(90.f,0.f,0.f));
	ScoreText->SetText("Orange's turn");
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
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATicTacToeBlock::StaticClass(), FoundActors);
	UE_LOG(LogTemp, Warning, TEXT("Got all actors"));
	TArray<ATicTacToeBlock*> blocks;
	for (AActor* Actor : FoundActors) {
		ATicTacToeBlock* block = static_cast<ATicTacToeBlock*>(Actor);
		blocks.Add(block);				
	}
	// Orange check.
	if (blocks[0]->bIsX && blocks[1]->bIsX && blocks[2]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
	}
	if (blocks[3]->bIsX && blocks[4]->bIsX && blocks[5]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
	}
	if (blocks[6]->bIsX && blocks[7]->bIsX && blocks[8]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
	}
	if (blocks[0]->bIsX && blocks[3]->bIsX && blocks[6]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
	}
	if (blocks[1]->bIsX && blocks[4]->bIsX && blocks[7]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
	}
	if (blocks[2]->bIsX && blocks[5]->bIsX && blocks[8]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
	}
	if (blocks[2]->bIsX && blocks[4]->bIsX && blocks[6]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
	}
	if (blocks[0]->bIsX && blocks[4]->bIsX && blocks[8]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
	}
	// Green check. 0 1 2, 3 4 5, 6 7 8, 0 3 6, 1 4 7, 2 5 8, 2 4 6, 0 4 8
	if (blocks[0]->bIsO && blocks[1]->bIsO && blocks[2]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
	}
	if (blocks[3]->bIsO && blocks[4]->bIsO && blocks[5]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
	}
	if (blocks[6]->bIsO && blocks[7]->bIsO && blocks[8]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
	}
	if (blocks[0]->bIsO && blocks[3]->bIsO && blocks[6]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
	}
	if (blocks[1]->bIsO && blocks[4]->bIsO && blocks[7]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
	}
	if (blocks[2]->bIsO && blocks[5]->bIsO && blocks[8]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
	}
	if (blocks[2]->bIsO && blocks[4]->bIsO && blocks[6]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
	}
	if (blocks[0]->bIsO && blocks[4]->bIsO && blocks[8]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
	}
}

//int checkwin() {
//	if (square[1] == square[2] && square[2] == square[3])
//
//		return 1;
//	else if (square[4] == square[5] && square[5] == square[6])
//
//		return 1;
//	else if (square[7] == square[8] && square[8] == square[9])
//
//		return 1;
//	else if (square[1] == square[4] && square[4] == square[7])
//
//		return 1;
//	else if (square[2] == square[5] && square[5] == square[8])
//
//		return 1;
//	else if (square[3] == square[6] && square[6] == square[9])
//
//		return 1;
//	else if (square[1] == square[5] && square[5] == square[9])
//
//		return 1;
//	else if (square[3] == square[5] && square[5] == square[7])
//
//		return 1;
//	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
//		&& square[4] != '4' && square[5] != '5' && square[6] != '6'
//		&& square[7] != '7' && square[8] != '8' && square[9] != '9')
//
//		return 0;
//	else
//		return -1;
//}

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
	CheckIfWinner();
}

#undef LOCTEXT_NAMESPACE
