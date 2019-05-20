#include <iostream>
#include <string>
#include "Shape.h"
#include "Triangle.h"

// constructor/ deconstructor
Triangle::Triangle(string n, int num, double b, double w): Shape(n, num){
    base = b;
    width = w;
}
Triangle::~Triangle(){}

// get
double Triangle::getArea() const{
    return .5 * base * width;
}
double Triangle::getBase(void){
    return base;
};
double Triangle::getWidth(void){
    return width;
};

// set
void Triangle::setBase(double b){
    base = b;
};
void Triangle::setWidth(double w){
    width = w;
};

// helper
double requestTriangleBase(void){
    double x = 0;
    cout << "   base: ";
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

double requestTriangleWidth(void){
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