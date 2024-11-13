/*
Switch Control Structure
Author: $TCB
Date: 09/18/2024
*/

#include <iostream>
#include <cassert>

using namespace std;
int main(){
    /*
    What is a switch statement?
    The switch statement is the control statement that allows any value to change the control of the execution.
    The switch statement is evaluated once.
    The value of the expression is compared with each case value.
    If there is a match the associated block is executed/run.
    break and default: keywords associated with switch. 
    */ 
   char op; // integral type - char, int, enum (enumeration) : can hold a group of constants
   float number, result;
   bool isValid = true;

   cout << "Enter an expression in this format: operator operant" << endl;
   cin >> op >> number;

   switch(op){ // The variable you use with switch must be of type integer; not possible to use string with switch.
        case '+':
            result = 100 + number;
            break;
        case '-':
            result = 100 - number;
            break;
        case '*':
            result = 100 * number;
            break;
        case '/':
            // bool assert(bool expression): is useful in stopping execution when certain conditions/errors occur
            // true/1: does nothing and continues normal execution of the program
            // false/0: the assert prints a message and terminated the program
            result = 100 / number;
            assert(number != 0);
            break;
        default:
            cout << "Invalid operator!" << endl;
            isValid = false;
    }
    if(isValid == true){
        cout << "The result is: " << result << endl;
    }
    return 0;
}