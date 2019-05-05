// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CPP_PointCloudsVREditorTarget : TargetRules
{
	public CPP_PointCloudsVREditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("CPP_PointCloudsVR");
	}
}
