#include "Rectangle0.h"

#include <iostream>
using namespace std;

// What if the class definition has no constructors?
// The compiler provides a default constructor that
// initializes the members to JUNK values

// When I pass an object by value, and make changes in the function, do they stick?
void enlargeRectangle(Rectangle r);
void displayRectangle(Rectangle r);

int main()
{
    // create and initialize an object on the stack
    Rectangle rect, rect2; // default constructor
    
    rect.set_values(3, 4); // I can call member functions immediately after creating the object
    cout << "area of rect after assigning values 3,4: " << rect.area()  << endl;
    enlargeRectangle(rect);
    cout << "back in main, after calling enlargeRectangle" << endl;
    displayRectangle(rect);

    rect2=rect; // default assignment operator

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
void enlargeRectangle(Rectangle r)
{
    r.set_height(r.get_height() + 1);
    r.set_width(r.get_width() + 1);
    cout<< "In enlargeRectangle, after enlarging height: " << endl;
    displayRectangle(r);
}