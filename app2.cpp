#include "Rectangle2.h"

#include <iostream>

using namespace std;

int main()
{
    // instantiate 2 Rectangle objects and call the default constructor
    Rectangle rect, rect2;                   // default constructor of Length class also gets called.
    Rectangle rect3(10, 20);                 // parameterized constructor of Length class gets called twice
    Rectangle rect4(Length(15), Length(25)); // parameterized constructor of Length class gets called 4 times

    Rectangle *rectPtr = new Rectangle();
    cout << "Area of object on heap: " << rectPtr->area() << endl;
    // NOTE: the Rectangle class does not have a copy constructor defined
    // however, the following statement will invoke the copy constructor (provided by the compiler)
    // which in turn will invoke the copy constructor of the Length class twice
    Rectangle rect5 = rect3; // copy constructor of Length class gets called twice

    delete rectPtr;
}