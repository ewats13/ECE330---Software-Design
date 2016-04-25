#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square
{
		private:
		string color;
		float border;
		float side;

		public:

		Square(string aColor, float aBorder, float aRadius);

		string getColor();
		float getBorder();
		float getSide();

		virtual void draw();

};
#endif
