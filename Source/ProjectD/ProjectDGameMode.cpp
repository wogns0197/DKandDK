// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectDGameMode.h"
#include "ProjectDCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectDGameMode::AProjectDGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
