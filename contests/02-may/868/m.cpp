#include <bits/stdc++.h>
#define pb push_back
#define mk make_pair

using namespace std;

typedef pair<int, int> pii;

vector<pair<int,int>> pathNum(vector<vector<int>> v, int x, int y, int stX, int stY, int counter, int limit) {
    if(x == v.size()) {
        vector<pii> vp;
        vp.pb(mk(stX, stY));
        vp.pb(mk(x, y));
        return vp; // completed
    }

    int fl = 1;
    if(counter > limit) {
        counter = 1;
        limit++; 
    }

    int limSv = limit;

    if(x+1 < v.size() && v[x+1][y] == counter) {
        vector<pii> vp = pathNum(v, x+1, y, stX, stY, counter++, limit);
        if(vp[0].first != -1) {
            return vp;
        }
        limit = limSv;
    }

    if(y-1 >= 0 && v[x][y-1] == counter) {
        vector<pii> vp = pathNum(v, x, y-1, stX, stY, counter++, limit);
        if(vp[0].first != -1) {
            return vp;
        }
        limit = limSv;
    }

    if(y+1 < v.size() && v[x][y+1] == counter) {
        vector<pii> vp = pathNum(v, x, y+1, stX, stY, counter++, limit);
        if(vp[0].first != -1) {
            return vp;
        }
        limit = limSv;
    }

    if(x-1 >= 0 && v[x-1][y] == counter) {
        vector<pii> vp = pathNum(v, x-1, y, stX, stY, counter++, limit);
        if(vp[0].first != -1) {
            return vp;
        }
        limit = limSv;
    }

    vector<pii> vp;
    vp.pb(mk(-1, -1));
    vp.pb(mk(-1, -1));
    return vp; // fail
    
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while(t--) {
        int m, n;
        cin >> m >> n;

        vector<vector<int>> v (m, vector<int> (n));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> v[i][j];
            }
        }

        vector<pii> ans;
        int fl = 0;
        for(int i = 0; i < m; i++) {
            if(v[i][0] == 1) {
                ans = pathNum(v, 0, i, 0, i, 1, 2);
            }
            if(ans[0].first != -1) {
                fl = 1;
                break;
            }
        }

        cout << ans[0].first << " " << ans[0].second << endl << ans[1].first << " " << ans[1].second << endl;
    }
    return 0;
}
