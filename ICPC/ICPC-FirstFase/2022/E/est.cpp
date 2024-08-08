#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<int> v;

    cin >> n;

    int x;
    while(n--) {
        cin >> x;
        v.push_back(x);
    }

    int actual, ar = 0;
    for(int i = 0; i < v.size() - 1; i++) {
        if(v[i] == -1) continue;
        actual = v[i];
        v[i] = -1;
        for(int j = i+1; j < v.size(); j++) {
            if(actual == 1) break;

            if(actual-1 == v[j]) {
                actual = v[j];
                v[j] = -1;
            }
        }
        ar++;
    }

    if(v[v.size()-1] != -1) ar++;

    cout << ar << endl;
    return 0;
}
