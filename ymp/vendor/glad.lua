project "GLAD"
	kind "StaticLib"
	language "C"
    
    includedirs { "glad/include/" }

	files { "glad/src/glad.c" }
    
	-- PLATFORM: WINDOWS
		systemversion "latest"
		staticruntime "on"
		
		defines 
		{ 
			"_GLAD_WIN32",
			"_CRT_SECURE_NO_WARNINGS"
		}

	filter "configurations:Debug"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		runtime "Release"
		optimize "on"