// Rectangle class implementation file (contains the full-fledged class definition)
// Rectangle.cpp
#include "Rectangle.h"
#include <iostream>
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
Rectangle& Rectangle::operator=(const Rectangle &other)
  {
    std::cout << "Assignment operator called" << std::endl;
    if (this != &other)
    { // check for self-assignment
      width = other.width;
      height = other.height;
    }
    return *this; // return the current object
  }