#pragma once
#ifndef DIRECTION_H_
#define DIRECTION_H_

#ifdef __cplusplus
extern "C" {
#endif

enum Direction { N = 0, E = 1, S = 2, W = 3 };
enum Rotation { clockwise = 1, counter_clockwise = -1 };
enum CirclePortion { D90 = 1, D180 = 2, D270 = 3, D360 = 4  };

enum Direction Direction_rotate(enum Direction d, enum Rotation r, enum CirclePortion s);

#ifdef __cplusplus
}
#endif

#endif /* DIRECTION_H_ */
