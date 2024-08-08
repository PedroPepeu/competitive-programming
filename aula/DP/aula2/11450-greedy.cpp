#include <bits/stdc++.h>

#define pb push_back
#define FOR(i, a, b) for(int (i) = (a); (i) < (b); (i)++)

using namespace std;

typedef vector<int> vi;

int greedy(vector<vi> garnments, int m) { // WA
	int totalVal = 0;
	FOR(i, 0, garnments.size()) {
		int choice = 0;
		for(auto &x : garnments[i]) {
			if(x > choice && (m - x >= 0)) {
				choice = x;
			}
		}
		m-=choice;
		totalVal+=choice;
	}
	return totalVal;
}

int divideAndConquer(vector<vi> garnments, int m) { // WA
	/*	Cannot be done using divide and conqueer because
	 *	the sub-problems are not independent.
	 * */
	return -1;
}

int dpCompleteSearch(vi garnments, int m) {
	return 0;
}

int completeSearch(vector<vi> garnments, int m) { // TLE
	int maxBuy = INT_MIN;
	FOR(i, 0, garnments.size()) {
		maxBuy = max(maxBuy, dpCompleteSearch(garnments[i], m));
	}
// finish after	
}

int dp(int i, int b, vector<vi> garnm) {
	if(b < 0) return -1; // no solution
	
	FOR(j, 0, garnm[i].size()) {
		dp(i+1, b-garnm[i][j], garnm);
	}
}

int topDownDp(vector<vi> garnments, int m) {
	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int m, c, k;
		cin >> m >> c;

		vector<vi> garnments;
		FOR(i, 0, c) {
			cin >> k;
			
			vi temp (k);
			FOR(j, 0, k) 
				cin >> temp[j];
			garnments.pb(temp);
		}
	}
	return 0;
}
