// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTTask_CheckBlackboardValue.h"
#include "BehaviorTree/BlackboardComponent.h"


UMyBTTask_CheckBlackboardValue::UMyBTTask_CheckBlackboardValue()
{
    NodeName = "Clear Blackboard Value";
}
EBTNodeResult::Type UMyBTTask_CheckBlackboardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());

    return EBTNodeResult::Succeeded;
}
