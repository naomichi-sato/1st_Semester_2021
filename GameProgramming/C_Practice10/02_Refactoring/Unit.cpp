
#include "Unit.h"
#include "Common.h"

Unit::Unit()
	: status()
{
	name[0] = '\0';
}

Unit::~Unit()
{
}

void Unit::InitRandomStatus()
{
	status.hp	 = 1 + (rand() % 20);
	status.str	 = 1 + (rand() % 20);
	status.mag	 = 1 + (rand() % 20);
	status.tec	 = 1 + (rand() % 20);
	status.spd	 = 1 + (rand() % 20);
	status.def	 = 1 + (rand() % 20);
	status.luc	 = 1 + (rand() % 20);
	status.mde	 = 1 + (rand() % 20);
}
