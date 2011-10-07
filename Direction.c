#include "Direction.h"

enum Direction Direction_rotate(enum Direction d, enum Rotation r, enum CirclePortion s) {
	return (d + s * r) % 4;
}

Coordinate Direction_apply(enum Orientation o, enum Direction d, enum Size s, Coordinate c) {
	Coordinate result = c;
	result.y += d * s;
	return result;
}
