#include <iostream>
#include <string>

using namespace std;

class Shape{
    protected:
        string name;

    public:
        Shape(string s);
        ~Shape();
        void setName(string s);
        string getName() const;

        // pure virtual function
        virtual double getArea() const = 0;
        // redefine in each derived function
};