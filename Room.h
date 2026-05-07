#include "Rectangle1.h"
/**
 * This class shows composition or the HAS-A relationship
 * Every Room HAS-A Rectangle (the floor of the room is a rectangle)
 */
class Room
{
private:
    Rectangle floor;
    int roomNumber = 0;
    double ceilingHeight = 0.0;
    int numWindows = 0;

public:
    Room() {} // default constructor
    // floor with be "default initialized" which means that the default constructor of the Rectangle class will be called.
    Room(double floorWidth, double floorHeight, int roomNumber, double ceilingHeight, int numWindows) : floor(floorWidth, floorHeight), roomNumber(roomNumber), ceilingHeight(ceilingHeight), numWindows(numWindows)
    {
    } // member initialization list
    Room(Rectangle floor, int roomNumber, double ceilingHeight, int numWindows) : floor(floor), roomNumber(roomNumber), ceilingHeight(ceilingHeight), numWindows(numWindows)
    {
    } // member initialization list with copy constructor of Rectangle class
    /** we do not need to write a copy constructor for the Room class since it does not have pointers.

     The default copy constructor will do a member-wise copy which actually calls the copy constructor of the Rectangle class, and that    is sufficient for the Room class.
     ***/
    // getters
    // return the floor object by value (not by reference) which means that a copy of the floor object will be returned. This will call the copy constructor of the Rectangle class.
    Rectangle getFloor() { return floor; }
    // setter
    void setFloor(const Rectangle &floor) { this->floor = floor; } // this will call the copy constructor of the Rectangle class
    void setFloorWidth(double width)
    {
        // not allowed since width is private to // class Rectangle:    floor.width=width;
        floor.set_width(width);
    } // this will call the set_width function of the Rectangle class -- called delegation
};