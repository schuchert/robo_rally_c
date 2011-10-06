#include "Direction.h"

enum Direction Direction_rotate(enum Direction d, enum Rotation r, enum CirclePortion s) {
	return (d + s * r) % 4;
}
