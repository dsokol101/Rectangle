#ifndef RECTANGLE_H
#define RECTANGLE_H
// the .h file provides the class declaration
// the .cpp file provides the class definition
// the .cpp file includes the .h file

/**
 * constructors:
 * 1. have the same name as a classs
 * 2. do not have a return type
 * 3. are used to initialize objects
 * 4. are called automatically when an object is created
 * 5. If you do not write any constructor, the compiler
 * will write a default constructor for you
 * These 5 points are identical to Java constructors
 *
 What is new or different from Java?
 1. memberwise initialization
 2. default constructor's behavior is different:
    in Java, the default constructor initializes all
    instance variables to 0, null, false
    in C++, the default constructor, default initializes
    all instance variables
    meaning: fundamenatal types are not initialized
    and objects are initialized by their default constructor
 */

class Rectangle
{
private:
  double width, height;

public:
  Rectangle(); // function declaration (prototype)
               // this is a default constructor
  // inline constructor
  Rectangle(double w, double h) : width(w), height(h) {}
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