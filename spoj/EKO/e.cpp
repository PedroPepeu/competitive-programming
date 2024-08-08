#include <bits/stdc++.h>

#define pb push_back
typedef long long int lli;

using namespace std;

lli n, m;
lli mdrHeight, chopPoint = 0;
vector<lli> mdr;

int validate(lli mid) {
	mdrHeight = 0;
	for(int i = 0; i < n; i++) {
		if(mdr[i] > mid) {
			mdrHeight+=(mdr[i]-mid);
		}
	}
	if(mdrHeight < m) return 0;
	chopPoint = max(chopPoint, mid);
	return 1;
}

void bs(lli start, lli end) {
	while(start <= end) {
		lli mid = (start+end)/2;
		if(validate(mid)) {
			start = mid+1;
		}
		else {
			end = mid-1;
		}
	}
}

int main() {
	cin >> n >> m;

	lli a, bgst = 0;
	for(int i = 0; i < n; i++) {
		cin >> a;
		mdr.pb(a);
		bgst = max(a, bgst);		
	}

	bs(0, bgst);
	cout << chopPoint << endl;
	return 0;
}
