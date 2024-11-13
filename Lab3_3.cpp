/*
Conditional Operator
Author: $TCB
Date: 09/20/2024
*/

#include<iostream>
#include<cassert>

using namespace std;

int main(){
    // Declare variables
    int p = 10;
    int q = 5;
    int max;
    if(p >= q){
        max = p;
    } else {
        max = q;
    }
    cout << "Max = " << max << endl;

    // Conditional operator uses - ? :
    // var = (condition1) ? a : b
    // If the value is true then the value is a, else the value is b
    max = (p >= q) ? p : q;
    cout << "Max = " << max << endl;

    assert((p > 15) || (q < 10)); // For assert we use and &&, or ||.
    cout << "We are done discussing Selection Control Structure!" << endl;


    return 0;
}