#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph; // adj matrix
                           // 1 == has connection
                           // 0 == do not has connection

vector<int> GGS(int s) {
    vector<int> visitedEdges (graph.size(), 0);
    queue<int> q; // could be stack<int> too
    q.push(s);

    while(!q.empty()) {
        s = q.front();
        q.pop();
        visitedEdges[s] = 1;
        
        for(int i = 0; i < graph[s].size(); i++) {
            if(graph[s][i] == 1 && visitedEdges[graph[s][i]] == 0) {
                q.push(graph[s][i]);
            }
        }
    }
    return visitedEdges;
}

int main() {
    int s;
    vector<int> vis = GGS(s);
    return 0;
}
