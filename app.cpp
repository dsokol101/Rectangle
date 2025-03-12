#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
    Rectangle rect{3, 4};
    //  rect.set_values(3, 4);
    cout << "area: " << rect.area() << endl;

    Rectangle *rectptr = new Rectangle{8, 10};
    cout << "area of second Rectangle: " << rectptr->area();
    delete rectptr;
    return 0;
}