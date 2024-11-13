/*
File Inut/Output
Author: $TCB
Date: 09/09/2024
*/
#include <iostream>
#include<fstream>
using namespace std;
int main(){
    //Step 1: Declare Variables
    float grade1, grade2, average;
    string firstName, lastName;
    float grade1_2, grade2_2, average_2;
    string firstName_2, lastName_2;

    ifstream inFile; //inFile is similar to cin
    ofstream outFile; //outFile similar to cout

    //Step 2: Open files for reading and writing
    inFile.open("grades.txt"); //relative address, absolute address
    outFile.open("grades_copy.txt");

    //Step 3: Reading from the file
    //inFile >> firstName;
    //inFile >> lastName;
    //inFile >> grade1;
    //inFile >> grade2;
    inFile >> firstName >> lastName >> grade1 >> grade2;
    inFile >> firstName_2 >> lastName_2 >> grade1_2 >> grade2_2;
    
    //Step 3.2: Calculate average of grades 
    average = (grade1 + grade2)/2;
    average_2 = (grade1_2 + grade2_2)/2;
    
    //Step 4: Writing into the file
    cout << firstName << " " << lastName << " " << grade1 << " " << grade2 << " " << average << endl;
    outFile << firstName << " " << lastName << " " << grade1 << " " << grade2 << " " << average << endl;
    cout << firstName_2 << " " << lastName_2 << " " << grade1_2 << " " << grade2_2 << " " << average_2 << endl;
    outFile << firstName_2 << " " << lastName_2 << " " << grade1_2 << " " << grade2_2 << " " << average_2 << endl;

    //Step 5: Close the files
    inFile.close();
    outFile.close();



    return 0;
}