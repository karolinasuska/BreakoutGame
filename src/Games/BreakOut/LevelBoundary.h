/*
 * LevelBoundary.h
 *
 *  Created on: Aug 10, 2024
 *      Author: karolina
 */

#ifndef GAMES_BREAKOUT_LEVELBOUNDARY_H_
#define GAMES_BREAKOUT_LEVELBOUNDARY_H_

#include "Excluder.h"

class AARectangle;
class Ball;

class LevelBoundary
{
public:

	LevelBoundary() {}
	LevelBoundary(const AARectangle& boundary);
	bool HasCollided(const Ball& ball, BoundaryEdge& edge);//check which edge we collided with

	inline const AARectangle& GetAARectangle() const {return mIncluder.GetAARectangle();}

private:

	bool HasCollidedWithEdge(const Ball& ball, const BoundaryEdge& edge) const; //check to see if we collided at all
	Excluder mIncluder;
};



#endif /* GAMES_BREAKOUT_LEVELBOUNDARY_H_ */
