/*
Create a program that can identify the longest word/name within a text file.
Author: $TCB
Date: 10/28/2024
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // Declare variables
    ifstream inFile;
    ofstream outFile;
    string name, longest_name = "";

    // Open File
    inFile.open("Lab7_1.txt");

    // Read each name and compare length() values
    inFile >> name;


    while(getline(inFile, name)){ //getline(infile, name).length()
        if(name.length() > longest_name.length()){
            longest_name = name;
        }
    }
    cout << "The longest name is: " << longest_name << endl;

    inFile.close();

    return 0;
}