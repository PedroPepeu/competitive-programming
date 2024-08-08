#include <bits/stdc++.h> 

using namespace std;

int main() {
    int t, n;
    cin >> n >> t;

    vector<int> bks (n);
    for(int i = 0; i < n; i++) {
        cin >> bks[i];
    }

    int l = 0, r = 0, cur = 0, ans = 0;
    while(l < n && r < n) {
        while(r < n) {
            cur+=bks[r++];

            if(cur > t) {
                cur-=bks[--r];
                break;
            }
        }

        ans = max(ans, r-l);
        cur-=bks[l++];
    }

    cout << ans << endl;
    return 0;
}
