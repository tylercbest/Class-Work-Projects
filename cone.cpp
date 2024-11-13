/*
Problem Statement: Build a calculator that takes a cones height and radius and oututs vaious area and volume calculations
Author: $TCB
Date: 09/01/2024
*/

//Step one: Don't forget cmath because we need M_PI and sqrt for pi value and square root function
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    //Step two: create variables for the inputs of height and radius. Use double to get the most exact values
    double height, radius, b_area, ls_area, ts_area, cone_volume;

    //Step three: Create our output input stream to request height and radius and save their inputs
    cout << "\nWhat is the Cones Height?: ";
    cin >> height;
    cout << "\nWhat is the Cones Radius?: ";
    cin >> radius;

    b_area = (M_PI * radius * radius);
    ls_area = (M_PI * radius * sqrt((radius * radius)+(height * height)));
    ts_area = (M_PI * radius * radius) + (M_PI * radius * sqrt((radius * radius)+(height * height)));
    cone_volume = ((1.00 / 3.00) * M_PI * (radius * radius) * height);

    //Step four: Output the various area and volume calculations based off the instructions and using the M_PI and sqrt functions.
    cout << "\nCones Base Area: " << b_area << endl;
    cout << "\nCones Lateral Surface Area: " << ls_area << endl;
    cout << "\nCones Total Surface Area: " << ts_area << endl;
    cout << "\nCones Volume: " << cone_volume << endl;
    return 0;
}