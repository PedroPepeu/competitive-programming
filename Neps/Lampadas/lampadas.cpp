#include <iostream>

using namespace std;

int A = 0, B = 0;

void lampA() {
    if(A == 0) A = 1;
    else A = 0;
}

void lampB() {
    if(B == 0) B = 1;
    else B = 0;
}

int main() {
    int t;
    cin >> t;
    int n;
    while(t--) {
        cin >> n;
        if(n == 1) {
            lampA();
        } else if(n == 2) {
            lampA();
            lampB();
        }
    }

    cout << A << endl << B << endl;
    
    return 0;
}
