#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "updatable.h"
#include "employee.h"

class Personnel : public Updatable
{
	public:
	void update(Employee& UpdateFn);
};

#endif
