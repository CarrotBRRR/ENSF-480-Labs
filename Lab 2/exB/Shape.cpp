#include "shape.h"
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

// Constructor
Shape::Shape(const Point& origin, const char* shapeName) : origin(origin) {
    // Allocate memory for shapeName and copy the provided name
    this->shapeName = new char[strlen(shapeName) + 1];
    strcpy(this->shapeName, shapeName);
}

// Destructor
Shape::~Shape() {
    delete[] shapeName; // Deallocate the dynamically allocated memory for shapeName
}

// Getter for origin (reference to a const Point)
const Point& Shape::getOrigin() const {
    return origin;
}

// Getter for shapeName
const char* Shape::getName() const {
    return shapeName;
}

// Display function
void Shape::display() const {
    cout << "Shape Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getX() << endl;
    cout << "Y-coordinate: " << origin.getY() << endl;
}

// Distance function between two shapes
double Shape::distance(Shape& other) {
    return origin.distanceTo(other.getOrigin());
}

// Static distance function between two shapes
double Shape::distance(Shape& shape1, Shape& shape2) {
    return shape1.origin.distanceTo(shape2.origin);
}

// Move function
void Shape::move(double dx, double dy) {
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}
