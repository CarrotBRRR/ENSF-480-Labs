#ifndef CURVECUT_H
#define CURVECUT_H

#include "Rectangle.h"
#include "Circle.h"

class CurveCut : public Rectangle, public Circle{
public:
    // Constructor
    CurveCut(const Point& origin, double side_a, double side_b, 
             double radius, const char* shapeName);

    CurveCut(double x, double y, double width, double length, double radius, const char* shapeName);

    CurveCut& operator=(const CurveCut& other);
    // Area function
    double area() const;

    const char* getName();

    // Perimeter function
    double perimeter() const;

    double distance(Shape &other) const;

    // Display function
    void display() const;

    // Destructor
    ~CurveCut();
};

#endif // CURVECUT_H
