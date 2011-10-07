#pragma once
#ifndef DIRECTION_H_
#define DIRECTION_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Coordinate.h"
enum Orientation { N = 0, E = 1, S = 2, W = 3 };
enum Rotation { clockwise = 1, counter_clockwise = -1 };
enum Direction { forward = 1, backwards = -1 };
enum CirclePortion { D90 = 1, D180 = 2, D270 = 3, D360 = 4  };
enum Size { Size1 = 1, Size2 = 2, Size3 = 3 };

enum Direction Direction_rotate(enum Direction d, enum Rotation r, enum CirclePortion s);
Coordinate Direction_apply(enum Orientation, enum Direction, enum Size, Coordinate);

#ifdef __cplusplus
}
#endif

#endif /* DIRECTION_H_ */
