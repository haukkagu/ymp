#include "ymp/core/Game.h"

#include "ymp/opengl.h"

namespace ymp {
	Game* Game::s_Game = nullptr;

	Game::Game(const char* title, unsigned int width, unsigned int height) 
		: m_Window(GameWindow(title, width, height)) 
	{
		s_Game = this;
	}

	Game::~Game() {

	}

	void Game::run() {
		m_Running = true;

		m_Window.init();
		this->init();

		float prev_time = 0;
		while (m_Running) {
			float elapsed_time = (float)glfwGetTime();
			float delta_time = elapsed_time - prev_time;
			prev_time = elapsed_time;

			glClear(GL_COLOR_BUFFER_BIT);

			this->onUpdate(delta_time);

			glfwSwapBuffers(m_Window.getGLFWwindow());
			glfwPollEvents();
		}
	}

	void Game::close() {
		m_Running = false;
	}
}