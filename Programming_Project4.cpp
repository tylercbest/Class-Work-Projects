/*
Help with project 4
Author: $TCB
Date: 10/18/2024
*/

#include <iostream>
#include <fstream> //For if/ofstream functions
#include<sstream> // string stream, works similar to fstream but reads a string/line
using namespace std;

int main(){
    ifstream inFile;
    ofstream outFile;
    int num, product = 1; //product = 1, otherwise new lines will be 0
    string line; // used in getfile function to read one line at a time

    //Open File
    inFile.open("input.txt");
    outFile.open("output.txt");
    while(getline(inFile, line)){
        //cout << line << endl;
        istringstream iss; //iss = input string stream
        iss.str(line); // similar to inFile.Open()
        while(iss >> num){ //while theres a num in input string stream for the line, do product = product * num for each num
            product = product * num;
        }
        cout << line << " Product = " << product << endl;
        outFile << line << " Product = " << product << endl;//Write to output.txt
        product = 1; //makes sure product = 1 everytime it loops back around for the num in line
    }

    inFile.close(); //Always close the file

    return 0;
}