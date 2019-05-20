// Assignment 6 - Inheritance and Polymorphism
// Nicholas Noochla-or
// CS 52 Spring 2019

#include <iostream>
#include <string>
#include "Menu.h"

#define clearScreen() printf("\033[H\033[J")

using namespace std;
    
int mainMenu(void){
    
    int x; 
    cout << "\u25F8    Main Menu         \u25F9\n";
    cout << " 1 - create rectangle \n";
    cout << " 2 - create square \n";
    cout << " 3 - create triangle \n";
    cout << " 4 - create circle \n";
    cout << " 5 - show stored shapes \n";
    cout << " 6 - exit \n";
    cout << "\u25FA                      \u25FF\n \n";
    cout << "Please enter a selection: ";
    cin >> x;
    while(cin.fail() || x <= 0 || x > 6){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Invalid! Must be > 0" << endl;
        cout << "Enter an integer again: ";
        cin >> x;

    }
    // return the number that was a valid input
    return x;
};