// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CPP_PointCloudsVRGameMode.h"
#include "CPP_PointCloudsVRHUD.h"
#include "CPP_PointCloudsVRCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_PointCloudsVRGameMode::ACPP_PointCloudsVRGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACPP_PointCloudsVRHUD::StaticClass();
}
