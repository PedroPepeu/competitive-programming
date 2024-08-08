#include <bits/stdc++.h>

using namespace std;

int is_sorted(vector<int> v) {
	for(int i = 0; i < v.size()-1; i++) {
		if(v[i] > v[i+1]) return 0;
	}
	return 1;
}

int bogo(vector<int> v) {
	int changes = 0;

	while(!is_sorted(v)) {
		for(int i = 0; i < v.size()-1; i++) {
			if(v[i] > v[i+1]) {
				changes++;

				int temp = v[i+1];
				v[i+1] = v[i];
				v[i] = temp;
			}
		}
	}

	return changes;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	while(cin >> n) {
		vector<int> v (n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}

		int ans = bogo(v);
		cout << "Minimum exchange operations : " << ans << endl;
	}
	return 0;
}
