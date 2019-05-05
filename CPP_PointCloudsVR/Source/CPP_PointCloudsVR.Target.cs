// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CPP_PointCloudsVRTarget : TargetRules
{
	public CPP_PointCloudsVRTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("CPP_PointCloudsVR");
	}
}
