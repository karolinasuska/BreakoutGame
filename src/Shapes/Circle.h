/*
 * Circle.h
 *
 *  Created on: Jul 22, 2024
 *      Author: karolina
 */

#ifndef SHAPES_CIRCLE_H_
#define SHAPES_CIRCLE_H_

#include "Shape.h"

class Circle: public Shape
{
public:

	Circle();
	Circle(const Vec2D& center, float radius);

	inline virtual Vec2D GetCenterPoint() const override {return mPoints[0];}
	inline float GetRadius() const {return mRadius;}
	inline void SetRadius(float radius) {mRadius = radius;}
	virtual inline void MoveTo(const Vec2D& position) override {mPoints[0] = position;}

	bool Intersects(const Circle& otherCircle) const;
	bool ContainsPoint(const Vec2D& point) const;

private:

	float mRadius;
};




#endif /* SHAPES_CIRCLE_H_ */
