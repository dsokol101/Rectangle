#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream> // for std::cout
// the .h file provides the class declaration
// the .cpp file provides the class definition
// the .cpp file includes the .h file

/*
What is the difference between a copy constructor and the operator= ?
The copy constructor is a constructor and operator= is a regular member function
A constructor is called when an object is created, while operator= is called
when an object is assigned the values of an existing object. With the operator= 
the left side is an existing object, while with the copy constructor the left side is a new object.
*/ 

class Rectangle
{
private:
  double width=0, height=0; // show to class on April 1st

public:
  Rectangle(); // function declaration (prototype)
               // this is a default constructor
  // inline constructor
  Rectangle(double w, double h) : width(w), height(h) {}
  // copy constructor
  Rectangle(const Rectangle &other) : width(other.width), height(other.height) 
  { 
    static int count = 0;
    count++;
    std::cout << "Copy constructor called " << count << std::endl; 
  }
  // move constructor
  // this is a constructor that takes an rvalue reference as a parameter
  Rectangle(Rectangle &&other) : width(other.width), height(other.height) 
  { 
    static int count = 0;
    count++;
    std::cout << "Move constructor called " << count << std::endl; 
  }
  // inline member functions
  void set_width(double w) { width = w; }
  void set_height(double h) { height = h; }
  double get_width() { return width; }
  double get_height() { return height; }
  // not inline
  void set_values(double, double);
  double area();
  // overload the assignment operator
  Rectangle &operator=(const Rectangle &other);
};
#endif