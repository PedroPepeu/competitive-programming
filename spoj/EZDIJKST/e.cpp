#include <bits/stdc++.h>
#define pb push_back
#define mk make_pair
using namespace std;

vector<int> dfs(vector<vector<pair<int, int>>> grapth, int start, int end, int qnt) {
    vector<int> vist (qnt, 0);
    vector<int> dist (qnt, INT_MAX);

    stack<int> s;
    s.push(start);
    dist[start] = 0;

    while(!s.empty()) {
        int cur = s.top();
        s.pop();
        vist[cur] = 1;

        for(auto &x : grapth[cur]) {
            if(vist[x.first] != 1) {
                dist[x.first] = min(dist[x.first], dist[cur]+x.second);
                s.push(x.first);
            }
        }
    }

    return dist;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int v, k, a, b, w;
        scanf("%d %d", &v, &k);
        vector<vector<pair<int, int>>> vv (v);

        for(int i = 0; i < k; i++) {
            scanf("%d %d %d", &a, &b, &w);
            a--;
            b--;

            vv[a].pb(mk(b, w));
        }

        int stt, end;
        scanf("%d %d", &stt, &end);
        stt--;
        end--;

        vector<int> dist = dfs(vv, stt, end, v);
        int ans = dist[end];

        if(ans == INT_MAX) {
            printf("NO\n");
            continue;
        }
        printf("%d\n", ans);
    }
    return 0;
}
