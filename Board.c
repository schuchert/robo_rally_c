#include "Board.h"
#include "Coordinate.h"
#include "CommonMemory.h"

struct Board {
};

Board *Board_create(Coordinate upperRight) {
	Board *value = acquire(sizeof(Board));
	return value;
}

void Board_destroy(Board *value) {
	release(value);
}
