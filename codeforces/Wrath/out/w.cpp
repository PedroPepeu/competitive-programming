#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vi (n);
    for(int i = 0; i < n; i++) {
        cin >> vi[i];
    }

    int k = vi[n-1], ans = 1;
    for(int i = n-2; i >= 0; i--) {
        if(k<=0) {
            ans++;
        }
        if(vi[i] >= k) {
            k = max(k, vi[i]);
            continue;
        }
        k--;
    }

    cout << ans << endl;
    return 0;
}
