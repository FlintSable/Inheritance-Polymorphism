// Assignment 6 - Inheritance and Polymorphism
// Nicholas Noochla-or
// CS 52 Spring 2019

#include <iostream>
#include <string>

class Square : public Shape{
    private:
        double side;
    public:
        // constructor/ deconstructor
        Square(string n, int num, double s);
        ~Square();

        // get
        double getSide() const;
        virtual double getArea() const;

        // set
        void setSide(double s);

};

// helper
double requestSquareSide(void);