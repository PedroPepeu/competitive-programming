#include <bits/stdc++.h>

#define pb push_back
#define mk make_pair

using namespace std;

vector<pair<int, int>> djk(vector<vector<pair<int, int>>> g, int qnt, int start) {
	vector<pair<int,int>> dist (qnt, mk(INT_MAX, -1));

	set<pair<int, int>> s;
	s.insert(mk(0, 0));
	dist[start] = mk(0, 0);

	while(!s.empty()) {
		int cur = (*s.begin()).first;
		int cost = (*s.begin()).second;
		s.erase(s.begin());

		for(auto &x : g[cur]) {
			if(dist[x.first].first > cost+x.second) {
				dist[x.first].first = cost+x.second;
				dist[x.first].second = cur;
				s.insert(mk(x.first, dist[x.first].first));
			}
		}
	}

	// return the vector using the path, or if it is impossible, an vector where [0] is -1
	return dist;	
}



void printVec(vector<pair<int, int>> v) {
	int end = v.size();
	pair<int, int> pos = v[end-1];

	if(pos.second == -1) {
		cout << "-1" << endl;
		return;
	}
	
	stack<int> output;
	output.push(end);
	while(pos.second != 0) {
		output.push(pos.second+1);
		pos = v[pos.second];
	}
	output.push(1);

	while(!output.empty()) {
		if(output.size() == 1) {
			cout << output.top() << endl;
			return;
		}
		cout << output.top() << " ";
		output.pop();
	}

	return;
}

int main() {
	int e, v;
	cin >> e >> v;

	vector<vector<pair<int, int>>> grapth (e);
	for(int i = 0; i < v; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		
		a--;
		b--;
		
		grapth[a].pb(mk(b, w));
		grapth[b].pb(mk(a, w));
	}

	vector<pair<int, int>> dist = djk(grapth, e, 0);
	printVec(dist);
	return 0;	
}
