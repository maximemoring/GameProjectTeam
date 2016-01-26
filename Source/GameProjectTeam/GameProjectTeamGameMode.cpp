// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "GameProjectTeam.h"
#include "GameProjectTeamGameMode.h"
#include "GameProjectTeamHUD.h"
#include "GameProjectTeamCharacter.h"

AGameProjectTeamGameMode::AGameProjectTeamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameProjectTeamHUD::StaticClass();
}
