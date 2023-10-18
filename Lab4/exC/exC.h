#include <string>

#ifndef EXC_H
#define EXC_H

using namespace std;

class Moveable{
    public:
        virtual void forward();
        virtual void backward();
};

class Resizeable{
    public:
        virtual void enlarge(int n);
        virtual void shrink(int n);
};

class Vehicle : public Moveable, public Resizeable{
    protected:
        string name;
    public:
        Vehicle(string name);

        void move();
        void forward() override;
        void backward() override;
        
        void enlarge(int n) override;
        void shrink(int n) override;
};

class Car : public Vehicle {
    private:
        int seats;
    public:
        void turn();
};

#endif