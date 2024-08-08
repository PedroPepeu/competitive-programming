#include <bits/stdc++.h>

using namespace std;

int minc(int x, int y, int kx, int ky, int c) {
    // min throw
    
}

int maxc(int x, int y, int kx, int ky, int c) {
    // max throw
    return 0;
}

int main() {
    int x, y, kx, ky, c;
    cin >> x >> y >> kx >> ky >> c;

    int m = minc(x, y, kx, ky, c);
    int M = maxc(x, y, kx, ky, c);

    cout << m << " " << M << endl;
}
