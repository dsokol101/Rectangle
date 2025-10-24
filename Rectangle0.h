/*   a class in C++ gives you a new data type
   members are private by default
   it gives the language the OOP paradigm
   
   The .h file contains the class declaration
   Note all the functions are PROTOTYPES, i.e. declarations only no function bodies
   The .cpp file contains the class DEFINITION, i.e. the function bodies
   */
   
#include <iostream>
using namespace std;

class Rectangle {
  private: 
    double width, height;
  public:
    void set_width(double w);
    void set_height(double h);
    double get_width();
    double get_height();
    void set_values (double, double);
    double area();
};
