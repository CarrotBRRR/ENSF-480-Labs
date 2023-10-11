#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

// Global ID Starting Point
int Point::num = 1000;

// Constructor
Point::Point(double xi, double yi){
    x = xi;
    y = yi;
    id = num++;
}

// Display function
void Point::display() const {
    cout << "X-coordinate: " << x << endl;
    cout << "Y-coordinate: " << y << endl;
}

// Getters
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

int Point::getId() const {
    return id;
}

// Setters
void Point::setX(double x){
    this->x = x;
}

void Point::setY(double y){
    this->y = y;
}

// Distance between 2 points
double Point::distance(const Point& p1, const Point& p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

// Distance between this Point and another
double Point::distance(const Point& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

// Shape Count = Global IDs - 1000
int Point::counter() {
    return num - 1000;
}
