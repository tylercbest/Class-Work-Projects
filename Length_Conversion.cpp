/*
Problem Statement: Given length in inches,  your program "Length_Conversion.cpp" should output the equivalent length in feet and remaining inch(es).
Your code should prompt the user to provide the length in inches at the very beginning. 
Author: $TCB
Date: 09/04/2024

Sample I/O: 64 inches = 5 feet 4 inches // 64 = 5 * 12 + 4

*/

#include <iostream>

using namespace std;
int main() {

    //Step 1: Declare Variables
    int inches, feet, remaining_inches;

    //Step 2: Get input in inches
    cout << "How long is the object in inches?: ";
    cin >> inches;
    cout << "\n";

    //Step 3: Calculate
    feet = (inches / 12);
    remaining_inches = (inches % 12);

    //Step 4: Output the calculated values
    cout << inches << " inches is equal to " << feet << " feet and " << remaining_inches << " inches." << endl;

    return 0;
}