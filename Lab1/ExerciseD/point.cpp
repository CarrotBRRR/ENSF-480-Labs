#include <iostream>
#include <stdlib.h>
#include "point.h"

using namespace std;

Point::Point()
    : x(0), y(0)
{
}

Point::Point(double a, double b)
    : x(a), y(b)
{
}

Point::~Point() {
}

Point::Point(const Point& source) {
    copy(source);
}

Point& Point::operator =(const Point& rhs) {
    if(this != &rhs) {
        copy(rhs);
    }
    return *this;
}

double Point::get_x() const {
    return x;
}

double Point::get_y() const {
    return y;
}

void Point::set_x(double a) {
    x = a;
}

void Point::set_y(double a) {
    y = a;
}

void Point::copy(const Point& source) {
    this->x = source.get_x();
    this->y = source.get_y();
}