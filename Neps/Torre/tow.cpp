#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int x;

    cin >> x;

    int m = x, n = x;

    int a[m][n];
    int b[m];
    int c[n];

    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            b[i] += a[i][j];
            c[j] += a[i][j];
        }
    }

    int maior = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(b[i] + c[j] - (a[i][j] * 2) > maior)
                maior = b[i] + c[j] - (a[i][j] * 2);
        }
    }

    cout << maior << endl;
}
