/*
 * InputController.cpp
 *
 *  Created on: Aug 5, 2024
 *      Author: karolina
 */


#include "InputController.h"
#include "GameController.h"

#include <SDL2/SDL.h>


InputController::InputController(): mQuit(nullptr), mnoptrCurrentController(nullptr)
{

}

void InputController::Init(InputAction quitAction)
{
	mQuit = quitAction;
}

void InputController::Update(uint32_t dt)
{
	SDL_Event sdlEvent;

	while(SDL_PollEvent(&sdlEvent))
	{
		switch(sdlEvent.type)
		{
		case SDL_QUIT:
		{
			mQuit(dt, SDL_PRESSED);
		}

		case SDL_KEYDOWN:
		case SDL_KEYUP:

			if(mnoptrCurrentController)
			{
				InputAction action = mnoptrCurrentController -> GetActionForKey(sdlEvent.key.keysym.sym);

				action(dt, static_cast<InputState>(sdlEvent.key.state));
			}
			break;
		}
	}
}



void InputController::SetGameController(GameController* controller)
{
	mnoptrCurrentController = controller;
}
