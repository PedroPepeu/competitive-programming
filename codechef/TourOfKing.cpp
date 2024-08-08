#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int N, M, T, people;
	cin >> T;
	while(T--) {
	    cin >> N >> M;
	    N *= 5;
	    M *= 7;
	    people = N + M;
	    cout << people << endl;
	}
	
	return 0;
}

