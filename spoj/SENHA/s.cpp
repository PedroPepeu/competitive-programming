#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int tst = 1;
    while(cin >> n && n != 0) {
        vector<vector<pair<int, int>>> sample (n, vector<pair<int, int>> (6, pair<int, int> (make_pair(0,0))));
        for(int i = 0; i < n; i++) {
            int a, b;
            vector<pair<int,int>> p (5);
            for(int j = 0; j < 5; j++) {
                cin >> p[j].first >> p[j].second;
            }
            char c;
            for(int j = 0; j < 6; j++) {
                cin >> c;
                if(c == 'A') {
                    sample[i][j] = p[0];
                } else if(c == 'B') {
                    sample[i][j] = p[1];
                } else if(c == 'C') {
                    sample[i][j] = p[2];
                } else if(c == 'D') {
                    sample[i][j] = p[3];
                } else if(c == 'E') {
                    sample[i][j] = p[4];
                }
            }
        }

        vector<int> ans (6);

        for(int j = 0; j < 6; j++) {
            vector<int> v (10, 0);
            for(int i = 0; i < n; i++) {
                v[sample[i][j].first]++;
                v[sample[i][j].second]++;
            }
            pair<int, int> choose = make_pair(-1, INT_MIN);
            for(int i = 0; i < 10; i++) {
                if(v[i] > choose.second) {
                    choose = make_pair(i, v[i]);
                }
            }
            ans[j] = choose.first;
        }

        printf("Teste %d\n", tst++);
        for(int i = 0; i < ans.size(); i++) {
            if(i + 1 == ans.size()) {
                cout << ans[i] << endl;
            } else {
                cout << ans[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
