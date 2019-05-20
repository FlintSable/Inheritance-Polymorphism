#include <iostream>
#include <string>

class Rectangle : public Shape{
    private:
        double length, width;
    public:
        // constructor/ deconstructor
        Rectangle(string n, int num, double l, double w);
        ~Rectangle();

        // get
        double getLength() const;
        double getWidth() const;
        virtual double getArea() const;

        // set
        void setLength(double l);
        void setWidth(double w);

};

// helper
double requestRectLength(void);
double requestRectWidth(void);