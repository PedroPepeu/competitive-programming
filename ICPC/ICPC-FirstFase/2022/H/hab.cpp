#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<int, pair<int, int>> mp;

    for(int i = 1; i <= n; i++) mp[i]; // problem if it does not add the sequence

    int r, s;
    while(m--) {
        cin >> r >> s;
        mp[r].first++;
        mp[s].second++;
    }

    int count = 0;
    for(auto& x : mp) {
        if(x.second.first == 0 || x.second.second == 0) count++;
    }

    cout << count << endl;
    return 0;
}
