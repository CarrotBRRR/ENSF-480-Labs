#include "CurveCut.h"
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

// Constructor
CurveCut::CurveCut(const Point& origin, double width, double length, double radius, const char* shapeName)
    : Rectangle(origin, width, length, shapeName), Circle(origin, radius, shapeName), Shape(origin, shapeName){
    // Check if the radius is valid
    if (radius > min(width, length)) {
        cerr << "Error: The radius must be less than or equal to the smaller of width and length." << endl;
        exit(1); // Terminate the program
    }
}

CurveCut::CurveCut(double x, double y, double width, double length, double radius, const char* shapeName)
    : CurveCut(Point(x, y), width, length, radius, shapeName){
    // Check if the radius is valid
    if (radius > min(width, length)) {
        cerr << "Error: The radius must be less than or equal to the smaller of width and length." << endl;
        exit(1); // Terminate the program
    }
}

CurveCut& CurveCut::operator=(const CurveCut& other) {
    if (this != &other) {
        Rectangle::operator=(other);
        Circle::operator=(other);
    }
    return *this;
}


// Area function
double CurveCut::area() const {
    double rectArea = this->getSideA() * this->getSideB();
    double circleArea = M_PI * this->getRadius() * this->getRadius();
    return rectArea - circleArea/4;
}

const char* CurveCut::getName(){
    return Rectangle::getName();
}

// Perimeter function
double CurveCut::perimeter() const {
    double rectPerimeter = 2 * (this->getSideA() + this->getSideB());
    double circlePerimeter = 1/2 * M_PI * this->getRadius();
    return (rectPerimeter - 2*this->getRadius()) + circlePerimeter/4;
}

double CurveCut::distance(Shape& other) const {
    return Rectangle::getOrigin().distance(other.getOrigin());
}

// Display function
void CurveCut::display() const {
    cout << "CurveCut Name: " << Rectangle::getName() << endl;
    cout << "X-coordinate: " << Rectangle::getOrigin().getX() << endl;
    cout << "Y-coordinate: " << Rectangle::getOrigin().getY() << endl;
    cout << "Width: " << getSideA() << endl;
    cout << "Length: " << getSideB() << endl;
    cout << "Radius of the cut: " << getRadius() << endl;
}

// Destructor
CurveCut::~CurveCut() {
    // No dynamic memory to release
}
