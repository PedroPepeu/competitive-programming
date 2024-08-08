#include <vector>
#include <queue>
#include <iostream>
#define INF ((int) 1e9)

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;

int N, M;
vector<int> dist;
vector<vii> LG;

void djk(int s) {
    dist.assign(N, INF);
    dist[s] = 0;
    
    priority_queue<ii, vector<ii>, greater<ii>> Q;
    Q.push(ii(0, s));
    while(!Q.empty()) {
        int u = Q.top().second; Q.pop();
        for(auto e : LG[u]) {
            int v = e.first, w = e.second;
            if(dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                Q.push(ii(dist[v], v));
            }
        }
    }
}

int main() {
    djk(30);
}
