// EC_StringAlign_dwaters5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    string str;
    int spaces = 0;
    int width = 0;
    
    cout << "Enter your values below and type Quit to end the program.";
    
    while (true) {
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "\nPlease enter an integer for the width." << endl;
        }
        else if (str == "Quit") {
            break;
        }
        
        cout << "\nPlease enter the width: ";
        cin >> width;

        string disWidth(width, '=');
        cout << "Please enter your String: ";
        cin >> str;
        
        spaces = (width + str.size()) / 2;
        
        cout << disWidth << '\n';
        cout << setw(spaces)  <<  str;
        cout << '\n' << disWidth;
        
    }
        
}


