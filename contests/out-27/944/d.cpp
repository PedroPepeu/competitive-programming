#include <iostream>
#include <vector>
#include <cstring>
#include <set>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef std::pair<int, int> pii;

set<int> isnot;

pair<int, int> isH(int n, int c, vector<int> v) {

    if(isnot.count(n) > 0) {
        pii p (0, 0);
        return p;
    }

    int sn = n;
    ll sum = 0;
    do {
        sum += (n%10) * (n%10);
        n /= 10;
    } while(n > 0);

    if(sum == 1) {
        pii p (1, c+1);
        return p;
    }

    if(binary_search(v.begin(), v.end(), sum)) {
        for(int w = 0; w < v.size(); w++) {
            isnot.insert(v[w]);
        }
        pii p (0, c);
        return p;
    }
    
    v.push_back(sn);
    return isH(sum, c+1, v);
}

int main() {

    int l, r, check = 0;
    while(cin >> l) {
        if(check) {
            cout << endl;
        }
        check = 1;
        cin >> r;

        for(int i = l; i <= r; i++) {
            if(i == 1) {
                cout << 1 << " " << 1 <<  endl;
                continue;
            }
            vector<int> v;
            pair<int, int> p = isH(i, 1, v);            
            if(p.first) cout << i << " " << p.second << endl;
        }
    }
    return 0;
}
