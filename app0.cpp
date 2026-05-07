#include "Rectangle0.h"

#include <iostream>
using namespace std;

// What if the class definition has no constructors?
// The compiler provides a default constructor that
// initializes the members to JUNK values

// When I pass an object by value, and make changes in the function, do they stick?
void enlargeRectangle(Rectangle r);
void enlargeRectangleActual(Rectangle &r); // pass by reference, changes will stick
void displayRectangle(Rectangle r);

int main()
{
    // create and initialize an object on the stack
    Rectangle rect, rect2; // default constructor
    
    rect.set_values(3, 4); // I can call member functions immediately after creating the object
    cout << "area of rect after assigning values 3,4: " << rect.area()  << endl;
    
    // can i invoke operator = if it was not written in the class definition? 
    // YES, the compiler provides a default assignment operator 
    // which copies the values of the members from one object to another
    // called: memberwise copy
    rect2=rect; // default assignment operator

    Rectangle rect3{rect}; // copy constructor, also does memberwise copy
    // the following 2 are identical
    // Rectangle rect3 = rect; // also calls the default copy constructor
    // Rectangle rect3(rect); // also calls the default copy constructor
    
    // passing an object as a parameter BY VALUE
    // a copy is made by the copy constructor
    // and therefore the changes will not affect rect here
    enlargeRectangle(rect);
    cout << "back in main, after calling enlargeRectangle" << endl;
    displayRectangle(rect);

    enlargeRectangleActual(rect);
    cout << "back in main, after calling enlargeRectangleActual" << endl;
    displayRectangle(rect);

    // create and initialize an object on the heap
    Rectangle *pRect = new Rectangle(); // default constructor
    pRect -> set_height(5);
    pRect -> set_width(6);
    cout << "area: " << pRect -> area() << endl;
    delete pRect; // free the memory
    return 0;
}
void displayRectangle(Rectangle r)
{
    cout << "In displayRectangle, height: " << r.get_height() << " width: " << r.get_width() << endl;
}
// pass by reference, changes will stick
void enlargeRectangleActual(Rectangle &r)
{
    r.set_height(r.get_height() + 1);
    r.set_width(r.get_width() + 1);
}
// pass by value, changes will not stick
void enlargeRectangle(Rectangle r)
{
    r.set_height(r.get_height() + 1);
    r.set_width(r.get_width() + 1);
    cout<< "In enlargeRectangle, after enlarging height: " << endl;
    displayRectangle(r);
}