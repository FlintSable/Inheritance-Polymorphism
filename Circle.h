#include <iostream>
#include <string>
// #include "Shape.h"

class Circle : public Shape{
    private:
        double radius;

    public:
        Circle(string n, double r);
        ~Circle();
        void setRadius(double r);
        double getRadius() const;
        virtual double getArea() const;
};