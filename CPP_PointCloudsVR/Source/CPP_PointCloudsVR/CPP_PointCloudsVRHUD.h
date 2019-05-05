// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CPP_PointCloudsVRHUD.generated.h"

UCLASS()
class ACPP_PointCloudsVRHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACPP_PointCloudsVRHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

