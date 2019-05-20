#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"

using namespace std;
// constructor/ deconstructor
Circle::Circle(string n, int num, double r) : Shape(n, num){
    radius = r;
}

Circle::~Circle(){}

// get
double Circle::getRadius(void){
    return radius;
}

double Circle::getArea() const{
    return 3.14159 * (radius * radius);
}

// set
void Circle::setRadius(double r){
    radius = r;
}

// helper
double requestCircleRadius(void){

    double x = 0; 
    cout << "   radius: ";
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
