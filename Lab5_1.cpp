/*
Looping: while/ for /do-while
Author: $TCB
Date: 10/14/2024
*/

#include <iostream>

using namespace std;

int main(){
    //Declare variables counter, sentinel, input 
    int counter = 0, input;
    int sentinel = 0;
    while(counter < 10){
        cout << "Counter: " << counter << endl;
        counter++; //Counter = counter + 1
    }

    //Sentinel will control the loop
    cout << "Enter a number: " << endl;
    cin >> input;
    
    while(sentinel != input){
        cout << "You entered: " << input << endl;
        cin >> input;
    }

    // sum = 1 + 2 + 3 + ... 99 + 100
    int sum = 0;
    int i = 1;
    int n;
    cout << "Enter n: ";
    cin >> n;
    while(i <= n){
        sum = sum + i;
        // i = i +1
        ++i;
    }
    cout << "Sum = " << sum << endl;

    // Factorial 4! = 1*2*3*4
    int factorial = 1;
    int j = 1;
    int k;
    cout << "Enter n: ";
    cin >> k;
    while(j <= k){
        factorial = factorial * j;
        // i = i +1
        ++j;
    }
    cout << "Factorial = " << factorial << endl;

    // for loop: for(condition 1; condition 2; condition 3) only local variable when instantiated inside brackets
    // 1, 3, 5, 7, 9, 11 --> AP Arithmatic Progression
    int term = 0;
    for(int b = 1; b <= 7; b = b + 2){
        term = term + b;
    }
    // Fibonacci sequence
    int howMany, p, d, e, nextTerm = 0;
    cout << "Number of terms: ";
    cin >> howMany;

    cout << "Fibonacci sequence: ";

    for (p = 1; p <= howMany; ++p){
        if (p == 1){
            d = p - 1;
            cout << d << ", ";
        } else if (p == 2){
            e = p - 1;
            cout << e << ", ";
        } else {
            nextTerm = d + e;
            d = e;
            e = nextTerm;
            cout << nextTerm << ", ";
        }
    }


    return 0;
}