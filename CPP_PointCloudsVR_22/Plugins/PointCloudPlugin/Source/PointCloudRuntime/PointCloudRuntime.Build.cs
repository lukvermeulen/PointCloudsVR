// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
    public class PointCloudRuntime : ModuleRules
    {
        public PointCloudRuntime(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "Core",
                "Engine",
                "RenderCore",
                "Projects",
                "RHI",
                "InputCore"
                }
            );

            // ShaderCore causes build errors in 4.22-preview1
            // Long way to check, but Target.Version doesn't exist in 4.18
            BuildVersion Version;
            if (BuildVersion.TryRead(BuildVersion.GetDefaultFileName(), out Version) && Version.MinorVersion < 22)
            {
                PrivateDependencyModuleNames.AddRange(
                    new string[]
                    {
                        "ShaderCore"
                    }
                );
            }

            if (Target.bBuildEditor)
            {
                PrivateDependencyModuleNames.AddRange(
                    new string[]
                    {
                    "UnrealEd",
                    "PropertyEditor",
                    "EditorStyle"
                    }
                );
            }
        }
    }
}