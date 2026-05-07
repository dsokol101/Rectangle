#ifndef RECTANGLE0_H
#define RECTANGLE0_H 

/* a class in C++ gives you a new data type
   members are private by default
   it gives the language the OOP paradigm
   
   The .h file contains the class declaration
   Note all the functions are PROTOTYPES, i.e. declarations only no function bodies
   The .cpp file contains the class DEFINITION, i.e. the function bodies
   */
   
#include <iostream>
using namespace std;

class Rectangle {
  // state - member variables - fields - attributes
  private: 
    double width, height; // no memory allocated from this stmt
  // behavior - member functions - methods - services
  public:
    Rectangle(); // default constructor
    Rectangle(const Rectangle &r);// copy constructor, takes a reference to an object of the same class
    Rectangle(double w, double h); 
    void set_width(double w);
    void set_height(double h);
    double get_width();
    double get_height();
    void set_values (double, double);
    double area();
};
#endif