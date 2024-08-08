#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int lli;

int main() {
	lli n;
	while(cin >> n) {
		lli p = 1;
		int turns = 0;
		
		if(n <= 9) {
			printf("Stan wins.\n");
			continue;
		}

		p = 2*9;
		while(p < n) {
			turns++;
			p*=9;
			if(p >= n) {
				break;
			}
			turns++;
			p*=2;
		}

		if(turns%2==0) {
			printf("Ollie wins.\n");
		} else {
			printf("Stan wins.\n");
		}
	}
	return 0;
}
