#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, x, T, nextTo, answ;
    double power;
    cin >> T;
    while(T--) {
        cin >> a >> b >> x;
        power = pow(a, b);
        int powerI = int(power);
        nextTo = powerI % x;
        power -= x;
        cout << power << endl;
    }
}
