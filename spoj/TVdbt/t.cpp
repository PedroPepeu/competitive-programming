#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> trnsV(vector<vector<int>> v, int k) {
    k*=-1;
    if(k<0) k = v.size() - (k%v.size();
    vector<vector<int>> aux (v);
    for(int i = 0; i < v.size(); i++) {
        vector<int> lines (v[i]);
        
        aux[(i+k)%v.size()] = lines;
    }
    return aux;
}

vector<vector<int>> trnsH(vector<vector<int>> v, int k) {
    vector<vector<int>> aux (v);
    for(int j = 0; j < v[0].size(); j++) {
        vector<int> columns (v.size());
        for(int i = 0; i < v.size(); i++) {
            columns[i] = v[i][j];
        }
        for(int i = 0; i < v.size(); i++) {
            aux[i][(j+k)%v[0].size()] = columns[i];
        }
    }
    return aux;
}

int main() {
    int m, n, teste = 1;
    while(cin >> m >> n && (m+n != 0)) {
        vector<vector<int>> mtx (m, vector<int> (n, 0));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> mtx[i][j];
            }
        }

        int x, y, X = 0, Y = 0;
        while(cin >> x >> y) {
            if(x == 0 && y == 0) break;

            X+=x;
            Y+=y;
        }
        if(X!=0) mtx = trnsH(mtx, X);
        if(Y!=0) mtx = trnsV(mtx, Y);

        cout << "Teste " << teste << endl;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(j+1 == n) cout << mtx[i][j] << endl;
                else cout << mtx[i][j] << " ";
            }
        }
        cout << endl;
        teste++;
    }
    return 0;
}
