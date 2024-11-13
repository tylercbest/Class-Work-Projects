/*
Input Functions
Author: $TCB
Date: 09/11/2024
*/

#include<iostream>

using namespace std;
int main(){
    //Declare Variables
    int x_i, y_i;
    double z_d;
    char p_c, q_c, r_c, s_c, t_c; 

    //cin >> p_c >> x_i >> z_d;
    //cout << p_c << " " << x_i << " " << z_d;
    // a 10 10.5 // 10 8 7.5

    // ignore(num, char): ignore next num characters or until it sees the given char.
    //cin.ignore(2, 'e');
    //cin >> y_i;
    //cout << y_i;
    //cin.ignore(5, 'w');
    //cin >> p_c; // abcdefwtr abcwtr
    //cout << p_c;

    // peek(): helps read one character from the stream, but does not remove the character from the stream
    //q_c = cin.peek();
    //cin >> r_c;     //ab
    //cout << q_c << " " << r_c;

    // get(): get reads 1 character at a time and does not ignore space
    //cin.get(s_c); //ab
    //cout << s_c;

    // putback(): Puts the char back to the iostream
    cin.putback('m');
    cin >> p_c;
    cout << p_c;

    return 0;
}