#include "employee.h"
#include <string>
#include <list>

using namespace std;

Employee::Employee(string theName, string theTitle, int theSalary)
:Subject()
{
	name = theName;
	title = theTitle;
	salary = theSalary;
}

string Employee::getName()
{
	return name;
}

string Employee::getTitle()
{
	return title;
}

int Employee::getSalary()
{
	return salary;
}

//UPDATE TITLE AND NOTIFY OBSERVERS
void Employee::setTitle(std::string newTitle)
{
	title = newTitle;
	Employee:: notify_observers();
}

//UPDATE SALARY AND NOTIFY OBSERVERS
void Employee::setSalary(int newSalary)
{
	salary = newSalary;
	Employee::notify_observers();
}

void Employee::notify_observers()
{
	for (list<Updatable *>::iterator it = observers.begin();
	it != observers.end(); ++it)
	{
		(*it)->update(*this);
		}
}
