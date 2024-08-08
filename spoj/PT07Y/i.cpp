#include <bits/stdc++.h>

using namespace std;

int isTree(int n, vector<pair<int, int>> v) {
    vector<int> vis (n+1, 0);
    vector<int> ante (n+1, -1);
    queue<int> q;
    q.push(1);

    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        vis[cur] = 1;

        for(int i = 0; i < v.size(); i++) {
            if((v[i].first == cur && vis[v[i].second] == 0) ||
                    (v[i].second == cur && vis[v[i].first] == 0)) {
                q.push(v[i].first+v[i].second-cur);
                ante[q.back()] = cur;
            }

            if(v[i].first == cur && vis[v[i].second] == 1 && v[i].second != ante[cur]) {
                return 0;
            } else if(v[i].second == cur && vis[v[i].first] == 1 && v[i].first != ante[cur]) {
                return 0;
            }
        }
    }

    for(int i = 1; i < vis.size(); i++) {
        if(vis[i] == 0) return 0;
    }
    return 1;
}

int main() {
    int n, l;
    cin >> n >> l;
    int a, b;
    vector<pair<int, int>> v (l);
    while(l--) {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    if(isTree(n, v)) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
