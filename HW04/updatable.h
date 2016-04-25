#ifndef UPDATABLE_H
#define UPDATABLE_H
#include <list>

class Employee;
class Updatable
{
	protected:
	Updatable();

	public:
	virtual void update(Employee& UpdateFn) = 0; // WILL BE OVERRIDDEN
	virtual ~Updatable();
};

#endif
