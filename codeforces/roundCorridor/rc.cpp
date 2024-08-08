#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, e, q;
    cin >> s >> e >> q;

    vector<double> v1 (s+1);
    vector<double> v2 (e+1);

    double c = 12/s, par = 0;
    for(int i = 0; i <= s; i++) {
        v1[i] = par+=c;
    }

    double c2 = 12/e, par2 = 0;
    for(int i = 0; i <= e; i++) {
        v2[i] = par2+=c2;
    }

    while(q--) {
        int sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;
   
        

        int check = 1;
        if(check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
