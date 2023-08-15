// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TheRoyalCourtGameMode.h"
#include "TheRoyalCourtPlayerController.h"
#include "TheRoyalCourtCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheRoyalCourtGameMode::ATheRoyalCourtGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATheRoyalCourtPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}