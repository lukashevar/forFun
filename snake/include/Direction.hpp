#pragma once

#include "Vector2i.hpp"

enum class Direction {
	UP,
	DOWN,
	LEFT,
	RIGHT
};

inline Vector2i directionToVector(Direction dir) {
	switch (dir) {
		case Direction::UP: return Vector2i{ 0, -1 };
		case Direction::DOWN: return Vector2i{ 0, 1 };
		case Direction::LEFT: return Vector2i{ -1, 0 };
		case Direction::RIGHT: return Vector2i{ 1, 0 };
	}

	return Vector2i{ 0, 0 };
}

inline bool isOpposite(Direction a, Direction b) {
	switch (a) {
	case Direction::UP: return b == Direction::DOWN;
	case Direction::DOWN: return b == Direction::UP;
	case Direction::LEFT: return b == Direction::RIGHT;
	case Direction::RIGHT: return b == Direction::LEFT;
	}

	return false;
}
