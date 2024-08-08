#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, k, l;
    cin >> n;

    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++) {
        cin >> c;
        pair<int, int> p {c, 0};
        v.push_back(p);
    }

    for(int i = 0; i < n; i++) {
        cin >> c;
        v[i].second = c;
    }

    cin >> k >> l;

    vector<pair<int, int>> g;

    int left, right, i = 0, j = v.size() - 1, counter = 0, total = 0;
    while(i < n && counter < k) {
        left = v[i].first + v[i].second;
        right = v[j].first + v[j].second;

        if(left > right) {
            g.push_back(v[i]);
            total+=v[i].first;
            i++;
        } else {
            total+=v[j].first;
            g.push_back(v[j]);
            j++;
        }

        counter++;
    }

    sort(g.begin(), g.end(), [](auto &left, auto &right){
        return left.second > right.second;
    });
    
    for(counter = 0; counter < l; counter++) {
        total+=g[counter].second;
    }

    cout << total << endl;
}
