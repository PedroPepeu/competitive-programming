#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;


    vector<pair<int, int>> a (n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i+1
    }

    for(int i = 1; i < n; i++) {
        if(a.size()==1) break;
        if(a[i] == 0) continue;
        int L = a[i], Ls = a[i], Is = i;
        while(L--) {
            if(a[i-1] >= Is-Ls) {
                a.erase(a.begin()+i-1);
                i--;
            }
            if(i <= 0 || a.size()==1) break;
        }
    }

    cout << a.size() << endl;

    return 0;
}
