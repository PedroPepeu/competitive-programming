#include <bits/stdc++.h>

using namespace std;

bool prime[1000000000];

void SOE(int b = 1000000000) {
    for(int p = 2; p <= b; p++) {
        if(prime[p] == true) {
            for(int i = p*2; i <= b; i+=p) {
                prime[i] = false;
            }
        }
    }
}

int main() {
    int t;
    memset(prime, true, sizeof prime);
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        SOE();
        for(int i = a; i < b; i++) {
            if(i != 1 && prime[i] == true) {
                cout << i << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
