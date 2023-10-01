#include "rectangle.h"
#include <iostream>

// Constructor
Rectangle::Rectangle(const Point& origin, const char* shapeName, double side_a, double side_b)
    : Square(origin, shapeName, side_a), side_b(side_b) {
    // Additional initialization specific to Rectangle
}

// Getter for side_b
double Rectangle::getSideB() const {
    return side_b;
}

// Setter for side_b
void Rectangle::setSideB(double side_b) {
    this->side_b = side_b;
}

// Area function
double Rectangle::area() const {
    return side_a * side_b;
}

// Perimeter function
double Rectangle::perimeter() const {
    return 2 * (side_a + side_b);
}

// Display function
void Rectangle::display() const {
    std::cout << "Rectangle Name: " << getName() << std::endl;
    std::cout << "X-coordinate: " << getOrigin().getX() << std::endl;
    std::cout << "Y-coordinate: " << getOrigin().getY() << std::endl;
    std::cout << "Side a: " << side_a << std::endl;
    std::cout << "Side b: " << side_b << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;
}
