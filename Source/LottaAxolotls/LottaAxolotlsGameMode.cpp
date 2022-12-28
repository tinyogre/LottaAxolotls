// Copyright Epic Games, Inc. All Rights Reserved.

#include "LottaAxolotlsGameMode.h"
#include "LottaAxolotlsPlayerController.h"
#include "LottaAxolotlsCharacter.h"
#include "LottaAxolotlsGameState.h"
#include "UObject/ConstructorHelpers.h"

ALottaAxolotlsGameMode::ALottaAxolotlsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALottaAxolotlsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_AxolotlPlayerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_AxolotlPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}

	GameStateClass = ALottaAxolotlsGameState::StaticClass();
	bUseSeamlessTravel = true;
}

bool ALottaAxolotlsGameMode::CanServerTravel(const FString& URL, bool bAbsolute)
{
	// YOLO
	return true;
}
