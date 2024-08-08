#include <iostream>

using namespace std;

typedef int64_t it6;

it6 fact(it6 x) {
    if(x == 1 || x == 0) return 1;
    return x * fact(x-1);
}

it6 gcd(it6 u, it6 v) {
    return u % v == 0 ? v : gcd(v, u % v);
}

int main() {
    it6 x, y;

    cin >> x >> y;

    if(x == 0|| y == 0) {
        cout << 1 << endl;
        return 0;
    }

    if(x > y) {
        it6 temp = x;
        x = y;
        y = temp;
    }

    x = fact(x);

    it6 c = 1;
    for(int i = y; i > 0; i--) {
        c *= i;
        if(c % x == 0) {
            cout << x << endl;
            return 0;
        }
    }    

    cout << gcd(x, c) << endl;
    return 0;
}
