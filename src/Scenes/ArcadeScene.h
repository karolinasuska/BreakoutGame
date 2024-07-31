/*
 * ArcadeScene.h
 *
 *  Created on: Jul 26, 2024
 *      Author: karolina
 */

#ifndef SCENES_ARCADESCENE_H_
#define SCENES_ARCADESCENE_H_

#include "Scene.h"

#include <memory>

class Screen;

enum eGame
{
	TETRIS = 0,
	BREAK_OUT,
	ASTEROIDS,
	PACMAN,
	NUM_GAMES
};


class ArcadeScene: public Scene
{
public:

	ArcadeScene();
	virtual void Init() override;
	virtual void Update(uint32_t dt) override;
	virtual void Draw(Screen& theScreen)  override;
	virtual const std::string& GetSceneName() const override;

private:

	std::unique_ptr<Scene> GetScene(eGame game);
};



#endif /* SCENES_ARCADESCENE_H_ */
