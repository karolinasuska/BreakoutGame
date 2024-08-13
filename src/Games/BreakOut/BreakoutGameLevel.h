/*
 * BreakoutGameLevel.h
 *
 *  Created on: Aug 12, 2024
 *      Author: karolina
 */

#ifndef GAMES_BREAKOUT_BREAKOUTGAMELEVEL_H_
#define GAMES_BREAKOUT_BREAKOUTGAMELEVEL_H_

#include "Block.h"

#include <vector>


class Screen;
class ball;
class AARectangle;

class BreakoutGameLevel
{
public:

	BreakoutGameLevel();
	void Init(const AARectangle& boundary);
	void Load(const std::vector<Block>& blocks);
	void Update(uint32_t dt, Ball& ball);
	void Draw(Screen& screen);

private:

	void CreateDefaultLevel(const AARectangle& boundary);
	std::vector<Block> mBlocks;
};



#endif /* GAMES_BREAKOUT_BREAKOUTGAMELEVEL_H_ */
