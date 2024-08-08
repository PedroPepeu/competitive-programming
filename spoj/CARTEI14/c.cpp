#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> casas;
    int x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        casas.push_back(x);
    }

    int cs, i = 0, w = 0, pCS = -1;
    vector<int>::iterator pos;
    while(m--) {
        cin >> cs;
        
        if(cs == pCS) {
            continue;
        }

        pos = lower_bound(casas.begin(), casas.end(), cs);
        int walk = pos - casas.begin();
        w += abs(walk-i);
        i = walk;
        pCS = cs;
    }

    cout << w << endl;
    return 0;
}
