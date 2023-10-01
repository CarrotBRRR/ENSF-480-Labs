#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"
using namespace std;

class Shape {
public:
    // Constructor
    Shape(const Point& origin, const char* shapeName);

    // Destructor
    ~Shape();

    // Getter for origin (reference to a const Point)
    const Point& getOrigin() const;

    // Getter for shapeName
    const char* getName() const;

    // Display function
    void display() const;

    // Distance function between two shapes
    double distance(Shape& other);

    // Static distance function between two shapes
    static double distance(Shape& shape1, Shape& shape2);

    // Move function
    void move(double dx, double dy);

private:
    Point origin;
    char* shapeName;
};

#endif // SHAPE_H
