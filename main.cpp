// Assignment 6 - Inheritance and Polymorphism
// Nicholas Noochla-or
// CS 52 Spring 2019

#include <iostream>
#include <string>
#include <iomanip>
#include "Menu.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

#define clearScreen() printf("\033[H\033[J")

using namespace std;

int main(){
    int menuReturn = 0;
    int count = 0;
    int const arraySize = 10;
    Shape *shapes[arraySize] = {0};
    int sNum = rand() % 9000 + 1000;
    	
    while(menuReturn != 6){
        menuReturn =  mainMenu();
        switch(menuReturn){
            case 1: {
                if(count < arraySize){
                    clearScreen();
                    cout << "\n \u25E4 creating rectangle ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                    double l = requestRectLength();
                    double w = requestRectWidth();
                    string rectName = "Rect-";
                    Rectangle *r = new Rectangle(rectName, sNum, l, w);
                    shapes[count] = r;
                    cout << "\n \u25E3 rectangle has been created, please continue ~~~~~~~~~\n\n\n";
                    count ++;
                } else {
                    clearScreen();
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
                    Square *sq = new Square(squareName, sNum, s);
                    shapes[count] = sq;
                    cout << "\n \u25E3 square has been created, please continue ~~~~~~~~~~~~\n\n\n"; 
                    count++;
                } else{
                    clearScreen();
                    cout << "need more space \n\n";
                }
            }
                break;
            case 3: {
                if(count < arraySize){
                    clearScreen();
                    cout << "\n \u25E4 creating triangle ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                    double b = requestTriangleBase();
                    double w = requestTriangleWidth();
                    string triName = "Tri-";
                    Triangle *tr = new Triangle(triName, sNum, b, w);
                    shapes[count] = tr;
                    cout << "\n \u25E3 triangle has been created, please continue ~~~~~~~~~~\n\n\n"; 
                    count++;
                } else{
                    clearScreen();
                    cout << "need more space \n\n";
                }
            }
                break;
            case 4: {
                if(count < arraySize){
                    clearScreen();
                    cout << "\n \u25E4 creating circle ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                    double r = requestCircleRadius();
                    string cirName = "Cir-";
                    Circle *ci = new Circle(cirName, sNum, r);
                    shapes[count] = ci;
                    cout << "\n \u25E3 circle has been created, please continue   ~~~~~~~~~~\n\n\n"; 
                    count++;
                } else{
                    clearScreen();
                    cout << "need more space \n\n";
                }
            }
                break;
            case 5: {
                clearScreen();
                cout << "\nDisplaying all stored shapes *********\n" 
                        // << count 
                        << "\n \n";

                for(int i = 0; i < arraySize; ++i){
                    if(shapes[i] == 0){
                        cout << "Shape: " << i << " undefined" << "\n";
                    } else {
                        cout << "Shape: " << i
                                << "\nName: "
                                << shapes[i] -> getUniqueName() 
                                << "\narea: " 
                                << fixed
                                << setprecision(2)
                                << shapes[i] -> getArea() 
                                << "\n"
                                << endl;
                    }
                }
                cout << "\n\n";
            }
                break;
            case 6: {
                    clearScreen();
                    for(int i = 0; i < 250; i++) {
                        cout << " \u25B1 " << flush;
                        cout << " \u25C2 " << flush;
                        cout << " \u25A7 " << flush;
                        cout << " \u2606 " << flush;
                        cout << " \u266c " << flush;
                        cout << " \u263a " << flush;
                    }
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