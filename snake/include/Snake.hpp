#pragma once

#include <deque>
#include "Vector2i.hpp"
#include "Direction.hpp"

class Snake {
public:
	explicit Snake(Vector2i startPosition);

	void setDirection(Direction newDirection);

	void move(bool growing);

	bool collidesWithSelf() const;

	bool collidesWithBounds(int gridWidth, int gridHeight) const;

	const Vector2i& getHead() const;
	const std::deque<Vector2i>& getBody() const;
	Direction getDirection() const;

private:
	std::deque<Vector2i> m_body;
	Direction m_direction;
	Direction m_pendingDirection;
};
