/* 3/11/2025
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
using namespace std;

class Rectangle {
  private: 
    double width, height;
  public:
    void set_width(double w) { width = w; }
    void set_height(double h) { height = h; }
    double get_width() { return width; }
    double get_height() { return height; }
    void set_values (double, double);
    double area() {return width*height;}
};

void Rectangle::set_values (double x, double y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect; // creates a Rectangle object on the stack
  rect.set_values (3,4);
  cout << "area of rect: " << rect.area() << endl ;
  Rectangle *rectptr = new Rectangle; // creates a Rectangle object on the heap
  rectptr->set_values (8,10);
  cout << "area of second Rectangle: " << rectptr->area() << endl;
  delete rectptr;
  return 0;
}