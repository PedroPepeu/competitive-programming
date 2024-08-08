#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main() {
    ll c, t, pts = 0;
    cin >> c >> t;

    int r[c], temp;
    for(int i = c-1; i >= 0; i--) {
        scanf("%d", &temp);
        r[i] = temp;
    }

    ll x, y;
    for(int i = 0; i < t; i++) {
        scanf("%lld %lld", &x, &y);
        double d = sqrt((x*x)+(y*y));
        int j, chk = 1, w;
        
        if(d > r[c/2]) {
            j = 0;
            w = c/2;
            if(d > r[c/4]) {
                w = c/4;
            } else {
                j = c/4;
            }

        } else {
            j = c/2;
            w = c-1;
            if(d > r[(c+(c/2))/2]) {
                w = (c+(c/2))/2;
            } else {
                j = (c+(c/2))/2;
            }
        }

        for(; j < c && w >= 0; j++, w--) {
            if(d > r[j]) break;
            if(d <= r[w]) {
                chk = 0;
                pts+=w+1;
                break;
            }
        }
        if(chk) {
            pts+=j;
        }
    }

    cout << pts << endl;
    return 0;
}
