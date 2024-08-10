/*
 * BreakOut.h
 *
 *  Created on: Aug 6, 2024
 *      Author: karolina
 */

#ifndef GAMES_BREAKOUT_BREAKOUT_H_
#define GAMES_BREAKOUT_BREAKOUT_H_

#include "Game.h"
#include "Paddle.h"
#include "Ball.h"
#include "LevelBoundary.h"

class BreakOut: public Game
{
public:

	virtual void Init(GameController& controller) override;
	virtual void Update(uint32_t dt) override;
	virtual void Draw(Screen& screen) override;
	virtual const std::string& GetName() const override;

private:

	void ResetGame();

	const Vec2D INITIAL_BALL_VEL = Vec2D(100, -100);

	Paddle mPaddle;
	Ball mBall;
	LevelBoundary mLevelBoundary;

};



#endif /* GAMES_BREAKOUT_BREAKOUT_H_ */
