#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

map<int, int> m;

int d(int x) {
    int sum = 2;

    for(int i = 2; i < sqrt(x); i++) {
        if(x%i == 0) sum+=2;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int l, u;
        cin >> l >> u;
       
        m[1] = 1;
        m[4] = 3;

        int mx;
        pii max (INT_MIN, 0);
        for(int i = l; i <= u; i++) {
            if(m.count(i)>0) mx = m[i];
            else {
                mx = d(i);
                m[i] = mx;
            }
            if(mx > max.first) max = make_pair(mx, i);
        }

        printf("Between %d and %d, %d has a maximum of %d divisors.\n", l, u, max.second, max.first);
    }
    return 0;
}
