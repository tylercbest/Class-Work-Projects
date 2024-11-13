/*
Octal to Decimal
Decimal to Octal
Author: $TCB
Date: 10/23/2025
*/

#include <iostream>

using namespace std;

int octal_to_decimal(int); // Function signitures - let our program know the function is defined somewhere (at the bottom)
int decimal_to_octal(int); 



int main(){
    int choice; // create variable for user input for choice of functions
    do{
        //Display menu for functions to perform
        cout << "Convert Octal to Decimal - 1" << endl;
        cout << "Convert Decimal to Octal - 2" << endl;
        cout << "To Exit - 0" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        // If-Else chain for our choice inputs
        if (choice == 1){
            int octalIn; // User input for function
            cout << "Please enter Octal number to convert to Decimal: ";
            cin >> octalIn;
            cout << "\nDecimal value = " << octal_to_decimal(octalIn) << endl; // Output the converted value called from the function octal_to_decimal
            cout << "----------------------" << endl;
        }
        else if (choice == 2){
            int decimalIn;
            cout << "Please enter Decimal number to convert to Octal: ";
            cin >> decimalIn;
            cout << "Octal value = " << decimal_to_octal(decimalIn) << endl; // Output the converted value called fromm the function decimal_to_octal
            cout << "-----------------------" << endl;
        }else if (choice != 0){
            cout << "\nInvalid choice please try again" << endl; // Output for choices that are not 1, 2, or 0
        }
    }while(choice != 0);


    return 0;
}
// Defining the functions called in the main program above
int octal_to_decimal(int octal){
    // define variable containers for converting octal to decimal
    int decimal = 0;
    int base = 1;
    int remainder;

    // While loop to loop over inputted octal variable and convert it to decimal
    while(octal > 0){
        remainder = octal % 10;
        decimal = decimal + (remainder * base);
        base = base * 8;
        octal = octal/10;
    }
    return decimal;
}
int decimal_to_octal(int decimal){
    // define variable containers for converting decimal to octal
    int octal = 0;
    int base = 1;
    int remainder;

     // While loop to loop over inputted decimal variable and convert it to octal
    while(decimal > 0){
        remainder = decimal % 8;
        octal = (remainder * base) + octal;
        base = base * 10;
        decimal = decimal/8;
    }
    return octal;
}