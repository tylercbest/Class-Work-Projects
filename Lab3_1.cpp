/*
Control Structures - Selection (if-else, switch) / Repetition (for, while, do-while loops)
Author: $TCB
Date: 09/16/2024
*/
#include <iostream>

using namespace std;
int main(){
    // Sample input + 67.8; output: 100 + 67.6 = 167.60
    //Declare variables
    float number, result;
    char op;
    bool flag = true; // Boolean variable (True or False)

    // Reading
    cin >> op >> number;

    // Implement logic
    if(op == '+'){
        result = 100 + number;
    } else if(op == '-') {
        result = 100 - number;
    } else if(op == '*') {
        result = 100 * number;
    } else if(op == '/') {
        result = 100 / number;
    } else {
        flag = false;
    }
    if(flag == true){
    // Print result : "The result is: 100 + 67.8 = 167.8"
        cout << "The result is: 100 " << op << " " << number << " = " << result << endl;
    } 
    else {
        cout << "Operator is unknown" << endl;
    }
    return 0;
}