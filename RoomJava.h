#include "Rectangle1.h"
/**
 * This class shows composition or the HAS-A relationship
 * Every Room HAS-A Rectangle (the floor of the room is a rectangle)
 */
class Room
{
private:
    Rectangle floor;
    int roomNumber;
    double ceilingHeight;
    int numWindows;
};
What did we do in Java?
public class Room {
    private Rectangle floor;
    private int roomNumber;
    private double ceilingHeight;
    private int numWindows;

    public Room() {
        floor = new Rectangle(); // composition: creating a Rectangle object as a member variable
    }
    public Room(double floorWidth, double floorHeight, int roomNumber, double ceilingHeight, int numWindows) {
        floor = new Rectangle(floorWidth, floorHeight); // composition: creating a Rectangle object as a member variable
        this.roomNumber = roomNumber;
        this.ceilingHeight = ceilingHeight;
        this.numWindows = numWindows;
    }   
}