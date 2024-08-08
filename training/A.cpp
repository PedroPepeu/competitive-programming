#include <iostream>

using namespace std;

int fact(int x) {
    
    int xcp = x;
    
    if(x > 1) {
        for(int i = 0; i < xcp; i++) {
            x *= x - 1;
        }
    }
    return x;
}

int main() {

    int tests;
    cin >> tests;
    while(tests--) {
        
        int k, x;
        cin >> k;
        x = k - 1;
        
        int calc = fact(x) + fact(x - 1);

        if(calc % k == 0) {
            cout << x << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}

