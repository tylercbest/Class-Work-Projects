/*

Author: $TCB
Date: 10/23/2025
*/

#include <iostream>
#include <string>

using namespace std;

int octal_to_decimal(int);
int decimal_to_octal(int);

int binaryToDecimal(int);
string decimalToBinary(int);

int main(){
    int choice;
    do{
        //Display menu 
        cout << "convert b to d" << endl;
        cout << "convert d to b" << endl;
        cout << "1, 2, 3 to exit:" << endl;
        cin >> choice;
        if (choice == 1){
            int Binaryin;
            cin >> Binaryin;
            cout << "Decimal value = " << binaryToDecimal(Binaryin) << endl;
        }
        else if (choice == 2){
            int Decimalin;
            cin >> Decimalin;
            cout << "Binary value = " << decimalToBinary(Decimalin) << endl;
        }else if (choice != 0){
            cout << "\nInvalid choice please try again" << endl;
        }
    }while(choice != 0);


    return 0;
}

int binaryToDecimal(int binary){
    int decimal = 0;
    int base = 1;
    int remainder;

    while(binary > 0){
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        base *= 2; // base = base * 2
        binary = binary / 10;
    }
    return decimal;
}
string decimalToBinary(int decimal){
    string binary = "";
    if (decimal == 0){
        return "0";
    }
    while(decimal > 0){
        binary = to_string((decimal % 2)) + binary;
        decimal = decimal/2;
    }
    return binary;
}