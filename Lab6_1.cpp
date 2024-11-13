/*
data.txt
John 67.8 76.5 78.4
Mike 89.7 56.3 
Sonia 78.7 45.6 90.2 43.5

output text:
John 74.23
*/

#include <iostream>
#include <fstream> //for ifstream ofstream
#include <sstream> //for istringstream and iss

using namespace std;

int main(){
    ifstream in;
    ofstream out;
    string line;

    in.open("data.txt");
    out.open("outputData.txt");

    //Read each line in the file
    while(getline(in, line)){
        istringstream iss;
        string name;
        float score, sum = 0.0;
        int count = 0;
        iss.str(line);
        iss >> name;
        cout << name << " ";
        out << name << " "; 
        //Read the score and calculate sum and count
        while(iss >> score){
            sum = sum + score;
            ++count;
        }
        // if else chain via our counter to get average of scores or return message when no scores entered
        if(count > 0){
            float average;
            average = sum / count;
            cout << "grade average: " << setprecision(4) << average << "%" << endl;
            out << "grade average: " << setprecision(4) << average << "%" <<endl;
        }
        else{
            cout << ": No grades entered.";
            out << ": No grades entered.";
        }
        
    }
    //Close files
    in.close();
    out.close();

    return 0;
}