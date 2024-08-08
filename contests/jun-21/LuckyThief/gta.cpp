#include <bits/stdc++.h>
#include <string>

using namespace std;

long long mem[1000000];

long long fact(int f) {
    if(f == 1) return 1;
    if(f == 0) return 1;

    if(mem[f] != -1) return mem[f];

    return mem[f] = f * fact(f - 1);
}

int main() {

    memset(mem, -1, sizeof(mem));
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        double n1 = fact(m);
        double n2 = fact(n);
        double n3 = fact(m - n);
        long double ans = n1 / (n2 * n3);

        printf("%Lf\n", ans);
    }

    return 0;
}
