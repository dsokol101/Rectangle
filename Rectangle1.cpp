// Rectangle class implementation file (contains the full-fledged class definition)
// Rectangle.cpp
#include "Rectangle.h"

// memberwise initialization
// before you enter the body of the constructor, 
// the members are already initialized
Rectangle::Rectangle(): width(1.0), height(1.0) {}

double Rectangle::area()
{
  return width * height;
}

void Rectangle::set_values(double x, double y)
{
  width = x;
  height = y;
}
