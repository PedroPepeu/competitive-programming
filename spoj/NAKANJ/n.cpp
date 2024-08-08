#include <bits/stdc++.h>

#define mk make_pair

using namespace std;
// try with structs after
int bfs(int sx, int sy, int dx, int dy) {
    vector<vector<int>> dist (8, vector<int> (8, -1));

    queue<pair<int, int>> q;
    q.push(mk(sx, sy));
    dist[sx][sy] = 0;
    
    while(!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        if(cur.first-2 >= 0 && cur.second-1 >= 0 && vis[cur.first][cur.second] != 1) {
            q.push(mk(cur.first-2, cur.second-1));
        }
        if(cur.first-1 >= 0 && cur.second-2 >= 0 && vis[cur.first][cur.second] != 1) {
            q.push(mk(cur.first-1, cur.second-2));
        }
        if(cur.first+1 < 8 && cur.second-2 >= 0 && vis[cur.first][cur.second] != 1) {
            q.push(mk(cur.first+1, cur.second-2));
        }
        if(cur.first+2 < 8 && cur.second-1 >= 0 && vis[cur.first][cur.second] != 1) {
            q.push(mk(cur.first+2, cur.second-1));
        }
        if(cur.first+2 < 8 && cur.second+1 < 8 && vis[cur.first][cur.second] != 1) {
            q.push(mk(cur.first+2, cur.second+1));
        }
        if(cur.first+1 < 8 && cur.second+2 < 8 && vis[cur.first][cur.second] != 1) {
            q.push(mk(cur.first+1, cur.second+2));
        }
        if(cur.first-1 >= 0 && cur.second+2 < 8 && vis[cur.first][cur.second] != 1) {
            q.push(mk(cur.first-1, cur.second+2));
        }
        if(cur.first-2 >= 0 && cur.second+1 < 8 && vis[cur.first][cur.second] != 1) {
            q.push(mk(cur.first-2, cur.second+1));
        }
    }
}

int main() {

}
