#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> dp (10000, vector<int> (10000, -1));

int djik(vector<vector<int>> adj, int src, int maxSize) {
    vector<int> vst (maxSize+1, -1);
    vector<int> dist (maxSize+1, INT_MIN);

    vst[src] = 1;
    dist[src] = 0;
    dp[src][src] = 0;

    //for(int i = 0; i < maxSize; i++) {
        //if(dp[src][i] != -1) dist[i] = dp[src][i];
    //}

    queue<int> q;
    q.push(src);

    while(!q.empty()) {
        int cur = q.front();q.pop();

        for(vector<int> x : adj) {
            if(x[0] == cur) {
                if(vst[x[1]] == -1) {
                    q.push(x[1]);
                    vst[x[1]] = 1;
                    dist[x[1]] = max(dist[src], dist[cur]+x[2]);
                    dp[src][x[1]] = dist[x[1]];
                }
            }
            if(x[1] == cur) {
                if(vst[x[0]] == -1) {
                    q.push(x[0]);
                    vst[x[0]] = 1;
                    dist[x[0]] = max(dist[src], dist[cur]+x[2]);
                    dp[src][x[0]] = dist[x[0]];
                }
            }
        }
    }

    sort(dist.begin(), dist.end(), [](int &left, int &right) {
            return left > right;
            });

    return dist[0];
}

int main() {
    int a, b, c, maxi = INT_MIN;
    vector<vector<int>> adj;
    while(cin >> a >> b >> c) {
        vector<int> temp;
        temp.push_back(a-1);
        temp.push_back(b-1);
        temp.push_back(c);
        adj.push_back(temp);
        maxi = max(maxi, a-1);
        maxi = max(maxi, b-1);
    }

    int ans = INT_MIN;
    for(int i = 0; i < maxi; i++) {
        ans = max(ans, djik(adj, i, maxi));
    }

    cout << ans << endl;

    return 0; 
}
