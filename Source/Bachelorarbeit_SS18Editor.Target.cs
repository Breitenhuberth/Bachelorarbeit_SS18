// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Bachelorarbeit_SS18EditorTarget : TargetRules
{
	public Bachelorarbeit_SS18EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Bachelorarbeit_SS18");
	}
}
