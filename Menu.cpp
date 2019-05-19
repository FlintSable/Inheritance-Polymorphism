#include <iostream>
#include <string>
#include "Menu.h"


using namespace std;
    
int mainMenu(void){
    
    int x; 
    cout << "** Menu **\n";
    cout << "1 - create rectangle \n";
    cout << "2 - create square \n";
    cout << "3 - create triangle \n";
    cout << "4 - create circle \n";
    cout << "5 - show shapes that are stored \n";
    cout << "6 - exit \n \n";

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