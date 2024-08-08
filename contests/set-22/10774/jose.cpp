#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int dp[30001];
int times[30001];

int survival(int n, vector<int> list) {
    if(dp[n] != -1) return dp[n];
    int i = 0, kill = 0;
    while(i != n-1) {
        kill = (kill+1) % list.size();
        list.erase(list.begin()+kill);
        i++;
    }
    return dp[n] = list[0];
}

int main() {
    int n, t, j = 1;
    memset(dp, -1, sizeof(dp));
    cin >> n;
    while(n--) {
        cin >> t;
        int savet = t;
        int i = 0, p;
        vector<int> v;
        if(dp[t] != -1) {
            cout << "Case " << j << ": " << times[t] << " " << dp[t] << endl;
        }
        else {
            while(true) {
                v.clear();
                for(int i = 0; i < t; i++) v.push_back(i+1);
                p = survival(t, v);
                if(p == t) break;
                t=p;
                i++;
            }
            cout << "Case " << j << ": " << i << " " << p << endl;
            dp[savet] = p;
            times[savet] = i;
        }
        j++;
    }
    return 0;
}
