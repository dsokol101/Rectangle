// Rectangle class implementation file (contains the full-fledged class definition)
// Rectangle.cpp
#include "Rectangle2.h"
#include <iostream>
/*
1. default constructor of Rectangle, the default constr of Length gets called.
2. integer parameter constructor of Rectangle, the integer parameter constr of Length class 
   gets called twice.
3. Length parameter constructor of Rectangle, WHAT GETS CALLED ON THE LENGTH MEMBER OBJECTS
width and height?

*/
// parameter constructors
Rectangle::Rectangle(Length w, Length h): width(w), height(h) {}

Rectangle::Rectangle(int width, int height) : width(width), height(height) {}

double Rectangle::area()
{
    return width.getInches() * height.getInches();
}
