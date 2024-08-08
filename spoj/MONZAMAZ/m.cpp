#include <bits/stdc++.h>

#define pb push_back
#define mk make_pair

using namespace std;

typedef pii pair<int, int>

int bfs(vector<pii> grapth, int n) {
    queue<pii> q;
    vector<int> v (n,0);

    set<int, pair<int, int>> s;
}

int main() {
    int n;
    while(scanf("%d", &n) && n != 0) {
        vector<pii> v;

        int x, y;
        for(int i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
            v.pb(mk(x, y));
        }

        if(bfs(v, n)) {
            printf("All stations are reachable.\n");
        } else {
            printf("There are stations that are unreachable.\n");
        }
    }

    return 0;
}
