#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle
{
	private:
		string color;
		float border;
		float radius;
		
	public:

	Circle(string aColor, float aBorder, float aRadius);

	string getColor();
	float getBorder();
	float getRadius();

	virtual void draw();
};
#endif
