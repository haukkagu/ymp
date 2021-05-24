#include <ymp/core.h>

class Sandbox : public ymp::Game {
public:
	Sandbox() : Game("Sandbox") { }

	void init() override {
		
	}

	void onUpdate(float delta_time) override {

	}
};

ymp::Game* createGame() {
	return new Sandbox();
}