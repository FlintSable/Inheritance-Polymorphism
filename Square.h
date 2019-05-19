#include <iostream>
#include <string>

class Square : public Shape{
    private:
        double side;
    public:
        Square(string n, int num, double s);
        ~Square();
        void setSide(double s);
        double getSide() const;
        virtual double getArea() const;
};

double requestSquareSide(void);