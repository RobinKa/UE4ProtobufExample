// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProtobufExampleGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROTOBUFEXAMPLE_API AProtobufExampleGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
};
