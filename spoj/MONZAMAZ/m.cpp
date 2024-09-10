#include <bits/stdc++.h>
#include <queue>

#define pb push_back
#define mk make_pair

using namespace std;

typedef pair<int, int> pii;

int search(pii begin, vector<pii> map) {
    vector<int> vist (map.size(), 0);

    queue<pii> q;
    q.push(begin);
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(auto &xC : map) {
            float dist = sqrt((x-xC.first)*(x-xC.first)+(y-xC.second)*(y-xC.second));
        }
    }
}

int main() {
    int n;
    pii begin;
    scanf("%d %d", &begin.first, & begin.second);
    vector<pii> v (n-1);
    for(int i = 0; i < n-1; i++) scanf("%d %d", &v[i].first, &v[i].second);

    if(search(begin, v)) {
        printf("All stations are reacheble.\n");
    } else {
        printf("There are stations that are unreachable\n");
    }
}
