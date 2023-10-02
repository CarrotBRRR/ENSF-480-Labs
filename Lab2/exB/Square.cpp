#include "square.h"
#include <iostream>

// Constructor
Square::Square(const Point& origin, double side_a, const char* shapeName): Shape(origin, shapeName), side_a(side_a) {
}

Square::Square(double x, double y, double side_a, const char* shapeName): Shape(Point(x, y), shapeName), side_a(side_a) {
}

// Copy constructor
Square::Square(const Square& other) : Shape(other) {
    // Copy any dynamic resources from 'other' to this object (if any)
    side_a = other.side_a;
}

// Assignment operator
Square& Square::operator=(const Square& other) {
    if (this != &other) {
        Shape::operator=(other);
        side_a = other.side_a;
    }
    return *this;
}

// Destructor
Square::~Square() {
    // Nothing to Release
}

// Getters
double Square::getSideA() const {
    return side_a;
}

// Setters
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
