#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> v (n);

	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int ans;
	ans = abs(fp-sp);
	cout << ans << endl;
	return 0;
}
