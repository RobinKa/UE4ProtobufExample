using UnrealBuildTool;
using System;
using System.IO;

public class protobuf : ModuleRules
{
	public protobuf(ReadOnlyTargetRules Target)
		: base(Target)
	{
        Type = ModuleType.External;
        
		PublicSystemIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));

        switch (Target.Platform)
        {
            case UnrealTargetPlatform.Win64:
                PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "lib", "Win64"));
                PublicAdditionalLibraries.Add("libprotobuf.lib");
                break;
            default:
                throw new Exception("Unsupported platform " + Target.Platform.ToString());
        }

        PublicDefinitions.Add("GOOGLE_PROTOBUF_NO_RTTI=1");
    }
}

