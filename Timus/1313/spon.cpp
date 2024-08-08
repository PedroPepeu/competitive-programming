#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int in;
            scanf("%d", &in);
            a[i][j] = in;
        }
    }

    int loops = (n * 2) - 1;
    for(int i = 0; i < loops; i++) {
        if(i + 1 == loops) {
            printf("%d\n", a[n-1][n-1]);
            break;
        }
        int m = i, j = 0;

        if(m > n-1) {
            int fac = m + 1 - n;
            m -= fac;
            j += fac;
        }

        int limit = m + 1;

        while(j != limit) {
            printf("%d ", a[m][j]);
            m--;
            j++;
        }
    }

    return 0;
}
