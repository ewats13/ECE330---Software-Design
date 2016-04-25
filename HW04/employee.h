#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "subject.h"
#include <string>
using namespace std;

class Employee : public Subject
{	
	private:
	string name;
	string title;
	int salary;

	public:

	Employee(string theName, string theTitle, int theSalary);

	void setTitle(string newTitle);
	void setSalary(int newSalary);

	string getTitle();
	string getName();
	int getSalary();

	void notify_observers();

};

#endif
