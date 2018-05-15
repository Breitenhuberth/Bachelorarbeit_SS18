// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Bachelorarbeit_SS18GameMode.h"
#include "Bachelorarbeit_SS18Character.h"
#include "UObject/ConstructorHelpers.h"

ABachelorarbeit_SS18GameMode::ABachelorarbeit_SS18GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
