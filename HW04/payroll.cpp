#include "payroll.h"
#include <iostream>

using namespace std;

void Payroll::update(Employee& UpdateFn)
{
	cout << UpdateFn.getName() << "'s new salary is now " <<
	UpdateFn.getSalary() << endl;
}
