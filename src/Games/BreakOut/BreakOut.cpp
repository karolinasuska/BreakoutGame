/*
 * BreakOut.cpp
 *
 *  Created on: Aug 6, 2024
 *      Author: karolina
 */

#include <BreakOut/BreakOut.h>
#include <iostream>

/*
 * 	Paddle:
 * 		- Can move side to side (by the user)
 * 		- Stops at the edge of the screen
 * 		- Width and height
 * 		- Bounces the ball
 * 		- Bounces the ball differently based on the position that was hit on the paddle
 *
 * 	Ball:
 * 		- Bounces off of the walls an the paddle
 * 		- Width and height
 * 		- Velocity position
 *
 * 	Block:
 * 		- Bounces the ball
 * 		- Part of the level
 * 		- Has HP - one hit by the ball is -1 HP
 * 		- Color and position
 * 		- Width and height (AARectangle)
 *
 * 	Level:
 * 		- Container that holds all of the blocks
 * 		- Should be able to load a level from the levels.txt file
 * 		- Contain the walls/edges of the screen
 *
 * 	Game:
 * 		- Contains all of the objects (Paddle, Ball, Levels)
 * 		- Player which has 3 lives
 * 		- States - Serve the ball, in game, game over
 * 		- Reset the game
 */


void BreakOut::Init(GameController& controller)
{
	std::cout << "Break Out Game Init()" << std::endl;
}



void BreakOut::Update(uint32_t dt)
{
	std::cout << "Break Out Game Update()" << std::endl;
}



void BreakOut::Draw(Screen& screen)
{
	std::cout << "Break Out game Draw()" << std::endl;
}



std::string BreakOut::GetName() const
{
	return "Break Out!";
}



