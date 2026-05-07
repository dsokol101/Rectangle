#include <string>
#include <iostream>

class Shape
{
private:
    std::string color = "blue";
    bool filled = true;
    int lineWidth = 2;

public:
   // Shape() { std::cout << "Shape default constructor called" << std::endl; } 
    Shape(std::string color, bool filled, int lineWidth) : color(color), filled(filled), lineWidth(lineWidth) 
    { 
        std::cout << "Shape parameterized constructor called" << std::endl; 
    }   
    std::string getColor() { return color; }
    void setColor(std::string color) { this->color = color; }
    bool isFilled() { return filled; }
    void setFilled(bool filled) { this->filled = filled; }
    int getLineWidth() { return lineWidth; }
    void setLineWidth(int lineWidth) { this->lineWidth = lineWidth; }
};