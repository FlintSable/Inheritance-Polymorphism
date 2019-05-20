#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;

// constructor/ deconstructor
Shape::Shape(string s, int n){
    name = s;
    number = n;
}

Shape::~Shape(){}

// get
string Shape::getName() const{
    return name;
}

string Shape::getUniqueName() const{

    return name + to_string(number);
}

// set
void Shape::setName(string s){
    name = s;
}
