#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    long long x;
    cin >> x;
    int y = 0;
    
    for(long long i = 2; i < sqrt(x); i++) {
        if(x % i == 0) {
            y = 1;
        }
    }

    if(y == 1) cout << "S" << endl;
    else cout << "N" << endl;
}
