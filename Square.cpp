#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"


Square::Square(string n, int num, double s) : Shape(n, num){
    side = s;
}

Square::~Square(){}

void Square::setSide(double s){
    side = s;
}

double Square::getSide() const{
    return side;
}


double Square::getArea() const{
    return side * side;
}

double requestSquareSide(void){
    double x = 0;
    cout << "   side: ";
    cin >> x;
    return x;
}