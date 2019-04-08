// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ESCapeGameMode.h"
#include "ESCapeHUD.h"
#include "UObject/ConstructorHelpers.h"

AESCapeGameMode::AESCapeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/APE_BP"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AESCapeHUD::StaticClass();
}
