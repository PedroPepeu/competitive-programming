#include<bits/stdc++.h>

using namespace std;

int search(int root, vector<vector<int>> adj) {
    vector<int> vist (adj.size(), -1);
    stack<int> s;
    s.push(root);
    vist[root] = 1;

    while(!s.empty()) {
        int cur = s.top();
        s.pop();

        for(int i = 0; i < adj[cur].size(); i++) {
            if(vist[adj[cur][i]] == -1) {
                s.push(adj[cur][i]);
                vist[adj[cur][i]] = 1;
            }
        }
    }

    for(int i = 0; i < vist.size(); i++) {
        if(vist[i] == -1) return 0;
    }
    return 1;
}

int main() {
    int e, l, teste = 1;
    while(cin >> e >> l && (e != 0 && l != 0)) {
        int entr, said;
        vector<vector<int>> est(e, vector<int> (0));
        for(int i = 0; i < l; i++) {     
            cin >> entr >> said;

            est[entr-1].push_back(said-1);
            est[said-1].push_back(entr-1);
        }

        cout << "Teste " << teste++ << endl;
        if(search(0, est)) {
            cout << "normal" << endl;
        } else cout << "falha" << endl;
        cout << endl;

    }
    return 0;
}
