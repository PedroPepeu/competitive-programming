#include<bits/stdc++.h>

#define pb push_back

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int sizeArr;
		cin >> sizeArr;
		
		vector<int> v (sizeArr);
		for(int i = 0; i < sizeArr; i++) {
			cin >> v[i];
		}

		int ans = INT_MIN;
		while(v.size() > 1) {
			sort(v.begin(), v.end());
			int num = v[0];

			if(num > ans) ans = num;
			v.erase(v.begin());
			for(int i = 0; i < v.size(); i++) {
				v[i]-=num;
			}
		}

		if(v[0] > ans) ans = v[0];
		cout << ans << endl;
	}
	return 0;
}
