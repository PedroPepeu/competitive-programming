#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main() {
	int t;
	lli cs = 1;
	cin >> t;
	while(t--) {
		lli r, min = 0, cur, next, sv;
		cin >> r;
		cur = 0;
		vector<lli> rrr;
		rrr.push_back(0);
		for(int i = 0; i < r; i++) {
			cin >> next;
			rrr.push_back(next);

			if(next-cur > min) {
				min = next-cur;
			}

			cur = next;
		}

		lli sts = min;
		for(int i = 0; i < r; i++) {
			if(rrr[i+1]-rrr[i] == sts) {
				sts--;
			} else if(rrr[i+1]-rrr[i] > sts) {
				min++;
				sts+=2;
			}
		}

		cout << "Case " << cs << ": " << min << endl;
		cs++;
	}
	return 0;
}
