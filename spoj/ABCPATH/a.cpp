#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int calcLgnst(vector<vector<char>> v, x, y) {
	pair<int, int> start;
	char letter = 'A';
	int moves = 0;

	int fl = 1;
	if(fl) {
		fl = 0;
		if(x
	}
}

int main() {
	int x, y, case = 1;
	while(cin >> x >> y) {
		vector<vector<char>> v (x, vector<char> (y));

		for(int i = 0; i < x; i++) {
			for(int j = 0; j < y; j++) {
				cin >> v[i][j];
			}
		}

		int ans = 0;
		for(int i = 0; i < x; i++) {
			for(int j = 0; j < y; j++) {
				if(v[i][j] == 'A') {
					ans = max(ans, calcLgnst(v, i, j));
				}
			}
		}

		cout << "Case " << case << ": " << ans << endl;
	}
	return 0;
}
