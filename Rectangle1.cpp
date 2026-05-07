// Rectangle class implementation file (contains the full-fledged class definition)
// Rectangle.cpp
#include "Rectangle1.h"
#include <iostream>

// DEFINE and initialize static data member 
int Rectangle::copyConstCalls=0; 

double Rectangle::area()
{
  return width * height;
}

void Rectangle::set_values(double x, double y)
{
  width = x;
  height = y;
}