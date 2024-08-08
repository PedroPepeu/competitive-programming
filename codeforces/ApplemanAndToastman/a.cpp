#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli rec(vector<int> v, int score) {
    if(v.size() <= 1) return score;

    lli ans = 0, sum = 2;
    for(int i = 0; i < v.size(); i++) {
        if(i+1 == v.size() || i+2 == v.size()) {
            ans+=(v[i]*sum);
            continue;
        }
        ans+=(v[i]*sum);
        sum++;
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> g (n);
    int score = 0, temp;
    for(int i = 0; i < n; i++) {
        cin >> g[i];
        score+=g[i];
    }

    sort(g.begin(), g.end());

    cout << rec(g, score) << endl;
    return 0;
}
