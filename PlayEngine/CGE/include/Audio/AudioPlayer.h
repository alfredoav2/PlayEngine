#pragma once
//#include "Base/Resource.h"
#include <Mmsystem.h>
#include <mciapi.h>
#include "Base/Resource.h"
#include <string>
#include <audiomediatype.h>
#include <SDL.h>
#include <SDL_mixer.h>
class PLAYENGINE AudioPlayer
{
private:
	Mix_Music* backGround = nullptr;
	bool success = true;

public:
	
	AudioPlayer(const std::string& name, const std::string& path = "./");
	void PlayMusic();
	~AudioPlayer();
};