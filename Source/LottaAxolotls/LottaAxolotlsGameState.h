// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "UObject/Object.h"
#include "LottaAxolotlsGameState.generated.h"

/**
 * 
 */
UCLASS()
class LOTTAAXOLOTLS_API ALottaAxolotlsGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, BlueprintGetter=GetFollowerCount, BlueprintSetter=SetFollowerCount)
	int32 FollowerCount;

	static int32 FollowerCount_;

	UFUNCTION(BlueprintPure)
	int32 GetFollowerCount() const
	{
		return FollowerCount_;
	}

	UFUNCTION(BlueprintSetter)
	void SetFollowerCount(int32 InCount)
	{
		FollowerCount_ = InCount;
	}
};
