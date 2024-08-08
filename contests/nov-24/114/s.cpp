#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, hC, b, pts, x0, y0, ptsT = 0, v, c, check;
    cin >> m >> n;
    cin >> hC;
    cin >> b;

    vector<vector<int>> bump (b, vector<int> (4, 0));

    for(int i = 0; i < b; i++) {
        cin >> bump[i][0] >> bump[i][1] >> bump[i][2] >> bump[i][3];
    }

    while(cin >> x0 >> y0 >> v >> c) {
        pts = 0;
        c--;
        while(c > 0) {
            check = 1;
            for(int i = 0; i < bump.size(); i++) {
                if(v == 0 && y0 == bump[i][1] && x0 < bump[i][0]) {
                    c-=bump[i][0]-x0;
                    if(c <= 0) break;
                    c-=bump[i][3];
                    v = 3;
                    pts+=bump[i][2];
                    check = 0;
                    x0 = bump[i][0]-1;
                    break;
                } else if(v == 1 && x0 == bump[i][0] && y0 < bump[i][1]) {
                    c-=bump[i][1]-y0;
                    if(c <= 0) break;
                    c-=bump[i][3];
                    v = 0;
                    pts+=bump[i][2];
                    check = 0;
                    y0 = bump[i][1]-1;
                    break;
                } else if(v == 2 && y0 == bump[i][1] && x0 > bump[i][0]) {
                    c-=x0-bump[i][0];
                    if(c <= 0) break;
                    c-=bump[i][3];
                    v = 1;
                    pts+=bump[i][2];
                    check = 0;
                    x0 = bump[i][0]+1;
                    break;
                } else if(v == 3 && x0 == bump[i][0] && y0 > bump[i][1]) {
                    c-=y0-bump[i][1];
                    if(c <= 0) break;
                    c-=bump[i][3];
                    v = 2;
                    pts+=bump[i][2];
                    check = 0;
                    y0 = bump[i][1]+1;
                    break;
                }
            }
            if(c == 0) break;
            if(check) {
                //parede
                if(v==0) {
                    x0 = m-1;
                    c-=m-1-x0;
                } else if(v==1) {
                    c-=n-1-y0;
                    y0 = n-1;
                } else if(v==2) {
                    c-=x0;
                    x0 = 0;
                } else if(v==3) {
                    c-=y0;
                    y0 = 0;
                }
                c-=hC;
                if(v == 1) v = 0;
                else if(v == 0) v = 3;
                else if(v == 3) v = 2;
                else if(v == 2) v = 1;
            }
        }
        cout << pts << endl;
        ptsT+=pts;
    }
    cout << ptsT << endl;

    return 0;
}
