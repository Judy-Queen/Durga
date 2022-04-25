// Copyright Epic Games, Inc. All Rights Reserved.

#include "Durga_PFEGameMode.h"
#include "Durga_PFECharacter.h"
#include "UObject/ConstructorHelpers.h"

ADurga_PFEGameMode::ADurga_PFEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
