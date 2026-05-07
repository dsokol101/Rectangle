/* 
   a class in C++ gives you a new data type
   members are private by default
   it gives the language the OOP paradigm
   
   There are 3 parts to the code is in the file:
   1. The class declaration -- the description of the class
      you do not have to put any code into the class declaration
      if you want, you can and those are called "inline functions"
      inline functions are defined in the class declaration
   2. The class definition -- the code that implements
      the class
      We use the scope resolution operator :: when defining the function
      outside of the class. The operator in a sense puts you in the scope
      of the class. Notice that you can access private members.
    3. The main function -- the code that uses the class 
   */
#include <iostream>
#include "Rectangle0.h"

// constructors

Rectangle::Rectangle() {
  width = 0;
  height = 0;
}
Rectangle::Rectangle(const Rectangle &other) {
  cout << "In copy constructor" << endl;
  this->width = other.width;
  this->height = other.height;
}
Rectangle::Rectangle(double width, double height) {
  // this is a pointer to the receiver object, the object that is calling the function
  this->width = width;
  this->height = height;
}

void Rectangle::set_width(double w) {
  width = w;
}

void Rectangle::set_height(double h) {
  height = h;
}
double Rectangle::get_width() {
  return width;
}  
double Rectangle::get_height() {
  return height;
}  
void Rectangle::set_values (double x, double y) {
  width = x;
  height = y;
}
double Rectangle::area() {
  return width * height;
}
