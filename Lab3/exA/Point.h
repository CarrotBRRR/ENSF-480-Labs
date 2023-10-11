#ifndef POINT_H
#define POINT_H

class Point {
public:
    // Constructor
    Point(double x, double y);

    // Display function
    void display() const;

    // Getter functions
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    int getId() const;

    // Static function to calculate distance between two points
    static double distance(const Point& p1, const Point& p2);

    // Member function to calculate distance between this point and another point
    double distance(const Point& other) const;

    // Function to get the total count of Point objects
    static int counter();

private:
    double x;
    double y;
    int id;
    static int num;
};

#endif // POINT_H
