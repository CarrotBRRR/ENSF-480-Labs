#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"
using namespace std;

class Shape {
public:
    // Constructor
    Shape(const Point& origin, const char* shapeName);

    // Copy constructor
    Shape(const Shape& other);

    // Assignment operator
    Shape& operator=(const Shape& other);

    // Destructor
    ~Shape();

    // Getter for origin (reference to a const Point)
    const Point& getOrigin() const;

    // Getter for shapeName
    const char* getName() const;

    // Display function
    virtual void display() const;

    virtual double area() const = 0;
    virtual double perimeter() const = 0;

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
