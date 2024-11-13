#include <iostream>

using namespace std;

int main(){
    int howMany, p, d, e, nextTerm = 0;
    cout << "Number of terms: ";
    cin >> howMany;
    for (p = 1; p <= howMany; ++p){
            if (p == 1){
                d = p - 1;
                cout << d << ", ";
                if (p == howMany){
                    cout << "The term requested is: " << d;
                }
            } else if (p == 2){
                e = p - 1;
                cout << e << ", ";
                if (p == howMany){
                    cout << "The term requested is: " << e;
                }
            } else {
                nextTerm = d + e;
                d = e;
                e = nextTerm;
                cout << nextTerm << ", ";
                if (p == howMany){
                    cout << nextTerm << " is the end term!";
                }
            }
    }
    return 0;
}