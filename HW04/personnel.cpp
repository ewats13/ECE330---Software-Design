#include <iostream>
#include "personnel.h"

using namespace std;

void Personnel::update(Employee& UpdateFn)
{
	cout << UpdateFn.getName() << "'s new title is now " <<
	UpdateFn.getTitle() << endl;
}
