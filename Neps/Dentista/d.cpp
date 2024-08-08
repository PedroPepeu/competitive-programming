#include <bits/stdc++.h>

using namespace std;

int eraseOverlapIntervals(vector<pair<int, int>> interval) {
    if(interval.size() == 0) return 0;

    sort(interval.begin(), interval.end(), [](auto &left, auto &right) {
            if(left.second == right.second) return left.first < right.first;
            return left.second < right.second;
            });

    int count = 0;
    int end = interval[0].second;

    for(int i = 1; i < interval.size(); i++) {
        if(interval[i].first < end) count++;
        else end = interval[i].second;
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    int a, b;
    vector<pair<int, int>> v (n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    cout << n-eraseOverlapIntervals(v) << endl;
    return 0;
}
