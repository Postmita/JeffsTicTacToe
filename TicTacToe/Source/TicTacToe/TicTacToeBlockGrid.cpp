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
	isOver = false;
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
			NewBlock->id = BlockIndex;			
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
	blocks.Sort();
	// Orange check.
	if (blocks[0]->bIsX && blocks[1]->bIsX && blocks[2]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
		isOver = true;
	}
	if (blocks[3]->bIsX && blocks[4]->bIsX && blocks[5]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
		isOver = true;
	}
	if (blocks[6]->bIsX && blocks[7]->bIsX && blocks[8]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
		isOver = true;
	}
	if (blocks[0]->bIsX && blocks[3]->bIsX && blocks[6]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
		isOver = true;
	}
	if (blocks[1]->bIsX && blocks[4]->bIsX && blocks[7]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
		isOver = true;
	}
	if (blocks[2]->bIsX && blocks[5]->bIsX && blocks[8]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
		isOver = true;
	}
	if (blocks[2]->bIsX && blocks[4]->bIsX && blocks[6]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
		isOver = true;
	}
	if (blocks[0]->bIsX && blocks[4]->bIsX && blocks[8]->bIsX) {
		ScoreText->SetText("ORANGE WINS!");
		isOver = true;
	}
	// Green check. 0 1 2, 3 4 5, 6 7 8, 0 3 6, 1 4 7, 2 5 8, 2 4 6, 0 4 8
	if (blocks[0]->bIsO && blocks[1]->bIsO && blocks[2]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
		isOver = true;
	}
	if (blocks[3]->bIsO && blocks[4]->bIsO && blocks[5]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
		isOver = true;
	}
	if (blocks[6]->bIsO && blocks[7]->bIsO && blocks[8]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
		isOver = true;
	}
	if (blocks[0]->bIsO && blocks[3]->bIsO && blocks[6]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
		isOver = true;
	}
	if (blocks[1]->bIsO && blocks[4]->bIsO && blocks[7]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
		isOver = true;
	}
	if (blocks[2]->bIsO && blocks[5]->bIsO && blocks[8]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
		isOver = true;
	}
	if (blocks[2]->bIsO && blocks[4]->bIsO && blocks[6]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
		isOver = true;
	}
	if (blocks[0]->bIsO && blocks[4]->bIsO && blocks[8]->bIsO) {
		ScoreText->SetText("GREEN WINS!");
		isOver = true;
	}

	// check if all clicked.
	if (blocks[0]->bIsActive && blocks[1]->bIsActive && blocks[2]->bIsActive
		&& blocks[3]->bIsActive && blocks[4]->bIsActive && blocks[5]->bIsActive
		&& blocks[6]->bIsActive && blocks[7]->bIsActive && blocks[8]->bIsActive) {
		isOver = true;
	}

	if (isOver) {
		// implement a timer.
		//FTimerHandle UnusedHandle;
		UE_LOG(LogTemp, Warning, TEXT("Winner."));
		UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
	}
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
	CheckIfWinner();
}


#undef LOCTEXT_NAMESPACE
