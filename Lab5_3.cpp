/*
File Processing using a loop.
Author: $TCB
Date: 10/18/2024
*/

#include <iostream>
#include <fstream>
#include<sstream> // string stream, works similar to fstream but reads a string/line
using namespace std;

int main(){
    ifstream inFile;
    ofstream outFile;
    string name, major, line;
    string id_num; //if using int for id_num it deletes the 00's on id num

    //Open File
    inFile.open("Lab5_3.txt");
    while(getline(inFile, line)){
        //cout << line << endl;
        istringstream iss; //iss = input string stream
        iss.str(line); // similar to inFile.Open()
        iss >> name;
        iss >> id_num;
        iss >> major;
        cout << "Name: " << name << endl << "ID Number: " << id_num << endl << "Major: " << major << endl << "------------------------" << endl;
    }

    inFile.close();

    // do while loop: it runs at least 1 time no matter what the condition is
    int counter = 0;
    do {
        cout << "Hello" << endl;
        ++counter;

    } while(counter < 5);


    return 0;
}