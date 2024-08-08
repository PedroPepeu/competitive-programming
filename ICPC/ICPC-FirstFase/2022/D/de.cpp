#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y, px, py, max;
    cin >> n >> x >> y;

    px = py = pow(2, n-1);
    max = pow(2, n);
    
    int i = 0;
    while(px != x || py != y) {
        if(x > px) {
            if(y > py) {
                px = (px + max)/2;
                py = (py + max)/2;
            } else if(y < py) {
                px = (px + max)/2;
                py/=2;
            } else {
                px = (px + max)/2;
            }
        } else if(x < px) {
            if(y > py) {
                px/=2;
                py = (py + max)/2;
            } else if(y < py) {
                px/=2;
                py/=2;
            } else {
                px/=2;
            }

        } else {
            if(y > py) {
                py = (py + max)/2;
            } else if(y < py) {
                py/=2;
            }
        }
        i++;
    }

    cout << i << endl;
    return 0;
}
