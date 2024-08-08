#include <bits/stdc++.h>

using namespace std;



int main() {
    int n, m, au, pr, br;

    cin >> n >> m;

    vector<pair<int, pair<int, pair<int, int>>>> opb; // id, or, pr, bz
    
    for(int i = 0; i < n; i++) {
        opb.push_back(make_pair(i+1, make_pair(0, make_pair(0,0))));
    }

    for(int i = 0; i < m; i++) {
        cin >> au >> pr >> br;
        
        opb[au-1].second.first++;
        opb[pr-1].second.second.first++;
        opb[br-1].second.second.second++;
    }

    sort(opb.begin(), opb.end(), [](auto &left, auto &right) {
            if(left.second.first == right.second.first) {
                if(left.second.second.first == right.second.second.first) {
                    if(left.second.second.second == right.second.second.second) {
                        return left.first < right.first;
                    }
                    return left.second.second.second > right.second.second.second;
                }
                return left.second.second.first > right.second.second.first;
            }
            return left.second.first > right.second.first;
            });

    //print
    for(int i = 0; i < opb.size()-1; i++) {
        cout << opb[i].first << " ";
    }

    cout << opb[opb.size()-1].first << endl;
    return 0;
}
