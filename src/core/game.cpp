#include"game.h"
#include"../scene_main.h"

void Game::init(std::string title, int width, int height)
{
	screen_size_ = glm::vec2(width, height);
	//SDL3初始化
	if (!SDL_Init(SDL_INIT_AUDIO | SDL_INIT_VIDEO)) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL初始化失败:%s\n", SDL_GetError());
	}
	//不需要进行SDL初始化
	//SDL3_Mixer初始化
	if (Mix_Init(MIX_INIT_MP3 | MIX_INIT_OGG) != (MIX_INIT_MP3 | MIX_INIT_OGG)) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_Mixer初始化失败：%s\n", SDL_GetError());
	}
}

void Game::run()
{
}


void Game::handleEvent()
{
}

void Game::update(float dt)
{
}

void Game::render()
{
}

void Game::clean()
{

}