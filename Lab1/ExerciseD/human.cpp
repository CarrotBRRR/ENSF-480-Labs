#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "human.h"
#include "point.h"

using namespace std;

Human::Human() {
    name = nullptr;
    location = new Point();
}

Human::Human(const char* nam, double x, double y){
    name = new char[strlen(nam)+1];
    strcpy(this->name, nam);
    location = new Point(x,y);
}

Human::~Human() {
    destroy();
}

Human::Human(const Human& source) {
    copy(source);
}

char* Human::get_name() const {
    return name;
} 
        
void Human::set_name(char* name) {                  
    char* nam = new char[strlen(name)+1];        
    strcpy(this->name, nam);
}

Point* Human::get_point() const {
    return location;
}

void Human::display() {                      
    cout << "Human Name: " << name << "\nHuman Location: "
    << location->get_x() << ", "
    << location->get_y() << ".\n" << endl;

};

void Human::copy(const Human& source) {
    this->location = new Point(*source.get_point());
    this->name = new char[strlen(source.get_name())+1]; 
    strcpy(this->name, source.get_name());
    
}

void Human::destroy() {
    delete location;
    delete[] name;
}