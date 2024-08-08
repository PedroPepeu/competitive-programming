#include <bits/stdc++.h>

#define pb push_back
#define mk make_pair

using namespace std;

vector<int> djk (vector<vector<pair<int, int>>> vvp, int s) {
    vector<int> dist (vvp.size(), INT_MAX);
    vector<int> vis (vvp.size(), 0);

    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        vis[cur] = 1;

        for(int i = 0; i < vvp[cur].size(); i++) {
            int actual = vvp[cur][i].first;
            if(vis[actual] != 1) {
                dist[actual] = min(dist[actual], dist[cur]+vvp[cur][i].second);
                q.push(actual);
            }
        }
    }

    return dist;
}

int main() {
    int n, e, t;
    cin >> n;
    cin >> e >> t;

    e-=1;

    int inp;
    cin >> inp;
    
    vector<vector<pair<int, int>>> vvp (n, vector<pair<int,int>> (0));
    for(int i = 0; i < inp; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        a-=1;
        b-=1;
        vvp[b].pb(mk(a, w));
    }

    int count = 0;
    vector<int> dist = djk(vvp, e);
    for(int i = 0; i < dist.size(); i++) {
        if(dist[i] <= t) {
            count++;
        }
    }

    cout << count << endl;
}
