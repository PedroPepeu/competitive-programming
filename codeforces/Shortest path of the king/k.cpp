#include <bits/stdc++.h>

#define pb push_back
#define mk make_pair

using namespace std;

vector<string> kingMoves(int x, int y, int u, int v) {
	vector<string> vec;

	while((x != u) || (y != v)) {	
		string s;
		if(u > x) {
			s+="R";
			x++;
		} else if (u < x) {
			s+="L";
			x--;
		}

		if(v > y) {
			s+="U";
			y++;
		} else if (v < y) {
			s+="D";
			y--;
		}

		vec.pb(s);
	}

	return vec;
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	int x, y, u, v;
	
	x = *(s1.begin())-'a';
	y = *(s1.begin()+1) - '0';
	y--;

	u = *(s2.begin())-'a';
	v = *(s2.begin()+1) - '0';
	v--;

	vector<string> ans = kingMoves(x, y, u, v);
	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
