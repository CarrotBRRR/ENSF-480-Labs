#ifndef CIRCLE_H
#define CIRCLE_H

#define M_PI 3.14159265358979323846

#include "Shape.h"

class Circle : public virtual Shape {
private:
    double radius;

public:
    // Constructors
    Circle(const Point& origin, double radius, const char* shapeName);
    Circle(double x, double y, double radius, const char* shapeName);

    // Copy constructor
    Circle(const Circle& other);

    // Assignment operator
    Circle& operator=(const Circle& other);

    // Getters
    double getRadius() const;

    // Setters
    void setRadius(double radius);

    // Area function
    double area() const;

    // Perimeter function (circumference)
    double perimeter() const;

    // Display function
    void display() const;

    // Destructor
    ~Circle();
};

#endif // CIRCLE_H
