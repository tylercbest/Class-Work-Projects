/*
-In-class work-
Problem Statement: Write a program (cone.cpp) that takes the radius and height of a cone 
(floating point numbers) as input and outputs the cone's base area, lateral surface area, 
total surface area, and volume.
Author: $TCB
Date: 09/06/2024
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //Step 1: Declare Variables
    float height, radius, baseArea, lateral_area, totalArea, volume;

    //Step 2: Get values
    cout << "\nWhat is the cones height? ";
    cin >> height;
    cout << "\nWhat is the cones radius? ";
    cin >> radius;

    //Step 3: Calculate
    baseArea = M_PI * pow (radius, 2);
    lateral_area = (M_PI * radius * sqrt(pow(radius, 2)+ pow(height, 2)));
    totalArea = baseArea + lateral_area;
    volume = (M_PI * pow(radius, 2) * height / 3);

    //Step 4: Print results
    cout << "\nCones Base Area: " << baseArea << endl;
    cout << "\nCones Lateral Surface Area: " << lateral_area << endl;
    cout << "\nCones Total Surface Area: " << totalArea << endl;
    cout << "\nCones Volume: " << volume << endl;
    return 0;
}