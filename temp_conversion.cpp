/*
Problem Description: Write a C++ program that simulates a simple temperature conversion system. The program should take input from 
a file named "temp_input.txt" and write the converted results to an output file named "temp_output.txt". Each line in the input file 
represents a temperature conversion request in the following format: value scale_from scale_to (Refer to instructions for full description)
Author: $TCB
Date: 09/29/2024
*/

#include <iostream>
#include <fstream>
//Include our 5 regular lines plus fstream to take inputs and place outputs in their respective files.
using namespace std;

int main(){
    //Create variables for our 5 main variables, temp input value, converted value, scale from and to, and ot error message for invalid values
    float value, converted_value;
    char scale_from, scale_to;
    string error_message;
    error_message = "Error: invalid temperature scale.";

    //ifstream/ofstream naming our file variable
    ifstream inFile;
    ofstream outFile;

    //open our file streams
    inFile.open("temp_input.txt");
    outFile.open("temp_output.txt");

    //Reading the file line 1
    inFile >> value >> scale_from >> scale_to;

    //Setup a flag for our if else chain so that if we get an unexpected value we can later display an error message
    bool flag = true;

    //If else chain for deciding what temperature conversion we need to use based on values in the file
    if (scale_from == 'C' && scale_to == 'F') {
        converted_value = (value * 9.0 / 5.0) + 32.0;  // Celsius to Fahrenheit
    } else if (scale_from == 'F' && scale_to == 'C') {
        converted_value = (value - 32.0) * 5.0 / 9.0;  // Fahrenheit to Celsius
    } else if (scale_from == 'C' && scale_to == 'K') {
        converted_value = value + 273.15;              // Celsius to Kelvin
    } else if (scale_from == 'K' && scale_to == 'C') {
        converted_value = value - 273.15;              // Kelvin to Celsius
    } else if (scale_from == 'F' && scale_to == 'K') {
        converted_value = (value - 32.0) * 5.0 / 9.0 + 273.15;  // Fahrenheit to Kelvin
    } else if (scale_from == 'K' && scale_to == 'F') {
        converted_value = (value - 273.15) * 9.0 / 5.0 + 32.0;  // Kelvin to Fahrenheit
    } else {
        flag = false;
    }

    //If else chain for our bool flag to decide what information to send to the output file
    if(flag == true){
        outFile << value << " " <<  scale_from << " to " << scale_to << " = " << converted_value << " " << scale_to << endl;
    }else{
        outFile << error_message << endl;
    }

    //Copy and paste the above steps for each line in the file since we assume the file will always have 3 lines and a loop will not be used per the instructions
    inFile >> value >> scale_from >> scale_to;

    if (scale_from == 'C' && scale_to == 'F') {
        converted_value = (value * 9.0 / 5.0) + 32.0;  // Celsius to Fahrenheit
    } else if (scale_from == 'F' && scale_to == 'C') {
        converted_value = (value - 32.0) * 5.0 / 9.0;  // Fahrenheit to Celsius
    } else if (scale_from == 'C' && scale_to == 'K') {
        converted_value = value + 273.15;              // Celsius to Kelvin
    } else if (scale_from == 'K' && scale_to == 'C') {
        converted_value = value - 273.15;              // Kelvin to Celsius
    } else if (scale_from == 'F' && scale_to == 'K') {
        converted_value = (value - 32.0) * 5.0 / 9.0 + 273.15;  // Fahrenheit to Kelvin
    } else if (scale_from == 'K' && scale_to == 'F') {
        converted_value = (value - 273.15) * 9.0 / 5.0 + 32.0;  // Kelvin to Fahrenheit
    } else {
        flag = false;
    }
    if(flag == true){
        outFile << value << " " <<  scale_from << " to " << scale_to << " = " << converted_value << " " << scale_to << endl;
    }else{
        outFile << error_message << endl;
    }

    //Copy and paste the above steps for each line in the file since we assume the file will always have 3 lines and a loop will not be used per the instructions
    inFile >> value >> scale_from >> scale_to;

    if (scale_from == 'C' && scale_to == 'F') {
        converted_value = (value * 9.0 / 5.0) + 32.0;  // Celsius to Fahrenheit
    } else if (scale_from == 'F' && scale_to == 'C') {
        converted_value = (value - 32.0) * 5.0 / 9.0;  // Fahrenheit to Celsius
    } else if (scale_from == 'C' && scale_to == 'K') {
        converted_value = value + 273.15;              // Celsius to Kelvin
    } else if (scale_from == 'K' && scale_to == 'C') {
        converted_value = value - 273.15;              // Kelvin to Celsius
    } else if (scale_from == 'F' && scale_to == 'K') {
        converted_value = (value - 32.0) * 5.0 / 9.0 + 273.15;  // Fahrenheit to Kelvin
    } else if (scale_from == 'K' && scale_to == 'F') {
        converted_value = (value - 273.15) * 9.0 / 5.0 + 32.0;  // Kelvin to Fahrenheit
    } else {
        flag = false;
    }
    if(flag == true){
        outFile << value << " " <<  scale_from << " to " << scale_to << " = " << converted_value << " " << scale_to << endl;
    }else{
        outFile << error_message << endl;
    }

    //Close our files
    inFile.close();
    outFile.close();

    return 0;
}