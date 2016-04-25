#include "square.h"
#include <iostream>
#include <string>

using namespace std;

Square::Square(string aColor, float aBorder, float aSide)
{
	color = aColor;
	border = aBorder;
	side = aSide;
}

string Square::getColor()
{
		return color;
}

float Square::getBorder()
{
	return border;
}

float Square::getSide()
{
	return side;
}

void Square::draw()
{
	cout << getColor() << " square of side "<< getSide() << " and border " << getBorder() << endl;

}

