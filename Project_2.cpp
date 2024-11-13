/*
Problem Statement: Create a program to take the given inputs of "Johnson Mark 75000 15 50" and calculate his salary reduction and output it to new file
Author: $TCB
Date: 09/12/2024
*/

#include<iostream>
#include<iomanip> //For use of setw and setprecision for specific length and decimal precision of the outputted value
#include<fstream>
using namespace std;
int main(){
    //Step 1: Declare variables
    string lastName, firstName;
    double salary, numLateDays, totalDeductions, newSalary;
    ifstream inFile;
    ofstream outFile;

    //Step 2: Use our in/outFile functions to chose input file and set output file
    inFile.open("Salary.txt");
    outFile.open("newSalary.txt");

    //Step 3: Read in file and give variables their values
    inFile >> lastName >> firstName >> salary >> numLateDays >> totalDeductions;

    //Step 4: Calculate the new salary based on total salary minus the number of late days multiplied by the deduction amount 
    newSalary = (salary - (numLateDays * totalDeductions));

    //Step 5: Output the final result to console and save infomation in the new file for updated salary amounts.
    cout << lastName << " " << firstName << " " << setw(12) << fixed << setprecision(2) << newSalary << endl;
    outFile << lastName << " " << firstName << " " << showpoint << newSalary << endl;

    //Step 6: Close the file streams
    inFile.close();
    outFile.close();


    return 0;
}