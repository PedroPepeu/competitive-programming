#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {

    int n;
    ll b;
    cin >> n >> b;

    b = sqrt(b);
    ll ans;

    for(int i = 1; i <= 2 * n; i++) {
        if((b+i) % (2*n+1) == 0) ans = i * i;
    }

    cout << ans << endl;
    return 0;
}
