#include <bits/stdc++.h>

using namespace std;

int prime(int p) {
    for(int i = 2; i <= sqrt(p); i++) {
        if(p % i == 0) {
            return 0;
        }
    }
    return 1;
}

int tp(unsigned long long int t) {
    unsigned long long int sqt = sqrt(t);
    if(sqt * sqt == t && prime(sqt) && t != 1) {
        return 1;
    }
    return 0;
}

int main() {
    unsigned long long int t, t1;
    cin >> t;
    while(t--) {
        cin >> t1;
        if(tp(t1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
