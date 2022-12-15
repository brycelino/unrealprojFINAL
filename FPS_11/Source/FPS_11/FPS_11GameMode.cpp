// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_11GameMode.h"
#include "FPS_11HUD.h"
#include "FPS_11Character.h"
#include "UObject/ConstructorHelpers.h"

AFPS_11GameMode::AFPS_11GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_11HUD::StaticClass();
}
