// Assignment 6 - Inheritance and Polymorphism
// Nicholas Noochla-or
// CS 52 Spring 2019

#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"

// constructor/ deconstructor
Rectangle::Rectangle(string n, int num, double l, double w) : Shape(n, num){
    length = l;
    width = w;
}

Rectangle::~Rectangle(){}

// get
double Rectangle::getLength() const{
    return length;
}

double Rectangle::getWidth() const{
    return width;
}

double Rectangle::getArea() const{
    return length * width;
}

// set
void Rectangle::setLength(double l){
    length = l;
}

void Rectangle::setWidth(double w){
    width = w;
}

// helper
double requestRectLength(void){
    double x = 0;
    cout << "   length: ";
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

double requestRectWidth(void){
    double x = 0;
    cout << "   width: ";
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

