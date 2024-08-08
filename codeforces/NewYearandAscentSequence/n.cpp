#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, li;
    cin >> n;

    vector<vector<int>> v;
    for(int i = 0; i < n; i++) {
        cin >> li;
        vector<int> vi (li);
        for(int j = 0; j < n; j++) {
            cin >> vi[j];
        }
        v.push_back(vi);
    }


}
