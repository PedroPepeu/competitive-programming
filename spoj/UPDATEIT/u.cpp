#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, u, l, r, vl;
        cin >> n >> u;

        vector<int> v (n);
        vector<int> vi (n, 0);
        for(int i = 0; i < u; i++) {
            cin >> l >> r >> vl;
            vi[l]+=vl;
            vi[r+1]-=vl;
        }

        int k = 0;
        for(int i = 0; i < n; i++) {
            k+=vi[i];
            v[i]+=k;
        }

        int m, mi;
        cin >> m;
        while(m--) {
            cin >> mi;
            cout << v[mi] << endl;
        }
    }
    return 0;
}
