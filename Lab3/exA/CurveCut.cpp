#include "CurveCut.h"
#include <iostream>
#include <cmath>
#include <cstring>

// Constructor
CurveCut::CurveCut(const Point& origin, double width, double length, double radius, const char* shapeName)
    : Rectangle(origin, width, length, shapeName), Circle(origin, radius, shapeName) {
    // Check if the radius is valid
    if (radius > std::min(width, length)) {
        std::cerr << "Error: The radius must be less than or equal to the smaller of width and length." << std::endl;
        exit(1); // Terminate the program
    }
}

// Area function
double CurveCut::area() const {
    double rectArea = this->getSideA() * this->getSideB();
    double circleArea = M_PI * this->getRadius() * this->getRadius();
    return rectArea - circleArea/4;
}

// Perimeter function
double CurveCut::perimeter() const {
    double rectPerimeter = 2 * (this->getSideA() + this->getSideB());
    double circlePerimeter = 1/2 * M_PI * this->getRadius();
    return (rectPerimeter - 2*this->getRadius()) + circlePerimeter;
}

// Display function
void CurveCut::display() const {
    std::cout << "CurveCut Name: " << getName() << std::endl;
    std::cout << "X-coordinate: " << getOrigin().getX() << std::endl;
    std::cout << "Y-coordinate: " << getOrigin().getY() << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "Length: " << length << std::endl;
    std::cout << "Radius of the cut: " << radius << std::endl;
}

// Destructor
CurveCut::~CurveCut() {
    // No dynamic memory to release
}
