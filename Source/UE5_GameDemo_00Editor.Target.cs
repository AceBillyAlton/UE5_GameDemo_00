// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE5_GameDemo_00EditorTarget : TargetRules
{
	public UE5_GameDemo_00EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		CppStandard = CppStandardVersion.Latest;
		DefaultBuildSettings = BuildSettingsVersion.V4;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_3;
		ExtraModuleNames.Add("UE5_GameDemo_00");
	}
}
