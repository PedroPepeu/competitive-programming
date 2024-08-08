#include <bits/stdc++.h>

using namespace std;

int check = 0;

void calc_dist(vector<vector<int>> &v, int u, vector<int> &vis, vector<int> &dist) {
    stack<int> s;
    s.push(u);
    dist[u] = 0;
    
    while(!s.empty()) {
        int cur = s.top();
        s.pop();

        vis[cur] = 1;

        for(auto &x : v[cur]) {
            if(vis[x] != 1) {
                s.push(x);
                vis[x] = 1;
                dist[x] = dist[cur] + 1;
            }
        }
    }
}

int main() {
    int n, a, b;
    scanf("%d", &n);

    vector<vector<int>> v (n, vector<int> (0));
    for(int i = 0; i < n-1; i++) {
        scanf("%d %d", &a, &b);
        a-=1;
        b-=1;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    vector<int> vis (v.size(), 0);
    vector<int> dist (v.size(), -1);
     
    calc_dist(v, 0, vis, dist);

    int bDist = -1000000000;
    int pos = -1;
    for(int i = 0; i < dist.size(); i++) {
        if(dist[i] > bDist) {
            bDist = dist[i];
            pos = i;
        }
    }

    vis = vector<int> (v.size(), 0);
    dist = vector<int> (v.size(), -1);

    calc_dist(v, pos, vis, dist);
    
    bDist = -1000000000;
    pos = -1;
    for(int i = 0; i < dist.size(); i++) {
        if(dist[i] > bDist) {
            bDist = dist[i];
            pos = i;
        }
    }
    
    printf("%d\n", bDist);

    return 0;
}
