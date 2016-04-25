#include <iostream>
#include "circle.h"
#include "square.h"

using namespace std;

int main()
{
Circle greencircle("green", 1.5, 3.0);

	greencircle.draw();

Circle redcircle("red", 2.0, 5.0);

	redcircle.draw();

Square bluesquare("blue", 1.0, 4.0);

	bluesquare.draw();

Square purplesquare("purple", 2.5, 4.5);

	purplesquare.draw();

Shape shape("black", 1.0);
	
	shape.draw();

}


