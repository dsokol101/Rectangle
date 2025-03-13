#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
    // create and initialize an object on the stack
    Rectangle rect;
    //  rect.set_values(3, 4);
    cout << "area: " << rect.area() << endl;
    // create and initialize an object on the heap
    Rectangle *rectptr = new Rectangle;
    cout << "area of second Rectangle: " << rectptr->area();
    delete rectptr;
    return 0;
}