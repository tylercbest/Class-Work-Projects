/*
Notes:
C++ was designed by Bjarne Stroupstrup.
Data type: Basic/Simple, Structured, Pointers
Basic data types: 
int (8), char('A'), string("JSU"), 
float(9.9999999, single precision), 
double(2.191919191919191, double precision), 
bool(true / false)
Variable: int age = 9; float/double age = 9.5;
Constant: const double PI = 3.14159;
Subprograms/Functions: can be embedded within a main function;
Syntax rules: grammar of coding language
Semantic rule: related to logic of program/meaning of the program
Comments: multi-line, single-line
Token: is the smallest unit of the program; int, +, variable name
Reserved words: return, int, float
Identifiers: names used in program; length, width, age
Case sensitive: int not INT
Assignment statement: x = 5, = is assignment operator; y = y + 5 (simple operator); y += 5 (complex operator)
Arithmetic operator: +, -, *, /, %; 9 % 5 = 4
Order of precedence: BODMAS; 7 - 3 * 2 = 1
Type conversion: explicit - convert float to int (45.3 -> 45) implicit - convert int to float (45 -> float/double)
<< - Stream insertion operator; >> - Stream extraction operator

Problem statement: Calculate area and perimeter of a rectangle given the length (30) and width (15.2)
Author: $TCB
Date: 08/28,30/2024
*/

#include<iostream>

using namespace std;
int main() {
    //Step 1: Declare variables - Create 4 variables. 2 for length and width input, and 2 for area and perimeter output.
    double length, width, area, perimeter;

    //Step 2: Get values - Ask for inputs of length and width of the rectangle
    //length = 30;
    //width = 15.2;
    cout << "\nWhat is the length of the rectangle? ";
    cin >> length;
    cout << "\nWhat is the width of the rectangle? ";
    cin >> width;

    //Step 3: Calculation - Assign values to area and perimeter by using a mathematical equation to calculate from the inputted length and width
    area = (length * width);
    perimeter = 2 * (length + width);

    //Step 4: Print results - Output the given values for area and perimeter; 
    cout << "\nThe area of the rectangle is: " << area << endl;
    cout << "\nThe perimeter of the rectangle is: " << perimeter << endl;
    cout << "\n";
    return 0;
}
