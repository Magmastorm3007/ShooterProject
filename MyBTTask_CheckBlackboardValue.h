// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_CheckBlackboardValue.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERPROJECT_API UMyBTTask_CheckBlackboardValue : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UMyBTTask_CheckBlackboardValue();
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


};
