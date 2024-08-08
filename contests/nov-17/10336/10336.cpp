#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n;
        cin >> m >> n;
        vector<vector<char>> l (m);
        vector<vector<int>> b (m);
        for(int i = 0; i < m; i++) {
            vector<int> tm (n, 0);
            b.push_back(tm);
        }

        char tmp;        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                vector<char> tmpl (n);
                cin >> tmp;
                tmpl.push_back(tmp);
            }
            l.push_back(tmpl);
        }


    }
}
