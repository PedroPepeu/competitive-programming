#include <bits/stdc++.h>
#define pb push_back
#define mk make_pair
using namespace std;

int djk(vector<vector<pair<int,int>>> grapth, int qnt, int start, int end) {
    vector<int> dist (qnt, INT_MAX);

    set<pair<int,int>> s;
    s.insert(mk(0, 0));
    dist[start] = 0;

    while(!s.empty()) {
        int cur = (*s.begin()).second;
        int cost = (*s.begin()).first;
        s.erase(s.begin());

        for(auto &x : grapth[cur]) {
            if(dist[x.first] > cost+x.second) {
                dist[x.first] = cost+x.second;
                s.insert(mk(dist[x.first], x.first));
            }
        }
    }

    return dist[qnt-1];
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, p;
    cin >> n >> p;
    n+=2;
    vector<vector<pair<int, int>>> v (n);

    int s, t, b;
    for(int i = 0; i < p; i++) {
        cin >> s >> t >> b;
        v[s].pb(mk(t, b));
        v[t].pb(mk(s, b));
    }

    int ans = djk(v, n, 0, n-1);
    cout << ans << endl;
    return 0;
}
