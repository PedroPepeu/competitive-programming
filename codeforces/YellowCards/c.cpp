#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli minc(lli x, lli y, lli kx, lli ky, lli c) {
    if(kx <= ky) {
        if(kx > 1) {
            c-=(kx*x)-x;
            if(c <= 0) return 0;
        }
        if(ky > 1) c-=(ky*y)-y;
    } else {
        if(ky > 1) {
            c-=(ky*y)-y;
            if(c <= 0) return 0;
        }
        if(kx > 1) c-=(kx*x)-x;
    }
    lli ans;
    if(c > x+y) ans = x+y;
    else ans = c;
    if(ans < 0) ans = 0;
    return ans;
}

lli maxc(lli x, lli y, lli kx, lli ky, lli c) {
    // max throw
    lli M = 0;
    lli cur = 0;
    if(kx <= ky) {
        M+=c/kx;
        c-=M*kx;
        if(M > x) {
            lli dif = M - x;
            M = x;
            c+=dif*kx;
        }
        if(c > 0 && c >= ky) {
            cur+=c/ky;
            c-=cur*ky;
            if(cur > y) {
                lli dif = cur - y;
                cur = y;
                c+=dif*ky;
            }
        }
        M+=cur;
    } else {
        M+=c/ky;
        c-=M*ky;
        if(M > y) {
            lli dif = M - y;
            M = y;
            c+=dif*ky;
        }
        if(c > 0 && c >= kx) {
            cur+=c/kx;
            c-=cur*kx;
            if(cur > x) {
                lli dif = cur - x;
                cur = x;
                c+=dif*kx;
            }
        }
        M+=cur;
    }

    return M;
}

int main() {
    lli x, y, kx, ky, c;
    cin >> x >> y >> kx >> ky >> c;

    lli m = minc(x, y, kx, ky, c);
    lli M = maxc(x, y, kx, ky, c);

    cout << m << " " << M << endl;
    return 0;
}
