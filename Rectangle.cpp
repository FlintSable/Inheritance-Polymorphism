#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"


Rectangle::Rectangle(string n, int num, double l, double w) : Shape(n, num){
    length = l;
    width = w;
}

Rectangle::~Rectangle(){}

void Rectangle::setLength(double l){
    length = l;
}

void Rectangle::setWidth(double w){
    width = w;
}

double Rectangle::getLength() const{
    return length;
}

double Rectangle::getWidth() const{
    return width;
}

double Rectangle::getArea() const{
    return length * width;
}

double requestRectLength(void){
    double x = 0;
    cout << "   length: ";
    cin >> x;
    return x;
}
double requestRectWidth(void){
    double x = 0;
    cout << "   width: ";
    cin >> x;
    return x;
}