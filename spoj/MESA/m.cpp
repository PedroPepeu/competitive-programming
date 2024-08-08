#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int check;

void dfs(vector<vector<int>> v, int u) {
    vector<int> vis (v.size(), 0);
    vector<int> ante (v.size(), -1);
    vector<int> dist (v.size(), -1);

    stack<int> s;
    s.push(u);
    vis[u] = 1;
    dist[u] = 0;

    while(!s.empty()) {
        int cur = s.top();
        s.pop();

        for(auto &x : v[cur]) {
            if(vis[x] == 1 && x != ante[cur] && ((dist[cur] - dist[x]) % 2 == 0)) { 
                check = 1;
                return;
            }
            if(vis[x] != 1) {
                s.push(x);
                vis[x] = 1;
                ante[x] = cur;
                dist[x] = dist[cur]+1;
            }

        }
    }
}

int main() {
    int n, m, u, v, t = 1;
    while(scanf("%d %d", &n, &m) == 2) {
        vector<vector<int>> vv (n, vector<int> (0));
        for(int i = 0; i < m; i++) {
            scanf("%d %d", &u, &v);
            u-=1;
            v-=1;

            vv[u].pb(v);
            vv[v].pb(u);
        }

        check = 0;
        for(int i = 0; i < n; i++) {
            dfs(vv, i);
        }

        cout << "Instancia " << t++ << endl;
        if(check) {
            cout << "nao" << endl;
        }
        else {
            cout << "sim" << endl;
        }
        cout << endl;
    }
    return 0;
}
