#include <bits/stdc++.h>

using namespace std;

int dist(int a, int b, vector<vector<int>> v, int bp, int m, int n) {
    int bsa = a, bsb = b;
    vector<vector<int>> vist (v);

    int bpc = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(a, b));
    int steps = 0;
    vist[a][b] = 1;

    while(bpc != bp) {
        pair<int, int> cur = q.front();
        if(v[cur.first][cur.second] == 1) {
            while(!q.empty()) {
                q.pop();
            }
            bpc++;
            steps+=(abs(cur.first - a)+abs(cur.second - b));
            a = cur.first;
            b = cur.second;
        } else {
            q.pop();
        }

        if(cur.first+1 < m && vist[cur.first+1][cur.second] != 1) {
            q.push(make_pair(cur.first+1, cur.second));
            vist[cur.first+1][cur.second] = 1;
        }
        if(cur.first-1 >= 0 && vist[cur.first-1][cur.second] != 1) {
            q.push(make_pair(cur.first-1, cur.second));
            vist[cur.first-1][cur.second] = 1;
        }
        if(cur.second+1 < n && vist[cur.first][cur.second+1] != 1) {
            q.push(make_pair(cur.first, cur.second+1));
            vist[cur.first][cur.second+1] = 1;
        }
        if(cur.second-1 >= 0 && vist[cur.first][cur.second-1] != 1) {
            q.push(make_pair(cur.first, cur.second-1));
            vist[cur.first][cur.second-1] = 1;
        }
    }
    steps+=(abs(a - bsa)+abs(b - bsb));
    return steps;
}

int mapping() {
    int m, n, ax, ay;
    int beep;
    int posa, posb;
    
    cin >> m >> n;    
    cin >> ax >> ay;
    vector<vector<int>> v (m, vector<int> (n, 0));

    cin >> beep;
    for(int i = 0; i < beep; i++) {
        cin >> posa >> posb;
        v[posa][posb] = 1;
    }

    cout << "The shortest path has length " << dist(ax, ay, v, beep, m, n) << endl;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        mapping();
    }
    return 0;
}
