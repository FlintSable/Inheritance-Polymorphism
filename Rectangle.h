#include <iostream>
#include <string>

class Rectangle : public Shape{
    private:
        double length, width;
    public:
        Rectangle(string n, int num, double l, double w);
        ~Rectangle();
        void setLength(double l);
        void setWidth(double w);
        double getLength() const;
        double getWidth() const;
        virtual double getArea() const;
};

double requestRectLength(void);
double requestRectWidth(void);