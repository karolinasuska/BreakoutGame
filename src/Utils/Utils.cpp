/*
 * Utils.cpp
 *
 *  Created on: Jul 8, 2024
 *      Author: karolina
 */

#include "Utils.h"
#include <cmath>



bool IsEqual(float x, float y)
{
	return fabsf(x - y) < EPSILON;
}

bool IsGreaterThanOrEqual(float x, float y)
{
	return x > y || IsEqual(x,y);
}

bool IsLessThanOrEqual(float x, float y)
{
	return x < y || IsEqual(x,y);
}

float MilisecondsToSeconds(unsigned int miliseconds)
{
	return static_cast<float>(miliseconds) / 1000.0f;
}
