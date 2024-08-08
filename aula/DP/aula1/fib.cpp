#include <bits/stdc++.h>

using namespace std;

int fib[10000];

int dp(int f) {
	if(f < 0) return -1;
	if(f == 1 || f == 0) return 1;
	if(fib[f] != -1) return fib[f];

	return fib[f] = dp(f-1) + dp(f-2);
}

int main() {
	int num;
	memset(fib, -1, sizeof fib);

	while(cin >> num) {
		int ans = dp(num);

		if(ans == -1) cout << "Do not put invalid numbers" << endl;
		else cout << "The fibonatti of " << num << " is: " << ans << endl;
	}
	return 0;
}
