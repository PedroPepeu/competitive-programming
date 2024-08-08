#include <bits/stdc++.h>
#define pb push_back
#define mk make_pair

using namespace std;

int a_start(vector<vector<int>> v) {

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
