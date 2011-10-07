#include "RobotAction.h"
#include "Robot.h"
#include "CommonMemory.h"
#include "Direction.h"

struct RobotAction {
	ACTION_F action;
	enum Direction direction;
	enum Size size;
};

RobotAction *RobotAction_create(ACTION_F a, enum Direction d, enum Size s) {
	RobotAction *value = acquire(sizeof(RobotAction));
	value->action = a;
	value->direction = d;
	value->size = s;
	return value;
}

void RobotAction_destroy(RobotAction *value) {
	release(value);
}

void RobotAction_execute(RobotAction *a, struct Robot *r) {
	a->action(r,a->direction, a->size);
}

void Action_move(struct Robot *robot, int size, int direction) {
	Coordinate candidateDestination = Direction_apply(Robot_facing(robot), direction, size, Robot_location(robot));
	Robot_move_to(robot, candidateDestination);
}

void Action_rotate(struct Robot *robot, int size, int direction) {
}
