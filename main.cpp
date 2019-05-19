#include <iostream>
#include <string>
#include "Menu.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
// #include "Square.h"
// #include "Triangle.h"

using namespace std;

// abstract base class
// class Shape{
//     protected:
//         string name;

//     public:
//         Shape(string s){
//             name = s;
//         }   

//         void setName(string s){
//             name = s;
//         }

//         string getName() const{
//             return name;
//         }

//         // pure virtual function
//         virtual double getArea() const = 0;
//         // redefine in each derived function
// };

// class Circle : public Shape{
//     private:
//         double radius;

//     public:
//         Circle(string n, double r) : Shape(n){
//             radius = r;
//         }
//         ~Circle(){}
//         void setRadius(double r){
//             radius = r;
//         }
//         double getRadius() const{
//             return radius;
//         }

//         virtual double getArea() const{
//             return 3.14159 * radius * radius;
//         }
// };

// seccond child class
// class Rectangle : public Shape{
//     private:
//         double length, width;

//     public: 
//         Rectangle(string n, double l, double w) : Shape(n){
//             length = l;
//             width = w;
//         }
//         ~Rectangle(){}
//         void setLength(double l){
//             length = l;
//         }
//         void setWidth(double w){
//             width = w;
//         }
//         double getLength() const{
//             return length;
//         }
//         double getWidth() const{
//             return width;
//         }
//         virtual double getArea() const{
//             return length * width;
//         }
// };

// third child class
class Triangle : public Shape{
    private:
        double base, width;

    public:
        Triangle(string n, double b, double w) : Shape(n){
            base = b;
            width = w;
        }
        ~Triangle(){}
        virtual double getArea() const{
            return .5 * base * width;
        }

};


int main(){
    int menuReturn = 0;
    int count = 0;
    Shape *shapes[3];
    while(menuReturn != 6){
        menuReturn =  mainMenu();
        // cout << mainMenu() << "\n";
        switch(menuReturn){
            case 1:{
                cout << "rectangle \n";
                double l = requestRectLength();
                double w = requestRectWidth();
                // Rectangle r("Rectangle1", l, w);
                shapes[count] = new Rectangle("RectInArray", l, w);
                cout << shapes[count] -> getName() << endl;
                // cout << shapes[count] -> getLength() << " " << shapes[count] -> getWidth() << endl;
                cout << shapes[count] -> getArea() << endl;

            }
                break;
            case 2:
                cout << "square /n";
                break;
            case 3:
                cout << "triangle /n";
                break;
            case 4:
                cout << "circle /n";
                break;
            case 5:
                cout << "show shapes that are stored /n";
                break;
            case 6:
                cout << "exit /n";
                break;
        }
        count ++;
    }

cout << "\n**********************************\n";
// pointer way
    // Circle *c =new Circle("CircleStart", 3.1);
    // cout << c -> getName() << endl;
    // c -> setName("Circle too");
    // cout << c -> getName() << endl;
    // cout << c -> getRadius() << endl;
    // cout << c -> getArea() << endl;
    // delete c;

// standard way
    // Circle c("Circle1", 3.1);
    // cout << c.getName() << endl;
    // c.setName("Circle too");
    // cout << c.getName() << endl;
    // cout << c.getRadius() << endl;


    // Rectangle r("Rectangle1", 4.2, 2.5);
    // cout << r.getName() << endl;
    // cout << r.getLength() << " " << r.getWidth() << endl;
    // cout << r.getArea() << endl;

    Triangle t("Triangle1", 4, 3);
    cout << t.getArea() << endl;


    // Shape array of pointers of the base class
    // Shape *shapes[3];
    // string quickVar = "CircleInArray";
    // double quickDouble = 2.5;
    // shapes[0] = new Circle(quickVar, quickDouble);
    // shapes[1] = new Rectangle("RectInArrayr", 3.1, 1.2);
    // shapes[2] = new Triangle("TriInArrayr", 8.1, 2.3);


    cout << "The stuff: " << shapes[0] -> getArea() << endl;

    for(int i = 0; i < 3; i++){
        cout << "Shape: " << i << " area: " << shapes[i] -> getArea() << endl;
    }

    return 0;
}