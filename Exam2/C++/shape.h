#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

class Shape
{
	private:

	string color;
	float border;

	public:

	Shape(string aColor, float aBorder);

	string getColor();
	float getBorder();
    virtual void draw();

};
#endif
