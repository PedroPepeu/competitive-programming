#include <bits/stdc++.h>
#define pb push_back
#define mk make_pair

using namespace std;

struct classcomp {
  bool operator() (const pair<int, int>& lhs, const pair<int, int>& rhs) const
  {return lhs>rhs;}
};

int djk(vector<vector<int>> v) {
	vector<vector<int>> dist (v.size(), vector<int> (v[0].size(), INT_MAX));

	set<pair<int, int>, classcomp> s;
	s.insert(mk(0,0));
	dist[0][0] = 0;

	while(!s.empty()) {
		int x = (*s.begin()).first;
		int y = (*s.begin()).second;
		int cost = dist[x][y];
		s.erase(s.begin());

		if((x == v.size()-1) && (y == v[0].size()-1)) {
			break;
		}
		
		if(x-1 >= 0 && dist[x-1][y] > cost+v[x-1][y]) {
			dist[x-1][y] = cost+v[x-1][y];
			s.insert(mk(x-1,y));
		}
		if(x+1 < v.size() && dist[x+1][y] > cost+v[x+1][y]) {
			dist[x+1][y] = cost+v[x+1][y];
			s.insert(mk(x+1,y));
		}
		if(y-1 >= 0 && dist[x][y-1] > cost+v[x][y-1]) {
			dist[x][y-1] = cost+v[x][y-1];
			s.insert(mk(x, y-1));
		}
		if(y+1 < v[0].size() && dist[x][y+1] > cost+v[x][y+1]) {
			dist[x][y+1] = cost+v[x][y+1];
			s.insert(mk(x, y+1));
		}
	}

	return dist[v.size()-1][v[0].size()-1];
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t;
	int n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		vector<vector<int>> cost(n, vector<int> (m));
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> cost[i][j];
			}
		}

		int ans = djk(cost);
		cout << ans << endl;
	}
	return 0;
}
