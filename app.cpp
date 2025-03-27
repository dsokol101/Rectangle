#include "Rectangle.h"
#include <iostream>
using namespace std;

// When I pass an object by value, and make changes in the function, do they stick?

// Talk about later -- copy constructor

void enlarge_actual(Rectangle& r);
void enlarge_actual(Rectangle* r);
void enlarge(Rectangle r);
int main()
{
    // create and initialize an object on the stack
    Rectangle rect; // default constructor
    rect.set_values(3, 4);
    cout << "area: " << rect.area() << endl;
    
    Rectangle rect2(5, 6);
    rect2=rect; // assignment operator
    // what am I doing and why am I allowed to do it?
    // I am calling the default assignment operator provided by the compiler
    // I am allowed to do it because the compiler provides a default assignment operator
    // that does a memberwise copy
    enlarge(rect);
    cout << "area back in main: " << rect.area() << endl;
    enlarge_actual(rect);
    cout << "area back in main: " << rect.area() << endl;   
    enlarge_actual(&rect);
    cout << "area back in main: " << rect.area() << endl;   
    return 0;
}
// pass by value
void enlarge(Rectangle r) {
    r.set_height(r.get_height() + 2);
    r.set_width(r.get_width() + 2);
    cout << "area in the method: " << r.area() << endl;
}
// pass by pointer
void enlarge_actual(Rectangle* r) {
    r->set_height((*r).get_height() + 2);
    r->set_width(r->get_width() + 2);
    cout << "area in the method: " << r->area() << endl;
}
// pass by reference
void enlarge_actual(Rectangle& r) {
    r.set_height(r.get_height() + 2);
    r.set_width(r.get_width() + 2);
    cout << "area in the method: " << r.area() << endl;
}