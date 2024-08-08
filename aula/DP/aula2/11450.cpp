#include <bits/stdc++.h>
#define FOR(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
using namespace std;

const int MAX_gm = 30;
const int MAX_M = 210;

int M, C, price[MAX_gm][MAX_gm];
int memo[MAX_gm][MAX_M];

int dp(int g, int b) {
	if(b < 0) return -1e9;
	if(g == C) return M-b;

	if(memo[g][b] != -1)
		return memo[g][b];
	int ans = -1;
	for(int k = 1; k <= price[g][0]; k++) 
		ans = max(ans, dp(g+1, b-price[g][k]));

	return memo[g][b] = ans;
}

int main() {
	int TC; scanf("%d", &TC);
	while(TC--) {
		scanf("%d %d", &M, &C);
		FOR(g, 0, C) {
			scanf("%d", &price[g][0]);
			for(int k = 1; k <= price[g][0]; ++k) 
				scanf("%d", &price[g][k]);
		}

		memset(memo, -1, sizeof memo);
		if(dp(0, M) < 0) printf("no solution\n");
		else printf("%d\n", dp(0, M));
	}
	return 0;
}
