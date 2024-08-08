#include <iostream>

using namespace std;

int main() {
    int n, m, sum1 = 0, sum2 = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        sum1 += i;
    }
    for(int i = n; i <= m; i++) {
        sum2 += i;
    }
    cout << sum1 << endl << sum2 << endl;
}
