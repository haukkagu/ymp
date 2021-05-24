project "sandbox"
	kind "ConsoleApp"
	language "C++"
	staticruntime "on"
	
	files {"src/**.h", "src/**.cpp"}

	includedirs 
	{
		"../ymp/src"
	}
	links {"ymp"}
	
	filter { "configurations:Debug" }
		defines { "YMP_DEBUG" }
		runtime "Debug"
		symbols "on"

	filter { "configurations:Release" }
		defines { "YMP_RELEASE" }
		runtime "Release"
		optimize "on"
	filter {}