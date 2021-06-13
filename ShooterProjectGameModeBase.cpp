// Copyright Epic Games, Inc. All Rights Reserved.


#include "ShooterProjectGameModeBase.h"

void AShooterProjectGameModeBase::PawnKilled(APawn* PawnKilled) {
	APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
	if (PlayerController != nullptr) {
		PlayerController->GameHasEnded(nullptr, false);
	}

}

