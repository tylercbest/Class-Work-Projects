/*
Arrays
Author: $TCB
Date: 11/11/2024
*/

#include <iostream>

using namespace std;

int main(){
    // An enum type (i.e. enumeration type) is a user defined data type that
    // consists of integral constants. enum typeName {constant1, constant2, constant3}
    enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    
    Day d = FRIDAY;

    switch(d){
        case SUNDAY:
                cout << "Start of the week... " << endl;
                break; // continue keyword skips 1 iteration
        case MONDAY:
                cout << "Work Day... " << endl;
        case TUESDAY:
                cout << "Work Day... " << endl;
        case WEDNESDAY:
                cout << "Work Day... " << endl;
        case THURSDAY:
                cout << "Work Day... " << endl;
                break;
        case FRIDAY:
                cout << "Almost the weekend... " << endl;
                break;
        case SATURDAY:
                cout << "Off Day... " << endl;
        default:
                cout << "Not a valid Day!" << endl;
    }

    // BREAK
    // CONTINUE
    for(int i = 0; i<= 5; i++){
        if(i==3){
            //break;
            continue;
        }
        cout << i << endl;
    }


    return 0;
}