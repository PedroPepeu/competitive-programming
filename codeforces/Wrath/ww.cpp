#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;


    vector<int> a (n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i < n; i++) {
        if(a.size()==1) break;
        if(a[i] == 0 || a[i] == -1) continue;

        int beg = i-a[i];

        if(beg < 0) beg = 0;

        for(int j = beg; j < i; j++) {
            a[j] = -1;
        }
    }

    int c = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != -1) c++;
    }
    cout << c << endl;

    return 0;
}
