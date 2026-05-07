#include "Rectangle1.h"

#include <iostream>

using namespace std;

// What if the class definition has no constructors?
// The compiler provides a default constructor that
// initializes the members to JUNK values
// What if the class definition has only a parameterized constructor?
// The compiler does NOT provide a default constructor

// When I pass an object by value, and make changes in the function, do they stick?
void enlargeRectangle(Rectangle r);
void displayRectangle(Rectangle r);

int main()
{
    // create and initialize an object on the stack
    Rectangle rect, rect2; // default constructor
    
   // rect.set_values(3, 4);
    cout << "area of rect before assigning any values: " << rect.area()  << endl;
    enlargeRectangle(rect);
    cout << "back in main, after calling enlargeRectangle" << endl;
    displayRectangle(rect);

    // the following 3 all do the same thing which is call the copy constructor
    cout << "COPY CONSTRUCTOR TESTS" << endl;
    Rectangle rect3(rect);
    //Rectangle rect3=rect; // identical to above
    // Rectangle rect3{rect}; // identical to above

    rect3.setColor("green");
    rect2=rect; // default assignment operator

    // create and initialize an object on the heap
    Rectangle *pRect = new Rectangle(); // default constructor
    pRect -> set_height(5);
    pRect -> set_width(6);
    cout << "area: " << pRect -> area() << endl;
    delete pRect; // free the memory
    cout << " in the end there are " << Rectangle::copyConstCalls << " copy constructor calls" << endl; 
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