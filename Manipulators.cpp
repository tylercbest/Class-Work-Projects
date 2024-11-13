/*
Manipulators: Help functions that can modify the input /output stream
Output Functions: 
Author:$TCB
Date: 09/13/2024
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // endl manipulator
    cout << "Jax" << endl;
    cout << "State\n"; // \n, \t: escape sequence
    cout << "Alabama\n";

    //Create Variables
    double salary = 345.786;
    double workingHours = 40.00;

    //Real numbers can be exressed using Fixed Notation 12345.67 or Scientific notation 1.234567E4
    cout << scientific;
    cout << salary << endl;
    cout << fixed;
    cout << salary << endl;

    // showpoint
    cout << showpoint;
    cout << workingHours << endl;

    // setprecision(): tells the program how many digits to print after the decimal point
    cout << setprecision(2) << salary << endl;

    // setw(): set width of significant digits including the '.'
    cout << "Salary: " << setw(15) << setfill('$') << right << salary << endl;

    // getline(): help you read the entire line
    string name;
    getline(cin, name);
    cout << "Name: " << name << endl;

    return 0;
}