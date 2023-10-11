#ifndef CURVECUT_H
#define CURVECUT_H

#include "Rectangle.h"
#include "Circle.h"

class CurveCut : public Rectangle, public Circle {
public:
    // Constructor
    CurveCut(const Point& origin, double side_a, double side_b, 
             double radius, const char* shapeName);

    // Area function
    double area() const;

    // Perimeter function
    double perimeter() const;

    // Display function
    void display() const;

    // Destructor
    ~CurveCut();
};

#endif // CURVECUT_H
