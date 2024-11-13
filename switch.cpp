#include <iostream>

using namespace std;
int main(){
    char inputChar;
    cin >> inputChar;
    switch (inputChar){
        case 'A' : cout << 1; break;
        case 'Q' : cout << 2;
        case 'G' :
        case 'M' : cout << 9;
        default : cout << 8;
    }
    return 0;
}   