#include <iostream>
#include <cmath>

using namespace std;

int primechk(int p) {
    for(int i = 2; i < sqrt(p); i++) {
        if(p%i == 0) return 0;
    }
    return 1;
} 

int minorPrime(int x, int y) {
    return x / y; // return the prime number resulting from the gcd divisor
}

int gcd(int u, int v) {
    return u % v == 0 ? v : gcd(v, u%v); // return the greatest divisor
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
    }
}
