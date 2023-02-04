// Copyright Epic Games,
// Inc. All Rights Reserved.

using UnrealBuildTool;

public class Space : ModuleRules
{
	public Space(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new [] 
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "HeadMountedDisplay",
            "NavigationSystem",
            "AIModule",
            "Niagara",
            "SpaceGameplay",
            "SpaceShared",
            "SpaceUI",
        });
    }
}
