#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream> 
using namespace std;
/**
 * include guards
 * inline functions
 * member initialization
 */
class Rectangle
{
private:
  double width=0, height=0; // show to class on April 1st

public:
 Rectangle();// function declaration (prototype)
               // this is a default constructor
  // inline constructor
  Rectangle(double w, double h) : width{w}, height{h} {}
  // copy constructor with same behavior as default copy constructor
  Rectangle(const Rectangle& other) : width{other.width}, height{other.height} {
    cout << "Copy constructor called" << endl;
  } // default copy constructor
  // inline member functions
  void set_width(double w) { width = w; }
  void set_height(double h) { height = h; }
  double get_width() { return width; }
  double get_height() { return height; }
  // not inline
  void set_values(double, double);
  double area();
};
#endif