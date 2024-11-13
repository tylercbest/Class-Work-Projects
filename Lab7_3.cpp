/*
Arrays
Author: $TCB
Date: 11/08/2024
*/

#include <iostream>
#include <array>

using namespace std;

int main(){
    // Array is a collection of information same data type (Homogenous)
    int nums[6] = {5, 6, 7, 18999, 9, 0};
    char chars[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << nums[3] << endl;
    cout << chars[4] << endl;

    // sizeof(): give you the size in bytes, int = 4 bytes, char = 1 byte
    cout << sizeof(nums[3]) << endl;
    cout << sizeof(chars[4]) << endl;
    cout << sizeof(nums) << endl; // sizeof(nums) = number of cells * 4 bytes

    int len = sizeof(nums) / sizeof(nums[0]);
    cout << len << endl;

    for(int i = 0; i < len; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    // for each loop: enhanced for loop.
    //It helps iterate over the elements of an array quickly without performing initialization, condition testing, and incriment/decrement

    for(int number : nums){
        cout << number << " ";
    }
    cout << endl;

    // Multi-dimension array
    // 2-d array 2 row, 3 column
    // 9 8 7
    // 2 3 1

    int values[3][4] = {
        {9, 8, 7, 6}, 
        {3, 2, 1, 0},
        {1, 1, 1, 1}
    };

    // Nested for loop
    int len_row = sizeof(values) / sizeof(values[0]);
    int len_column = sizeof(values) / (len_row * sizeof(values[0][0]));

    for(int row = 0; row < len_row; row++){ // First for loop controls row
        for(int column = 0; column < len_column; column++){ // Second for loop controls columns
            cout << values[row][column] << " ";
        }
        cout << endl;
    }


    // Create max and min and initialize them to the first element of the array
    int max = values[0][0];
    int min = values[0][0];


    for(int row = 0; row < len_row; row++){ // First for loop controls row
        for(int column = 0; column < len_column; column++){ // Second for loop controls columns
            if(max < values[row][column]){
                max = values[row][column];
            }
            if(min > values[row][column]){
                min = values[row][column];
            }
        }
        cout << endl;
    }
    cout << "Max value is: " << max << " Min value is: " << min << endl;


    return 0;
}
