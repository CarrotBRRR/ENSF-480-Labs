#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Square.h"

class Rectangle : public virtual Square {
public:
    // Constructors
    Rectangle(const Point& origin, double side_a, double side_b, const char* shapeName);

    Rectangle(double x, double y, double side_a, double side_b, const char* shapeName);

    // Copy constructor
    Rectangle(const Rectangle& other);

    // Assignment operator
    Rectangle& operator=(const Rectangle& other);

    // Destructor
    ~Rectangle();

    // Getter and Setter for side_b
    double getSideB() const;
    void setSideB(double side_b);

    // Area function
    double area() const;

    // Perimeter function
    double perimeter() const;

    // Display function
    void display() const;

private:
    double side_b;
};

#endif // RECTANGLE_H
