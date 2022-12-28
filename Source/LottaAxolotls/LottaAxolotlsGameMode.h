// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LottaAxolotlsGameMode.generated.h"

UCLASS(minimalapi)
class ALottaAxolotlsGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALottaAxolotlsGameMode();

	virtual bool CanServerTravel(const FString& URL, bool bAbsolute) override;
};



