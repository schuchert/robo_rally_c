#pragma once
#ifndef BOARD_H_
#define BOARD_H_


#ifdef __cplusplus
extern "C" {
#endif

struct Coordinate;
typedef struct Board Board;

Board *Board_create(struct Coordinate upperRight);
void Board_destroy(Board *);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H_ */
