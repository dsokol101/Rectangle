#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream> 
/*
inline
default copying
composition
*/ 

class Rectangle
{
private:
  double width=0, height=0; 

public:
  Rectangle(); // function declaration (prototype)
               // this is a default constructor
  // inline constructor
  Rectangle(double w, double h) : width(w), height(h) {}
  // copy constructor
  
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