#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int lg;
        scanf("%d", &lg);

        int n = 0;
        n = lg / 4;
        lg%=4;
        n+= lg / 2;
        printf("%d\n", n);
    }

    return 0;
}
