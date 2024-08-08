#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> mltM (vector<vector<int>> v, int n, int m) {
    vector<vector<int>> base (v);
    for(int i = 0; i < n; i++) {
        vector<vector<int>> rs (m, vector<int> (m, 0));

        for(int x = 0; x < m; x++) {
            for(int y = 0; y < m; y++) {
                
            }
        }

        v = rs;
    }
    return v;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> mtx (m, vector<int> (m));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mtx[i][j];
        }
    }

    mtx = mltM(mtx, n, m);

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(j+1 == m) cout << mtx[i][j] << endl;
            else cout << mtx[i][j] << " ";
        }
    }
    }
    return 0;
}
