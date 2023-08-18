// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_GameDemo_00GameMode.h"
#include "UE5_GameDemo_00Character.h"
#include "UObject/ConstructorHelpers.h"

AUE5_GameDemo_00GameMode::AUE5_GameDemo_00GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
