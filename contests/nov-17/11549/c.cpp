#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

typedef stringstream sgs;

//map<int, int> isn;
vector<int> v;

int takeE(int x, int d);

void fill(int max) {
    for(int i = 0; i < v.size(); i++) {
  //      isn[v[i]] = max;
    }
    return;
}

int ans(int x, int y, int m, int max) {
    if(x > m) x = takeE(x, y);

    //if(isn.count(x) > 0) return isn[x];
    if(binary_search(v.begin(), v.end(), x)) {
        //fill(max);
        return max;
    }
    
    v.push_back(x);
    if(x > max) return ans(x*x, y, m, x);
    else return ans(x*x, y, m, max);
}

int takeE(int x, int d) {
    sgs ss;
    ss << x;

    string s;
    ss >> s;
    
    string aux = "";
    for(int i = 0; i < d; i++) {
        aux+=s[i];
    }
    return stoi(aux);
}

int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;

        v.clear();
        //isn.clear();

        int m = pow(10,n)-1;

        if(k == m || k == 0) {
            cout << k << endl;
            continue;
        }
    
        cout << ans(k, n, m, k) << endl;
    }
    return 0;
}
