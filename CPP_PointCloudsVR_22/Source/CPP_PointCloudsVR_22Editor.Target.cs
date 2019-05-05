// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CPP_PointCloudsVR_22EditorTarget : TargetRules
{
	public CPP_PointCloudsVR_22EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("CPP_PointCloudsVR_22");
	}
}
