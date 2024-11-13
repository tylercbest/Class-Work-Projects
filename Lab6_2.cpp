/*
Problem Statement: Value-returning functions, value params --> pass by value
Reference params --> pass address of variables to change value of variables (pass by reference)
Void Function
Author: $TCB
Date: 10/23/2024
*/
#include <iostream>

using namespace std;

//Below are the signitures to the function, these let us know that somewhere in the program we have defined these functions. Below the main function are the function definitions, and inside the main function is the initialization of our different functions

// Value-returning function
double sum_two_numbers(double, double); // function signiture --> defines input and output of the function
double sum_two_numbers(double);
// Function overloading or method overloading
// Two or more functions can have the same name but different params (number, type, etc.)

// void() function -> does not return value
void printInfo(string);

// Reference params (i.e. address) --> pass by reference
void swap_two_numbers(int &, int &); // int &, int& -->> address of an integer variable // float& -->> address of a float variable
void multNum(int &);

int main(){
    double result_1 = sum_two_numbers(5.4, 2.7);
    cout << "Result from the first sum_two_numbers function = " << result_1 << endl;

    double result_2 = sum_two_numbers(6.66);
    cout << "Result from the second sum_two_numbers function = " << result_2 << endl;

    printInfo("CS 231");

    int num1 = 100, num2 = 200;

    cout << "\nBefore swap: " << endl << "num1 = " << num1 << endl << "num2 = " << num2 << endl;


    swap_two_numbers(num1, num2);

    cout << "\nAfter swap: " << endl << "num1 = " << num1 << endl << "num2 = " << num2 << endl;

    int num3 = 10;

    // Create a multiNum function and update the num3 variable
    // Variable like the fillowing num3 = num3 * 5
    multNum(num3);

    cout << "\nnum3 = " << num3 << endl;

    return 0;
}
double sum_two_numbers(double num1, double num2){
    return (num1 + num2);
}
double sum_two_numbers(double num3){
    return (num3 * 100);
}

void printInfo(string class_name){
    cout << "Hello, " << class_name << endl;
}

void swap_two_numbers(int& num1, int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void multNum(int& num3){
    num3 = num3 * 5;
}
