// Assignment 6 - Inheritance and Polymorphism
// Nicholas Noochla-or
// CS 52 Spring 2019

#include <iostream>
#include <string>

class Circle : public Shape{
    private:
        double radius;

    public:
        // contructor/ deconstructor
        Circle(string n, int num, double r);
        ~Circle();
        // get
        double getRadius(void);
        virtual double getArea() const;
        // set
        void setRadius(double r);
};
// helper
double requestCircleRadius(void);