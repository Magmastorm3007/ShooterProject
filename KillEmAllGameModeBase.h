// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShooterProjectGameModeBase.h"
#include "KillEmAllGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERPROJECT_API AKillEmAllGameModeBase : public AShooterProjectGameModeBase
{
	GENERATED_BODY()
public:
	virtual void PawnKilled(APawn* PawnKilled) override;
	void EndGame(bool a);
};
