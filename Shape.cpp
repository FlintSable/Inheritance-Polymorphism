#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;


Shape::Shape(string s, int n){
    name = s;
    number = n;
}

Shape::~Shape(){}


void Shape::setName(string s){
    name = s;
}

string Shape::getName() const{
    return name;
}

string Shape::getUniqueName() const{

    return name + to_string(number);
}

// double Shape::getLength() const{
//     return 0;
// }

// double Shape::getArea() const = 0;

// virtual double Shape::getArea() const = 0;
