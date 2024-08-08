#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int u, int v) {
    if(u%v==0) return u/v;
    else return gcd(u, ++v);
}

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int gd = gcd(n, 2);

        vector<int> v (150000);
        int tmp;
        for(int i = 0; i < n; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());

        int min = 0;
        for(int i = 0; i < gd; i++) {
            min += v[i];
        }
        int max = 0;
        for(int i = v.size() - 1; i >= v.size()-gd; i--) {
            max += v[i];
        }

        cout << max-min << endl;
    }
    return 0;
}
