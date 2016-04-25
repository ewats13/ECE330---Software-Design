#include "shape.h"
#include <iostream>
#include <string>
using namespace std;

Shape::Shape(string aColor, float aBorder)
{
		color = aColor;
		border = aBorder;
}

string Shape::getColor()
{
	return color;
}

float Shape::getBorder()
{
	return border;
}

void Shape::draw()
{
	cout << "No information to draw myself." << endl;
}
