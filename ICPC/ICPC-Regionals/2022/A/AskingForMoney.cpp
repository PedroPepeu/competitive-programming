#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;

    for(int i = 1; i <= n; i++) {
        m[i] += 2;
        int l, r;
        cin >> l >> r;
        m[l] -= 1;
        m[r] -= 1;
    }

    for(auto& x: m) {
        if(x.second > 0) cout << "N";
        else cout << "Y";
    }

    cout << endl;
}
