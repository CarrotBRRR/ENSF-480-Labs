#include "square.h"
#include <iostream>

// Constructor
Square::Square(const Point& origin, const char* shapeName, double side_a) : Shape(origin, shapeName), side_a(side_a) {
    // Additional initialization specific to Square
}

// Getter for side_a
double Square::getSideA() const {
    return side_a;
}

// Setter for side_a
void Square::setSideA(double side_a) {
    this->side_a = side_a;
}

// Area function
double Square::area() const {
    return side_a * side_a;
}

// Perimeter function
double Square::perimeter() const {
    return 4 * side_a;
}

// Display function
void Square::display() const {
    std::cout << "Square Name: " << getName() << std::endl;
    std::cout << "X-coordinate: " << getOrigin().getX() << std::endl;
    std::cout << "Y-coordinate: " << getOrigin().getY() << std::endl;
    std::cout << "Side a: " << side_a << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;
}
