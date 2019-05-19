#include <iostream>
#include <string>
#include "Menu.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"

// #include "Circle.h"
// #include "Triangle.h"

#define clearScreen() printf("\033[H\033[J")

using namespace std;

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


// third child class
// class Triangle : public Shape{
//     private:
//         double base, width;

//     public:
//         Triangle(string n, double b, double w) : Shape(n){
//             base = b;
//             width = w;
//         }
//         ~Triangle(){}
//         virtual double getArea() const{
//             return .5 * base * width;
//         }
//         virtual double getLength(){
//             return 1;
//         }

// };


int main(){
    int menuReturn = 0;
    int count = 0;
    int const arraySize = 3;
    Shape *shapes[arraySize] = {0};
    int sNum = rand() % 9000 + 1000;

    // save for later: dynamic array of pointers
    // cin >> arraySize;
    // Shape** shapes = new Shape*[arraySize];
    
	
    while(menuReturn != 6){
        menuReturn =  mainMenu();
        // cout << mainMenu() << "\n";
        switch(menuReturn){
            case 1: {
                if(count < arraySize){
                    clearScreen();
                    cout << "\n \u25E4 creating rectangle ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                    double l = requestRectLength();
                    double w = requestRectWidth();
                    string rectName = "Rect-";
                    shapes[count] = new Rectangle(rectName, sNum, l, w);
                    cout << "\n \u25E3 rectangle has been created, please continue ~~~~~~~~~\n\n\n";
                    count ++;
                } else {
                    cout << "need more space \n\n";
                }
            }
                break;
            case 2: {
                if(count < arraySize){
                    clearScreen();
                    cout << "\n \u25E4 creating square ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                    double s = requestSquareSide();
                    string squareName = "Sqr-";
                    shapes[count] = new Square(squareName, sNum, s);
                    cout << "\n \u25E3 square has been created, please continue ~~~~~~~~~~~~\n\n\n"; 
                    count++;
                } else{
                    cout << "need more space \n\n";
                }
            }
                break;
            case 3:
                cout << "triangle /n";
                break;
            case 4:
                cout << "circle /n";
                break;
            case 5: {
                clearScreen();
                cout << "\nDisplaying all stored shapes *********\n" 
                        // << count 
                        << "\n \n";

                for(int i = 0; i < arraySize; ++i){
                    if(shapes[i] == 0){
                        cout << "Shape: " << i << " undefined" << "\n";
                    } else{
                        cout << "Shape: " << i
                                << "\nName: "
                                << shapes[i] ->getUniqueName() 
                                << "\narea: " 
                                << shapes[i] -> getArea() 
                                << "\n"
                                << endl;
                        // save for later
                        // cout << "Shape: " << i << " area: " << (*shapes)[i].getArea() << endl;
                    }
                }
            }
                break;
            case 6: {
                    clearScreen();
                    // for(int i = 0; i < 250; i++) {
                    //     cout << " \u25B1 " << flush;
                    //     cout << " \u25C2 " << flush;
                    //     cout << " \u25A7 " << flush;
                    //     cout << " \u2606 " << flush;
                    //     cout << " \u266c " << flush;
                    //     cout << " \u263a " << flush;
                    // }
                    cout << "\n\n exit \n";
                    break;
            }
        }
    }

cout << "\n\n";

    for(int i = 0; i < arraySize; ++i){
        delete shapes[i];
    }
    return 0;
}