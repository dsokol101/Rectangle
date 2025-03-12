// Rectangle class implementation file (contains the full-fledged class definition)
// Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle(): width(1.0), height(1.0) {}
void Rectangle::set_width(double w) { width = w; }
void Rectangle::set_height(double h) { height = h; }
double Rectangle::get_width() { return width; }
double Rectangle::get_height() { return height; }
double Rectangle::area()
{
  return width * height;
}

void Rectangle::set_values(double x, double y)
{
  width = x;
  height = y;
}
