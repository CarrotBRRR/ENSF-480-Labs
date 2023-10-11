#include "Circle.h"
#include <iostream>
#include <cmath>
#include <cstring>

// Constructor
Circle::Circle(const Point& origin, double radius, const char* shapeName)
    : Shape(origin, shapeName), radius(radius) {
}

Circle::Circle(double x, double y, double radius, const char* shapeName)
    : Shape(Point(x, y), shapeName), radius(radius) {
}

// Copy constructor
Circle::Circle(const Circle& other) : Shape(other) {
    radius = other.radius;
}

// Assignment operator
Circle& Circle::operator=(const Circle& other) {
    if (this != &other) {
        Shape::operator=(other);
        radius = other.radius;
    }
    return *this;
}

// Getters
double Circle::getRadius() const {
    return radius;
}

// Setters
void Circle::setRadius(double radius) {
    this->radius = radius;
}

// Area function
double Circle::area() const {
    return M_PI * radius * radius;
}

// Perimeter function (circumference)
double Circle::perimeter() const {
    return 2 * M_PI * radius;
}

// Display function
void Circle::display() const {
    std::cout << "Circle Name: " << getName() << std::endl;
    std::cout << "X-coordinate: " << getOrigin().getX() << std::endl;
    std::cout << "Y-coordinate: " << getOrigin().getY() << std::endl;
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Circumference: " << perimeter() << std::endl;
}

// Destructor
Circle::~Circle() {
    // No dynamic memory to release
}
