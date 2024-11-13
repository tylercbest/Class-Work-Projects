#include<iostream>

using namespace std;
int main(){
    float user_value, conv_value;
    string error_message, curr_from, curr_to;
    error_message = "Inavlid currentcy or value, please try again";
    
    cout << "Please enter currency amount, currency type (USD, GBP, EUR), convert to type (USD, GBP, EUR)";
    cin >> user_value >> curr_from >> curr_to;

    if(curr_from == "USD" && curr_to == "EUR"){
        conv_value = user_value * .85;
    } else if(curr_from == "USD" && curr_to == "GBP"){
        conv_value = user_value *.75;
    }

    cout << user_value << " " << curr_from << " = " << fixed << conv_value << " " << curr_to << endl;

    return 0;
}