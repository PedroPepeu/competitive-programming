#include<bits/stdc++.h>

using namespace std;

pair<int, vector<vector<int>>> DFS(vector<vector<char>> v, vector<vector<int>> vs, char land, int x, int y, int m, int n) {
    int lands = 0;

    stack<pair<int,int>> s;
    s.push(make_pair(x, y));
    vs[x][y] = 0;

    while(!s.empty()) {
        lands++;
        pair<int, int> cur = s.top();
        s.pop();

        if(cur.second-1 < 0 && v[cur.first][n-1] == land && vs[cur.first][n-1] == -1) {
            s.push(make_pair(cur.first, n-1));
            vs[cur.first][n-1] = 0;
        }
        if(cur.second+1 >= n && v[cur.first][0] == land && vs[cur.first][0] == -1) {
            s.push(make_pair(cur.first, 0));
            vs[cur.first][0] = 0;
        }

        if(cur.first-1 >= 0 && v[cur.first-1][cur.second] == land) {
            if(vs[cur.first-1][cur.second] == -1) {
                s.push(make_pair(cur.first-1, cur.second));
                vs[cur.first-1][cur.second] = 0;
            }
        }
        if(cur.first+1 < m && v[cur.first+1][cur.second] == land) {
            if(vs[cur.first+1][cur.second] == -1) {
                s.push(make_pair(cur.first+1, cur.second));
                vs[cur.first+1][cur.second] = 0;
            }
        }
        if(cur.second-1 >= 0 && v[cur.first][cur.second-1] == land) {
           if(vs[cur.first][cur.second-1] == -1) {
                s.push(make_pair(cur.first, cur.second-1));
                vs[cur.first][cur.second-1] = 0;
            }
        }
        if(cur.second+1 < n && v[cur.first][cur.second+1] == land) {
            if(vs[cur.first][cur.second+1] == -1) {
                s.push(make_pair(cur.first, cur.second+1));
                vs[cur.first][cur.second+1] = 0;
            }
        }
    }
    
    return make_pair(lands, vs);
}

int main() {
    int m, n;
    while(cin >> m >> n) {
        vector<vector<int>> vs (m, vector<int> (n, -1));
        vector<vector<char>> vvi (m,vector<char> (n));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> vvi[i][j];
            }
        }

        int posX, posY;
        cin >> posX >> posY;
        char land = vvi[posX][posY];
        int ans = INT_MIN;

        pair<int, vector<vector<int>>> temp = DFS(vvi, vs, land, posX, posY, m, n);
        vs = temp.second;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(vvi[i][j] == land && vs[i][j] == -1) {
                    pair<int, vector<vector<int>>> rtrn = DFS(vvi, vs, land, i, j, m, n);
                    ans = max(ans, rtrn.first);
                    vs = rtrn.second;
                }
            }
        }

        if(ans == INT_MIN) {cout << 0 << endl; continue;}
        cout << ans << endl;
    }
    return 0;
}
