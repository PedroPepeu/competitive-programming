#include <bits/stdc++.h>

#define pb push_back
#define mk make_pair

using namespace std;

int bestVal(vector<pair<int, int>> v, int cost, int i, int mW, int val) {
	if(i > v.size() || cost == mW) {
		return val;
	}
	
	int left = 0, right = 0;

	if(v[i].first+cost <= mW) {
		left = bestVal(v, v[i].first+cost, i+1, mW, val+v[i].second);
	}
	right = bestVal(v, cost, i+1, mW, val);

	return max(left, right);
}

int main() {
	int s, n;
	cin >> s >> n;
	
	vector<pair<int, int>> vp;
	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vp.pb(mk(a, b));
	}

	int ans = bestVal(vp, 0, 0, s, 0);
	cout << ans << endl;
	return 0;
}
