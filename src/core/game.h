#pragma once
#include<SDL3/SDL.h>
#include<SDL3_image/SDL_image.h>
#include<SDL3_mixer/SDL_mixer.h>
#include<SDL3_tff/SDL_ttf.h>
#include<glm/glm.hpp>
#include<string>

class Scene;

class Game {
	glm::vec2 screen_size_ = glm::vec2(0);
	bool is_running_ = true;

	SDL_Window* window_ = nullptr;
	SDL_Renderer* renderer_ = nullptr;

	//私有构造函数
	Game(){}
	//禁止拷贝构造函数与赋值操作符
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;

	Uint64 FPS_ = 60;
	Uint64 frame_delay_ = 0;
	float dt_ = 0.0f;

	Scene* current_scene_ = nullptr;
public:
	static Game& GetInstance() {
		static Game instance;
		return instance;
	}

	void run();
	void init(std::string title, int width, int height);
	void handleEvent();
	void update(float dt);
	void render();
	void clean();
};