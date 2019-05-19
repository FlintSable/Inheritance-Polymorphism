#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"

using namespace std;

Circle::Circle(string n, int num, double r) : Shape(n, num){
    radius = r;
}

Circle::~Circle(){}

void Circle::setRadius(double r){
    radius = r;
}

double Circle::getRadius() const{
    return radius;
}

double Circle:: getArea() const{
    return 3.14159 * radius * radius;
}