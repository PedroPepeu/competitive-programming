#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> v;
        int n, sub = 0;
        cin >> n;
        while(n--) {
            int n1;
            cin >> n1;
            v.push_back(n1);
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < v.size(); i++) {
            if(v[i] == v[i-1]) continue;
            sub = abs(sub - v[i]);
        }

        cout << sub << endl;

    }

    return 0;
}
