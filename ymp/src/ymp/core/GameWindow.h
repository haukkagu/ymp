#pragma once
struct GLFWwindow;

namespace ymp {
	class GameWindow {
	private:
		GLFWwindow* m_Window;
		
		const char* m_Title;
		unsigned int m_Width, m_Height;
	public:
		GameWindow(const char* title, unsigned int width, unsigned int height);
		~GameWindow();
		
		void init();

		inline const char* getTitle() { return m_Title; }
		inline unsigned int getWidth() { return m_Width; }
		inline unsigned int getHeight() { return m_Height; }

		inline GLFWwindow* getGLFWwindow() { return m_Window; }
	};
}