/*
 * App.h
 *
 *  Created on: Jul 26, 2024
 *      Author: karolina
 */

#ifndef APP_APP_H_
#define APP_APP_H_

#include "Screen.h"
#include "Scene.h"

#include <stdint.h>
#include <vector>
#include <memory>


struct SDL_Window;

class App
{
public:

	static App& Singleton();
	bool Init(uint32_t width, uint32_t height, uint32_t mag);

	void Run();

	inline uint32_t Width() const {return mScreen.Width();}
	inline uint32_t Height() const {return mScreen.Height();}

	void PushScene(std::unique_ptr<Scene> scene);
	void PopScene();
	Scene* TopScene(); //current scene

private:

	Screen mScreen;
	SDL_Window * mnoptrWindow;

	std::vector<std::unique_ptr<Scene>> mSceneStack;
};

#endif /* APP_APP_H_ */
