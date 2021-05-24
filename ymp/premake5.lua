project "ymp"
	kind "StaticLib"
	language "C++"
	staticruntime "on"
	
	files {"src/**.h", "src/**.cpp"}
	
	includedirs 
	{
		"src",
		"vendor/glad/include/",
		"vendor/glfw/include/"
	}
	links {"GLFW", "GLAD"}
	
	filter { "configurations:Debug" }
		defines { "YMP_DEBUG" }
		runtime "Debug"
		symbols "on"

	filter { "configurations:Release" }
		defines { "YMP_RELEASE" }
		runtime "Release"
		optimize "on"
	filter {}