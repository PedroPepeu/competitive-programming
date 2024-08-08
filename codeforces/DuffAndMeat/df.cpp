#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vpii (n);
    
    while(n--) {    
        int a, p;
        cin >> a >> p;

        vpii.push_back(a, p);
    }
}
