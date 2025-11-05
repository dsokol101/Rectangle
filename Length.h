#include <iostream>
#include <cmath>
using namespace std;

class Length
{
private:
    int inches;

public:
    // 1. constructor with one integer parameter
    Length(int inches) : inches(inches) {}

    // 2. display as a number of feet and remaining inches
    // (for example, 30 inches should display as "2 feet 6 inches")
    void display() const {
        int feet = inches / 12;
        int remainingInches = inches % 12;
        cout << feet << " feet " << remainingInches << " inches" << endl;
    }
    // 3. getter for the inches field
    int getInches() const {
        return inches;
    }
    int distance(const Length& other) const {
        return abs(inches - other.inches);
    }   
};
// outside of the class 
int lengthDistance(Length a, Length b) {
    return abs(a.getInches() - b.getInches());
}