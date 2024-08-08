#include <bits/stdc++.h>

#define pb push_back
#define mk make_pair

using namespace std;

void djk(vector<vector<pair<int, int>>> vr, int s, int d) {
    
}

int main() {
    int n, m;
    cin >> n >> m;
    int s, d;
    cin >> s >> d;

    vector<vector<pair<int, int>>> vR (n, vector<pair<int, int>>);
    vector<vector<pair<int, int>>> v (n, vector<pair<int, int>>);
    for(int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;

        v[a].pb(mk(b, w));
        vR[b].pb(mk(a, w));
    }

    djk(vR, s, d);
}
