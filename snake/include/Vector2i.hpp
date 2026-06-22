#pragma once

struct Vector2i {

	int x = 0;
	int y = 0;

	bool operator==(const Vector2i& other) const {
		return x == other.x && y == other.y;
	}

	bool operator!=(const Vector2i& other) const {
		return !(*this == other);
	}

	Vector2i operator+(const Vector2i& other) const {
		return Vector2i{ x + other.x, y + other.y };
	}
};