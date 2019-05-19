#include <iostream>
#include <string>

using namespace std;

class Shape{
    protected:
        string name;
        int number;
    public:
        Shape(string s, int n);
        virtual ~Shape();
        void setName(string s);
        string getName() const;
        string getUniqueName() const;

        // pure virtual function
        // virtual double getLength() const = 0;
        // virtual double getSide() const = 0;
        // virtual double getWidth() const = 0;
        virtual double getArea() const = 0;
        // redefine in each derived function
};