#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <SDL3_ttf/SDL_ttf.h>

int main() {

	SDL_Init(SDL_INIT_AUDIO || SDL_INIT_VIDEO);

	Mix_Init(MIX_INIT_FLAC);
	Mix_OpenAudio(0, nullptr);

}