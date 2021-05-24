#include "ymp/core/GameWindow.h"

#include "ymp/opengl.h"

namespace ymp {
	GameWindow::GameWindow(const char* title, unsigned int width, unsigned int height) {
		m_Window = nullptr;
		
		m_Title = title;
		m_Width = width;
		m_Height = height;
	}

	GameWindow::~GameWindow() {
		glfwDestroyWindow(m_Window);
	}

	void GameWindow::init() {
		m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, nullptr, nullptr);
		glfwMakeContextCurrent(m_Window);

		gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
	}
}