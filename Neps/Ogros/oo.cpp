#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> faixas (n-1);
    for(int i = 0; i < n-1; i++) {
        cin >> faixas[i];
    }

    vector<int> premi (n);
    for(int i = 0; i < n; i++) {
        cin >> premi[i];
    }

    int mi;
    for(int i = 0; i < m; i++) {
        cin >> mi;    

        int ma, c = 1;
        for(int i = 0; i < faixas.size(); i++) {
            if(mi < faixas[i]) {
                ma = premi[i];
                c=0;
                break;
            }
            if(mi == faixas[i]) {
                ma = premi[i+1];
                c=0;
                break;
            }
        }
        if(c) ma = premi[n-1];

        cout << ma;
        if(i+1==m) cout << endl;
        else cout << " ";
    }

    return 0;
}
