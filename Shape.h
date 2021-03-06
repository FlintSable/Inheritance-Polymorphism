// Assignment 6 - Inheritance and Polymorphism
// Nicholas Noochla-or
// CS 52 Spring 2019

#include <iostream>
#include <string>

using namespace std;

class Shape{
    protected:
        string name;
        int number;
    public:
        // constructor/ deconstructor
        Shape(string s, int n);
        virtual ~Shape();
        void setName(string s);
        
        // get
        string getName() const;
        string getUniqueName() const;
        // pure virtual function
        virtual double getArea() const = 0;

};