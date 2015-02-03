// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "StretchTechTest.h"
#include "StretchTechTestGameMode.h"
#include "StretchTechTestHUD.h"
#include "StretchTechTestCharacter.h"

AStretchTechTestGameMode::AStretchTechTestGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/MyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AStretchTechTestHUD::StaticClass();
}
