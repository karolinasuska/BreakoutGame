/*
 * Rectangle.h
 *
 *  Created on: Jul 22, 2024
 *      Author: karolina
 */

#ifndef SHAPES_AARECTANGLE_H_
#define SHAPES_AARECTANGLE_H_

#include "Shape.h"

class AARectangle: public Shape
{
public:
	AARectangle();
	AARectangle(const Vec2D& topLeft, unsigned int width, unsigned int height);
	AARectangle(const Vec2D& topLeft, const Vec2D& bottomRight);

	inline void SetTopLeftPoint(const Vec2D& topLeft) {mPoints[0] = topLeft;}
	inline void SetBottomRightPoint(const Vec2D& bottomRight) {mPoints[1] = bottomRight;}

	Vec2D GetTopLeftPoint() const {return mPoints[0];}
	Vec2D GetBottomRightPoint() const {return mPoints[1];}

	float GetWidth() const;
	float GetHeight() const;

	virtual void MoveTo(const Vec2D& position) override;

	virtual Vec2D GetCenterPoint() const override;

	bool Intersects(const AARectangle& otherRectangle) const;
	bool ContainsPoint(const Vec2D& point) const;

	static AARectangle Inset(const AARectangle& rect, Vec2D& insets);

	virtual std::vector<Vec2D> GetPoints() const override;
};


#endif /* SHAPES_AARECTANGLE_H_ */
