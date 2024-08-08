#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int mem[2000005];

bool mult(vector<int> v, int n) {
    for(int i = 0; i < v.size(); i++) {
        if(n % v[i]) return true;
        if(v[i] > n) return false;
    }
    return false;
}

int totatives(int n) {
    vector<int> v;
    int t = 1;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            v.push_back(i);
            continue;
        }
        else if(mult(v, i)) {
            v.push_back(i);
            continue;
        }
        t++;
    }
    return t;
}

int dp(int n, int d) {
    if(n == 2) return d++;
    if(mem[n] != -1) return dp(mem[n], d++); 
    
    mem[n] = totatives(n);
    return dp(mem[n], d++);
}

int main() {
    int m, n;
    cin >> m >> n;
    memset(mem, -1, sizeof(mem));

    int sum = 0;

    for(int i = n; i >= m; i--) {
        sum+=dp(i, 0);
    }

    cout << sum << endl;

    return 0;
}
