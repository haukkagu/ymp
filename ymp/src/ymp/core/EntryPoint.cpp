#include "ymp/core/Game.h"
#include "ymp/opengl.h"

// Defined in CLIENT
extern ymp::Game* createGame();

int main(void)
{
	if (!glfwInit())
		return -1;

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	auto game = createGame();
	game->run();
	delete game;

	glfwTerminate();
	return 0;
}