// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERPROJECT_API AShooterAIController : public AAIController
{
	GENERATED_BODY()



private:
	UPROPERTY(EditAnywhere)
UBehaviorTree* AIBehavior;
protected:
	virtual void BeginPlay() override;
public:


	bool IsDead() const;

	virtual void Tick(float DeltaSeconds) override;
};
