/*
 * Game.h
 *
 *  Created on: Aug 6, 2024
 *      Author: karolina
 */

#ifndef GAMES_GAME_H_
#define GAMES_GAME_H_

#include <string>
#include <stdint.h>

class GameController;
class Screen;

class Game
{
public:

	virtual ~Game(){}
	virtual void Init(GameController& controller) = 0;
	virtual void Update(uint32_t dt) = 0;
	virtual void Draw(Screen& screen) = 0;
	virtual const std::string& GetName() const = 0;

};



#endif /* GAMES_GAME_H_ */
