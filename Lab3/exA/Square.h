#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public virtual Shape {
public:
    // Constructor
    Square(const Point& origin, double side_a, const char* shapeName);

    // Overloaded Constructor
    Square(double x, double y, double side_a, const char* shapeName);

    // Copy constructor
    Square(const Square& other);

    // Assignment operator
    Square& operator=(const Square& other);

    // Destructor
    ~Square();

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
