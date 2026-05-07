#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include <iostream>
using namespace std;

class Rectangle : public Shape
{
private:
  double width = 0, height = 0; // you are allowed to
  // initialize members at the point of declaration (since C++11)

public:
  static int copyConstCalls; // count copy constructor calls
  // since C++17 you are also allowed to:
  // static inline int copyConstCalls=0; // define and initialize static data member
  Rectangle()  {}// this is a default constructor.
  // every constructor that does not invoke a parent class constructor, will call the default constructor of the parent class (if it exists) as in : Shape()
  Rectangle(double w, double h): width(w), height(h) {} 
  Rectangle(std::string color, bool filled, int lineWidth, double w, double h) : Shape(color, filled, lineWidth), width(w), height(h) {} 
  // in java, you call super(color, filled, lineWidth) to call the parent class constructor
  Rectangle(const Rectangle &other) : width{other.width}, height{other.height}
  {
    cout << "Copy constructor called" << endl;
    copyConstCalls++;
  } // (default) copy constructor
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