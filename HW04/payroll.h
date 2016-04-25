#ifndef PAYROLL_H
#define PAYROLL_H

#include "employee.h"
#include "updatable.h"

class Payroll : public Updatable
{
	public:
	void update(Employee& UpdateFn);
};

#endif
