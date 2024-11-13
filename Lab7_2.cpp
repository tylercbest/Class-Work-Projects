/*
Structures (struct): are a way to group several related variables into one place
A structure is a user defined data type in C++
Author: $TCB
Date: 11/1/2024
*/


#include <iostream>

using namespace std;

// Creating Vegtable Structure --> user-defined data type
struct vegetable{
    //string name;
    char name[20]; // 'c'|'a'|'r'|'r'|'o'|'t'
    float price;
}; // Struct is of heterogenious data type


// function signitures
vegetable addvegetable();
void displayVegetable(vegetable);

int main(){
    // Array can be defined as a group/collection of similar kinds of elements/data items that are stored together in contiguous memory locations
    // Array is homogenous data type
    // Create vegtable variable
    // vegetable myVeg;
    // Create an array of vegetables
    
    vegetable myVeg[3];
    /*
    cout << "Please enter vegetable name: ";
    cin >> myVeg[0].name;

    cout << "Please enter vegetable price: ";
    cin >> myVeg[0].price;

    cout << "Vegetable name: " << myVeg[0].name << "\nPrice: $" << myVeg[0].price << endl;
    */

   int len = sizeof(myVeg)/ sizeof(myVeg[0]);
   
   // for loop to add veggies
   for(int i = 0; i < len; i++){
        myVeg[i] = addvegetable();
   }

    cout << endl << endl << "Available vegetables: " << endl;

    int counter = 0;
    while(counter < 3){
        displayVegetable(myVeg[counter]);
        counter++;
    }


    return 0;
}

vegetable addvegetable(){
    vegetable myVeg;
    cout << "Please enter vegetable name: ";
    cin >> myVeg.name;

    cout << "Please enter vegetable price: ";
    cin >> myVeg.price;
    return myVeg;
}

void displayVegetable(vegetable myVeg){
    cout << "Vegetable name: " << myVeg.name << "\nPrice: $" << myVeg.price << endl;
}



