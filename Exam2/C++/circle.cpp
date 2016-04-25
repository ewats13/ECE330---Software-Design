#include "circle.h"
#include <iostream>
#include <string>

using namespace std;

Circle::Circle(string aColor, float aBorder, float aRadius)
{
		color = aColor;
		border = aBorder;
		radius = aRadius;
}

string Circle::getColor()
{
		return color;
}

float Circle::getBorder()
{
		return border;

}

float Circle::getRadius()
{
	return radius;
}

void Circle::draw()
{
	cout << Circle::getColor() <<  " circle of radius " << Circle::getRadius() << " and border " << Circle::getBorder() << endl;



}



