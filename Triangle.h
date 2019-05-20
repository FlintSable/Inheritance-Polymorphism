#include <iostream>
#include <string>

class Triangle : public Shape{
    private:
        double base, width;
    public:
        // constructor/ deconstructor
        Triangle(string n, int num, double b, double w);
        ~Triangle();
        // get
        double getBase(void);
        double getWidth(void);
        virtual double getArea() const;

        // set
        void setBase(double b);
        void setWidth(double w);
};

// helper functions
double requestTriangleBase(void);
double requestTriangleWidth(void);