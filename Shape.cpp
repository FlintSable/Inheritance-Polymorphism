#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;


Shape::Shape(string s){
    name = s;
}

Shape::~Shape(){}


void Shape::setName(string s){
    name = s;
}

string Shape::getName() const{
    return name;
}

double Shape::getLength() const{
    return 0;
}

// double Shape::getArea() const = 0;

// virtual double Shape::getArea() const = 0;
