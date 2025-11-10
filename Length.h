#ifndef LENGTH_H
#define LENGTH_H

#include <iostream>
#include <cmath>
using namespace std;

class Length
{
private:
    int inches;

public:
    // 1. constructor with one integer parameter
    Length(int inches) : inches(inches) {
        cout << "Length parameter constructor called " << this << endl;
    }
    Length() : inches(0) { cout<<"Length default constructor called " << this << endl; }

    Length(const Length& other) : inches(other.inches) {
        cout << "Length copy constructor called " << this << endl;
    }   
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
#endif