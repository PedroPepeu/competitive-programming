#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int max(vector<vector<int>> v, int start) {
		
}

int main() {
	int n;
	cin >> n;

	vector<vector<int>> v (n);
	for(int i = 0; i < n-1; i++) {
		int a, b;
		cin >> a >> b;
		
		a-=1;
		b-=1;
		
		v[a].pb(b);
		v[b].pb(a);
	}

	int ans = dfs(v, 0);

	cout << ans << endl;
	return 0;
}
