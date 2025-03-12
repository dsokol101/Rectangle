#ifndef RECTANGLE_H
#define RECTANGLE_H
// the .h file provides the class declaration
// the .cpp file provides the class definition
// the .cpp file includes the .h file

class Rectangle {
  private: 
    double width, height;
  public:
    Rectangle();
    Rectangle(double w, double h): width(w), height(h) {};
    void set_width(double w);
    void set_height(double h);
    double get_width();
    double get_height();
    void set_values (double, double);
    double area();
};
#endif