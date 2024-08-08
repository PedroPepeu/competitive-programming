#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, x, a;
    cin >> t;
    while(t--) {
        cin >> x;
        vector<int> v;
        int prod = 1;
        while(x--) {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        v[0]++;
        for(int i = 0; i < v.size(); i++) {
            prod*=v[i];
        }
        cout << prod << endl;
    }
    return 0;
}
