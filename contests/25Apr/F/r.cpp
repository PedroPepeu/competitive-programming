#include <bits/stdc++.h>
#define mk make_pair
#define pb push_back
using namespace std;

int dfsPos(map<int, vector<pair<int, int>>> graph, int vill) {
    vector<int> dist (vill, -1);
    vector<int> vis (vill, 0);
    pair<int, int> sv = mk(-1, -1); // dist, pos

    stack<int> s;
    s.push(0);
    vis[0] = 1;
    dist[0] = 0;

    while(!s.empty()) {
        int cur = s.top();
        s.pop();

        for(auto &x : graph[cur]) {
            if(vis[x.first] != 1) {
                s.push(x.first);
                dist[x.first] = dist[cur] + x.second;
                vis[x.first] = 1;

                if(dist[x.first] > sv.first) {
                    sv.first = dist[x.first];
                    sv.second = x.first;
                }
            }
        }
    }

    return sv.second;
}

int dfsDist(map<int, vector<pair<int, int>>> graph, int vill, int st) {
    vector<int> dist (vill, -1);
    vector<int> vis (vill, 0);
    pair<int, int> sv = mk(-1, -1); // dist, pos

    stack<int> s;
    s.push(st);
    vis[st] = 1;
    dist[st] = 0;

    while(!s.empty()) {
        int cur = s.top();
        s.pop();

        for(auto &x : graph[cur]) {
            if(vis[x.first] != 1) {
                s.push(x.first);
                dist[x.first] = dist[cur] + x.second;
                vis[x.first] = 1;

                if(dist[x.first] > sv.first) {
                    sv.first = dist[x.first];
                    sv.second = x.first;
                }
            }
        }
    }

    return sv.first;
}

vector<int> to_s(string s) {
    vector<int> ss;
    string temp = "";
    for(string::iterator it = s.begin(); it != s.end(); it++) {
        if(*it == ' ') {
            ss.pb(stoi(temp));
            temp = "";
            continue;
        }

        temp+=*it;
    }
    ss.pb(stoi(temp));
    return ss;
}

vector<vector<int>> inp(string s) {
    vector<vector<int>> ss;
    ss.pb(to_s(s));
    while(getline(cin, s) && s != "") {
        ss.pb(to_s(s));
    }

    return ss;
}

int main() {
    string s;
    int a, b, w, size = INT_MIN;
    while(getline(cin, s)) {
        map<int, vector<pair<int, int>>> map;
        
        vector<vector<int>> ipt = inp(s);
        for(int i = 0; i < ipt.size(); i++) {
            a = ipt[i][0];
            b = ipt[i][1];
            w = ipt[i][2];
            
            size = max(size, max(a, b));
            a-=1;
            b-=1;
            map[a].pb(mk(b, w));
            map[b].pb(mk(a, w));
        }
                
        int pos = dfsPos(map, size);
        int dist = dfsDist(map, size, pos);
        cout << dist << endl;
    }
    return 0;
}
