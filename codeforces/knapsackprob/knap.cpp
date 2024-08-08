#include <bits/stdc++.h>

using namespace std;

int n, w, nTotal = 200000, t, m;
long long W, C;
vector<int> number;

void impossible() {
    cout << -1 << endl;
}

int main() {
    cin >> t;
    while(t--) {
        cin >> n >> W;
        string str;
        getline(cin, str);
        stringstream ss(str);
        int num;
        while(ss >> num) number.push_back(num);
        int * ptr;
        ptr = number;

    }

    return 0;
}
