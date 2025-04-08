#include "Rectangle.h"
#include <iostream>
using namespace std;

// When I pass an object by value, and make changes in the function, do they stick?

// Talk about later -- copy constructor

void enlarge_actual(Rectangle& r);
void enlarge_actual(Rectangle* r);
void enlarge(Rectangle r);
Rectangle* getRectangle9x9PtrFixed();

int main()
{
    // create and initialize an object on the stack
    Rectangle rect; // default constructor
    rect.set_values(3, 4);
    cout << "area: " << rect.area() << endl;
    
    // 3 ways of initializing a Rectangle object to another Rectangle object
    // all 3 ways are invoking the copy constructor
    Rectangle rect2(rect); // copy constructor
    Rectangle rect3 = rect; // copy constructor
    Rectangle rect4{rect}; // copy constructor
    // Rectangle rect5 = {rect}; // copy constructor
    Rectangle rect6 = Rectangle(5, 6); // move constructor
    // initialize a Rectangle object to a temporary Rectangle object

   // Rectangle* rect8 = new Rectangle(10, 60);

    rect2=rect; // assignment operator
    // what am I doing and why am I allowed to do it?
    // I am calling the default assignment operator provided by the compiler
    // I am allowed to do it because the compiler provides a default assignment operator
    // that does a memberwise copy
    enlarge(rect); // copy constructor gets called to copy the parameter
    // object rect into the function parameter r
    // only pass by value causes the copy constructor to be called
    cout << "area back in main: " << rect.area() << endl;
    enlarge_actual(rect);
    cout << "area back in main: " << rect.area() << endl;   
    enlarge_actual(&rect);
    cout << "area back in main: " << rect.area() << endl;   

    Rectangle* rectPtr = getRectangle9x9PtrFixed();
    cout << "width: " << rectPtr->get_width() << endl;
    cout << "height: " << rectPtr->get_height() << endl;
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
// return a Rectangle object by value
Rectangle getRectangle9x9() {
    return Rectangle(9,9);
}
// BOTH OF THESE FUNCTIONS HAVE A DANGEROUS PROBLEM
// IT WILL BE A RUNTIME ERROR, THE COMPILER GIVES A WARNING, NOT AN ERROR
// return a Rectangle object by reference
Rectangle& getRectangle9x9Ref() {
    Rectangle r(9,9);
    return r; // this is a dangling reference
}
// return a Rectangle object by pointer
Rectangle* getRectangle9x9Ptr() {
    Rectangle r(9,9); // creates automatic storage Rectangle on the stack
    // r is popped with the stack frame when the function returns
    return &r; // this is a dangling pointer
}
// A FIXED VERSION
// return a Rectangle object by reference
Rectangle* getRectangle9x9PtrFixed() {
    return new Rectangle(9,9); 
}