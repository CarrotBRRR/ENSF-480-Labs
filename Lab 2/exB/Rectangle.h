#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"

class Rectangle : public Square {
public:
    // Constructor
    Rectangle(const Point& origin, const char* shapeName, double side_a, double side_b);

    // Getter and Setter for side_b
    double getSideB() const;
    void setSideB(double side_b);

    // Area function
    double area() const override;

    // Perimeter function
    double perimeter() const override;

    // Display function
    void display() const override;

private:
    double side_b;
};

#endif // RECTANGLE_H
