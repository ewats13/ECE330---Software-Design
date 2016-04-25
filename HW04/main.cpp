#include <iostream>
#include "employee.h"
#include "payroll.h"
#include "personnel.h"
#include <string>

using namespace std;

int main(void)
{
	cout << "Creating two employees" << endl;

	Employee employee1("Billy Boss", "CEO", 21000000);
	Employee employee2("Helen Hackmiester", "Engineer", 100000);

	cout << "Creating two departments" << endl;

	Payroll accounting;
	Personnel hr;

	cout << "Add departments as observers of employees" << endl;
	
	employee1.add_observer(&accounting);
	employee1.add_observer(&hr);
	employee2.add_observer(&accounting);
	employee2.add_observer(&hr);

	cout << "Change Salary" << endl;
	employee1.setSalary(30000000);

	cout << "Change Title" << endl;
	employee2.setTitle("Sr. Engineer");

	return 0;
};

