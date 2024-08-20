#include <bits/stdc++.h>

using namespace std;

struct square {
	int x;
	int y;
};

// When D = D2 = 1 it is called Chebyshev distance
float manhattan_dist(square node) {
	// Where D is the minimal cost for moving
	int dx = abs(node.x - goal.x);
	int dy = abs(node.y - goal.y);
	return D * (dx + dy);
}

float manhattan_dist_diag(square node) {
	// Where D is the minimal cost for moving
	// Where D2 is the minimal cost for moving in the diagonal
	int dx = abs(node.x - goal.x);
	int dy = abs(node.y - goal.y);
	return D * (dx + dy) + (D2 - 2*D) * min(dx, dy);
}

float euclidean_dist(square node) {
	int dx = abs(node.x - goal.x);
	int dy = abs(node.y - goal.y);
	return D * sqrt(dx*dx + dy*dy)
}


int A(vector<vector<int>> g) {
	set<pair<int, int>> f;
	f.insert(start, 0);

	int came_from = dict();
	int cost_so_far = dict();
	came_from[start] = None;
	cost_so_far[start] = 0;

	while(!f.empty()) {
		pair<int, int> current = f.begin();

		if(current == goal) {
			break;
		}

		
	}
}

int main() {
	int m, n;
	cin >> m >> n;
	
	vector<vector<int>> vvi (m, vector<int> (n));

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> vii[m][n];
		}
	}

	int dist = A(vii);

	return 0;
}
