#pragma once
#include "ymp/core/GameWindow.h"

namespace ymp {
	class Game {
	protected:
		static Game* s_Game;

		GameWindow m_Window;
		bool m_Running = false;
	public:
		Game(const char* title = "Made with ymp", unsigned int width = 960, unsigned int height = 540);
		virtual ~Game();

		void run();
		void close();

		virtual void init() = 0;
		virtual void onUpdate(float delta_time) = 0;

		inline static Game& get() { return *s_Game; }
		inline GameWindow& getGameWindow() { return m_Window; }
	};
}