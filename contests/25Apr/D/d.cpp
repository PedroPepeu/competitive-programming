#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

int prod = 1;
int sum = 0;
vector<int> pathSum;

void dfs(vector<vector<pair<int, int>>> v, int bw, vector<int> vist, int st, int ed) {
    vist[st] = 1;
    prod*=(st+1);
        
    if(st == ed) {
        for(int i = 0; i < pathSum.size(); i++) {
            if(pathSum[i] == prod) return;
        }
        pathSum.pb(prod);
        sum += bw;
        return;
    }

    int sv = bw;
    int svP = prod;

    for(auto &x : v[st]) {
        if(vist[x.first] != 1) {
            if(x.second < bw) {
                bw = x.second;
            }
            dfs(v, bw, vist, x.first, ed);
            bw = sv;
            prod = svP;
        }
    }
    return;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, net = 1;
    while(cin >> n && n != 0) {
        sum = 0;
        prod = 1;

        int s, t, c;
        cin >> s >> t >> c;
        vector<vector<pair<int, int>>> v (n);
        
        int a, b, w;
        while(c--) {
            cin >> a >> b >> w;
            a-=1;
            b-=1;
            v[a].pb(mp(b, w));
            v[b].pb(mp(a, w));
        }

        vector<int> vist (n, -1);

        dfs(v, INT_MAX, vist, s-1, t-1);
        
        cout << "Network " << net << endl;
        cout << "The bandwidth is " << sum << endl;
        net++;
    }
    return 0;
}
