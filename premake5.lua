workspace "ymp"
	architecture "x86_64"
	startproject "sandbox"
	configurations { "Debug", "Release" }
	
	location "build"

group "Dependencies"
	include "ymp/vendor/glfw"
	include "ymp/vendor/glad"
group ""

include "ymp"
include "sandbox"