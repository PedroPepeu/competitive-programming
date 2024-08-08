#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a;

    int t;
    for(int i = 0; i < n; i++) {
        cin >> t;
        a.push_back(t);
    }
    int l, x, r;
    while(m--) {
        cin >> l >> r >> x;
        vector<int> b (a);
        sort(b.begin()+l-1, b.begin()+r);
        if(a[x-1] == b[x-1]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
