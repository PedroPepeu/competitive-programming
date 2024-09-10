#include <bits/stdc++.h>

using namespace std;
    int sumChar(int s) {
        int end = 10;
        while(end <= s) end*=10;

        int sum = 0;
        for(int i = 10; i <= end; i*=10) {
            sum += (s % i)/(i/10);
        }

        return sum;
    }

    int sumUp(int s, int k) {
        if(k == 1) {
            return s;
        }
        return sumUp(sumChar(s), k-1);
    }

    int getLucky(string s, int k) {
        int sum = 0;
        string str = "";
        vector<int> v;
        for(string::iterator it = s.begin(); it!=s.end(); it++) {
            sum += sumChar(((int) *it) - 96);
            v.push_back(sumChar(((int) *it) - 96));
        }

        return sumUp(sum, k);
    }

int main() {
	int ans = getLucky("fleyctuuajsr", 5);
    cout << ans << endl;
    return 0;
}
