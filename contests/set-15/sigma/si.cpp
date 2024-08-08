#include <iostream>
#include <cmath>
#include <cstring>

typedef int64_t in6;

using namespace std;

in6 a[1e12];

in6 dp(in6 p) {
    
}

int main() {
    
    memset(a, -1, sizeof(a));

    int n;
    in6 j;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        for(int j = 2; j < t; j++) {
            dp(j);
        }
    }
}
