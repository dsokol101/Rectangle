// composition
// a member variable is an object of another class
// you will be invoking the member object's constructor
// when the containing class's constructor is invoked

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream> 
#include "Length.h"
using namespace std;

class Rectangle
{
private:
  Length width;
  Length height;

public:
// the following default constructor for the Rectangle class invokes the Length
// class constructor twice, once on the width object and once on the height object
  // Rectangle() : width(0), height(0) {}; // width(0) will call parameter constructor of the 
  // Length class, passing 0 as the argument

  Rectangle() {}
  Rectangle(Length w, Length h);
  Rectangle(int w, int h);
  // in java, if you wanted to call a member's constructor with parameters
  // you would do it in the body of the constructor
  // example:
  // Rectangle() {
  //    width = new Length(0);
  //    height = new Length(0);
  // }  

  double area();
};
#endif