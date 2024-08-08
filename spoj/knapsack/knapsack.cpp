#include <bits/stdc++.h>

using namespace std;

int s, n;
int mem[2000][2000];
int v[2000];
int w[2000];

int max(int i, int j) {
    if(i > j) return i;
    return j;
}

int dp(int i, int s) {
    if (s < 0) return ((numeric_limits<int>::max()) * -1);
    if (i >= n) return 0;
    if (mem[i][s] != -1) {
        return mem[i][s];        
    }
    return mem[i][s] = max(dp(i + 1, s), v[i] + dp(i + 1, s - w[i]));
}

int main() {

    cin >> s >> n;
    
    memset(mem, -1, sizeof(mem));
    
    for(int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }

    cout << dp(0, s) << endl;

    return 0;

}
