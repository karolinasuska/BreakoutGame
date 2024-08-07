/*
 * Excluder.h
 *
 *  Created on: Aug 6, 2024
 *      Author: karolina
 */

#ifndef GAMES_BREAKOUT_EXCLUDER_H_
#define GAMES_BREAKOUT_EXCLUDER_H_

#include "AARectangle.h"
#include "BoundaryEdge.h"

class Excluder
{
public:

	virtual ~Excluder() {}

	void Init(const AARectangle& rect, bool reverseNormals = false);

	bool HasCollided(const AARectangle& rect, BoundaryEdge& edge) const;

	Vec2D GetCollisionOffset(const AARectangle& rect) const;

	inline const AARectangle& GetAARectangle() const {return mAARect;}

	void MoveBy(const Vec2D& delta);
	void MoveTo(const Vec2D& point);

	const BoundaryEdge& GetEdge(EdgeType edge) const;

private:

	void SetupEdges();

	AARectangle mAARect;

	BoundaryEdge mEdges[NUM_EDGES];

	bool mReverseNormals;
};



#endif /* GAMES_BREAKOUT_EXCLUDER_H_ */
