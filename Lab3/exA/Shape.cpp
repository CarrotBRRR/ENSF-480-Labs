#include "Shape.h"
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

// Constructor
Shape::Shape(const Point& origin, const char* shapeName) : origin(origin) {
    this->shapeName = new char[strlen(shapeName) + 1];
    strcpy(this->shapeName, shapeName);
}

// Copy constructor
Shape::Shape(const Shape& other) : origin(other.origin) {
    if (other.shapeName) {
        shapeName = new char[strlen(other.shapeName) + 1];
        strcpy(shapeName, other.shapeName);
    } else {
        shapeName = nullptr;
    }
}

// Assignment operator
Shape& Shape::operator=(const Shape& other) {
    if (this != &other) {
        delete[] shapeName;

        origin = other.origin;

        if (other.shapeName) {
            shapeName = new char[strlen(other.shapeName) + 1];
            strcpy(shapeName, other.shapeName);
        } else {
            shapeName = nullptr;
        }
    }
    return *this;
}

// Destructor
Shape::~Shape() {
    delete[] shapeName;
}

// Getters
const Point& Shape::getOrigin() const {
    return origin;
}

const char* Shape::getName() const {
    return shapeName;
}

// Display function
void Shape::display() const {
    cout << "Shape Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getX() << endl;
    cout << "Y-coordinate: " << origin.getY() << endl;
}

// Distance function between this shape and another
double Shape::distance(Shape& other) {
    return origin.distance(other.getOrigin());
}

// Distance function between two shapes
double Shape::distance(Shape& shape1, Shape& shape2) {
    return shape1.origin.distance(shape2.origin);
}

// Move function
void Shape::move(double dx, double dy) {
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}
