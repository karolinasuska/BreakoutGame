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

bool IGreaterThanOrEqual(float x, float y)
{
	return x > y || IsEqual(x,y);
}

bool IsLessThanOrEqual(float x, float y)
{
	return x < y || IsEqual(x,y);
}
