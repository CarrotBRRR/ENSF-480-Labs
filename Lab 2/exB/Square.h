#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
public:
    // Constructor
    Square(const Point& origin, const char* shapeName, double side_a);

    // Getter and Setter for side_a
    double getSideA() const;
    void setSideA(double side_a);

    // Area function
    virtual double area() const;

    // Perimeter function
    virtual double perimeter() const;

    // Display function
    virtual void display() const;

protected:
    double side_a;
};

#endif // SQUARE_H
