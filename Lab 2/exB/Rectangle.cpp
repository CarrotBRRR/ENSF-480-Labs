#include "Rectangle.h"
#include <iostream>

// Constructor
Rectangle::Rectangle(const Point& origin, double side_a, double side_b, const char* shapeName)
    : Square(origin, side_a, shapeName), side_b(side_b) {
    // Additional initialization specific to Rectangle
}

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char* shapeName)
    : Square(Point(x,y), side_a, shapeName), side_b(side_b) {
    // Additional initialization specific to Rectangle
}

//Copy Constructor
Rectangle::Rectangle(const Rectangle& other) : Square(other) {
    side_b = other.side_b;
}

// Assignment operator
Rectangle& Rectangle::operator=(const Rectangle& other) {
    if (this != &other) {
        // Call the base class (Square) assignment operator
        Square::operator=(other);

        // Copy the specific attributes of Rectangle
        side_b = other.side_b;
    }
    return *this;
}

// Destructor
Rectangle::~Rectangle() {
    // No dynamic memory to release
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
