#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<char> c (a);
    for(int i = 0; i < a; i++) {
        cin >> c[i];
    }
    
    int ans = 0;

    int k = b, i = 0, j = 0, ca = 0; // a
    while(i < a) {
        ans = max(ans, ca);
        if(c[i] == 'a') {
            ca++;
            i++;
        }
        else if(k > 0) {
            k--;
            i++;
            ca++;
        } else {
            if(c[j] == 'b') k++;
            j++;
            ca--;
        }
    }

    ans = max(ans, ca);

    int kb = b, ib = 0, jb = 0, cb = 0; // b
    while(ib < a) {
        ans = max(ans, cb);
        if(c[ib] == 'b') {
            cb++;
            ib++;
        }
        else if(kb > 0) {
            kb--;
            ib++;
            cb++;
        } else {
            if(c[jb] == 'a') kb++;
            jb++;
            cb--;
        }
    }

    ans = max(ans, cb);

    cout << ans << endl;

    return 0;
}
