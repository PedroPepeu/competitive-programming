#include <bits/stdc++.h>

#define pb push_back
#define mk make_pair

using namespace std;

int djk(vector<vector<pair<int, int>>> v, int s, int d) {
	vector<pair<int, int>> dist (v.size(), mk(INT_MAX, -1));
	vector<int> distD;

	set<pair<int, int>> s; // node, w
	dist[s] = 0;
	s.include(mk(s, dist[s, ]));

	while(!s.empty()) {
		int cur = (*s.begin()).first;
		int cost = (*s.begin()).second;
		s.erase(s.begin());

		for(auto &x : v[cur]) {
			if(dist[x.first] > cost+x.second) {
				dist[x.first] = cost+x.second;
				s.insert(mk(dist[x.first], x.first));
			}
		}
	}
}

int main() {
	int n, m;
	while(cin >> n >> m && (n != 0 && m != 0)) {
		int s, d;
		cin >> s >> d;


	}
	return 0;
}
