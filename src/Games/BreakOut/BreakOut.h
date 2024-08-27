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
#include "BreakoutGameLevel.h"

#include <vector>


enum BreakOutGameState
{
	IN_PLAY = 0,
	IN_SERVE,
	IN_GAME_OVER
};


class BreakOut: public Game
{
public:

	virtual void Init(GameController& controller) override;
	virtual void Update(uint32_t dt) override;
	virtual void Draw(Screen& screen) override;
	virtual const std::string& GetName() const override;

private:

	void ResetGame();

	BreakoutGameLevel& GetCurrentLevel() {return mLevels[mCurrentLevel];}

	void SetToServeState();

	const float INITIAL_BALL_SPEED = 100;
	const Vec2D INITIAL_BALL_VEL = Vec2D(100, -100);

	Paddle mPaddle;
	Ball mBall;
	LevelBoundary mLevelBoundary;
	std::vector<BreakoutGameLevel> mLevels;
	size_t mCurrentLevel;
	BreakOutGameState mGameState;

};



#endif /* GAMES_BREAKOUT_BREAKOUT_H_ */
