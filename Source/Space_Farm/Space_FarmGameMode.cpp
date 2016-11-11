// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Space_Farm.h"
#include "Space_FarmGameMode.h"
#include "Space_FarmCharacter.h"

ASpace_FarmGameMode::ASpace_FarmGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
