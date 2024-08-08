#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int dfs(vector<vector<int>> v, int qnt, int s) {
    vector<int> vis (qnt, 0);
    vector<int> dist (qnt, 0);
    int pos;
    int distMax  = 0;

    stack<int> st;
    st.push(s);
    vis[s] = 1;
    dist[s] = 0;

    while(!st.empty()) {
        int cur = st.top();
        st.pop();

        for(int i = 0; i < v[cur].size(); i++) {
            if(vis[v[cur][i]] != 1) {
                dist[v[cur][i]] = dist[cur] + 1;
                vis[v[cur][i]] = 1;
                st.push(v[cur][i]);
            
                if(dist[v[cur][i]] > distMax) {
                    distMax = dist[v[cur][i]];
                    pos = v[cur][i];
                }
            }
        }
    }
    return distMax;
}


vector<int> dfsDist(vector<vector<int>> v, int qnt) {
    vector<int> vis (qnt, 0);
    vector<int> dist (qnt, 0);

    int s = 0;

    stack<int> st;
    st.push(s);
    vis[s] = 1;
    dist[s] = 0;

    while(!st.empty()) {
        int cur = st.top();
        st.pop();

        for(int i = 0; i < v[cur].size(); i++) {
            if(vis[v[cur][i]] != 1) {
                dist[v[cur][i]] = dist[cur] + 1;
                vis[v[cur][i]] = 1;
                st.push(v[cur][i]);
            }
        }
    }
    return dist;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int comp;
        cin >> comp;

        vector<vector<int>> v (comp, vector<int> (0));
        for(int i = 0; i < v.size()-1; i++) {
            int a, b;
            cin >> a >> b;
            v[a].pb(b);
            v[b].pb(a);
        }

        vector<int> dist = dfsDist(v, comp);

        int pos = 0;
        int distMax = INT_MIN;
        for(int i = 0; i < dist.size(); i++) {
            if(dist[i] > distMax) {
                distMax = dist[i];
                pos = i;
            }
        }

        int ans = dfs(v, comp, pos);
        if(ans % 2 == 0) {
            ans/=2;
        } else {
            ans = (ans/2) + 1;
        }

        if(ans == 0) ans = 1;

        cout << ans << endl;
    }
    return 0;
}
