// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CPP_PointCloudsVR_22HUD.generated.h"

UCLASS()
class ACPP_PointCloudsVR_22HUD : public AHUD
{
	GENERATED_BODY()

public:
	ACPP_PointCloudsVR_22HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

