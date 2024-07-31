/*
 * Shape.cpp
 *
 *  Created on: Jul 19, 2024
 *      Author: karolina
 */

#include "Shape.h"


 void Shape::MoveBy(const Vec2D & deltaOffset)
 {
	 for(Vec2D& point : mPoints)
	 {
		 point = point + deltaOffset;
	 }
 }

