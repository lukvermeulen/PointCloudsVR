// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CPP_PointCloudsVR_22GameMode.h"
#include "CPP_PointCloudsVR_22HUD.h"
#include "CPP_PointCloudsVR_22Character.h"
#include "UObject/ConstructorHelpers.h"

ACPP_PointCloudsVR_22GameMode::ACPP_PointCloudsVR_22GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACPP_PointCloudsVR_22HUD::StaticClass();
}
