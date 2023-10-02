#ifndef POINT_H
#define POINT_H

class Point{
private:
    double x;     // x coordinate of a location on Cartisian Plain
    double y;     // y coordinate of a location on Cartisian Plain
public:
    Point();
    // PROMISES: Empty Point object is created
    
    ~Point();

    Point(double a, double b);
    // PROMISES: Creates a point with points a in x and b in y

    Point(const Point& source);
    // copy constructor

    Point& operator =(const Point& rhs);
    // Assignment operator
    // REQUIRES rhs is reference to a Point as a source
    // PROMISES: to make this-object (object that this is pointing to a copy of rhs)
    
    double get_x() const;
    // PROMISES: returns value of x
       
    double get_y() const;
    // PROMISES: returns value of y
                           
    void set_x(double a);
    // REQUIRES: double value parameter
    // PROMISES: Sets value of x to a
    
    void set_y(double a);
    // REQUIRES: double value parameter
    // PROMISES: Sets value of y to a

    void copy(const Point& source);
};

#endif