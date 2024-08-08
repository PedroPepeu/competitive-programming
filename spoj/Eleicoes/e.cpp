#include <iostream>
#include <map>
#include <vector>
#include <climits>

using namespace std;

int main() {
    map<int,int> m;
    vector<int> v;

    int n, prf;
    cin >> n;

    while(n--) {
        cin >> prf;
        m[prf]+=1;
    }

    int max = INT_MIN;
    int pref = 0;
    for(auto& x: m) {
        if(x.second > max) {
            max = x.second;
            pref = x.first;
        }
    }

    cout << pref << endl;
    return 0;
}
