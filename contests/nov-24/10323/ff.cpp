#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull fac(ull f) {
    if(f == 0 || f == 1) return 1;

    return f*fac(f-1);
}

int main() {
    ull x;
    while(cin >> x) {

        x%=6227020800;

        if(x > 13) {
            cout << "Overflow! " << x << endl;
        } else if(x <= 7) {
            cout << "Underflow! " << x << endl;
        } else {
            ull y = fac(x);
            if(y < 10000) cout << "Underflow!" << endl;
            else if(y >= 6227020800) cout << "Overflow!" << endl;
            else cout << y << endl;
        }
    }
    return 0;
}
