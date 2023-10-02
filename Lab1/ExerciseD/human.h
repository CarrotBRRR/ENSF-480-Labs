#ifndef HUMAN_H
#define HUMAN_H

#include "point.h"

class Human {
private:
    Point *location;   // Location of an object of Human on a Cartisian Plain
    char *name;       // Human's name
    
public:
    Human();
    // PROMISES: Creates an empty Human Object

    Human(const char* nam, double x, double y);
    // PROMISES: Creates a Human object with Name nam and 
    // at a location with at x and y

    ~Human();
    // Destroys Human

    Human(const Human& source);
    // Copy Constructor

    Human& operator= (const Human& rhs);
    // Assignment operator
    
    char* get_name() const;
    // PROMISES: returns pointer to name
            
    void set_name(char* name);

    // REQUIRES: Pointer to character name
    // PROMISES: Copies characters in name to name

    Point* get_point() const;
    // Returns Point object pointer of the Human
    
    void display();
    // Prints Name and Location

    void copy(const Human& source);
    // copy function

    void destroy();
};

#endif