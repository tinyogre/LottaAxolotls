// Copyright Epic Games, Inc. All Rights Reserved.

#include "LottaAxolotlsGameMode.h"
#include "LottaAxolotlsPlayerController.h"
#include "LottaAxolotlsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALottaAxolotlsGameMode::ALottaAxolotlsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALottaAxolotlsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_AxolotlPlayerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}