// Assignment 6 - Inheritance and Polymorphism
// Nicholas Noochla-or
// CS 52 Spring 2019

#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"

// constructor/ deconstructor
Square::Square(string n, int num, double s) : Shape(n, num){
    side = s;
}
Square::~Square(){}

// get
double Square::getSide() const{
    return side;
}

double Square::getArea() const{
    return side * side;
}

// set
void Square::setSide(double s){
    side = s;
}

// helper
double requestSquareSide(void){
    double x = 0;
    cout << "   side: ";
    cin >> x;
    while(cin.fail() || x <= 0){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Invalid! Must be > 0" << endl;
        cout << "Enter an integer again: ";
        cin >> x;

    }
    return x;
}