#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, d;
    while(cin >> s >> d && (s != 0 && d != 0)) {
        int a[s];
        memset(a, 0, sizeof(a));

        for(int i = 0; i < d; i++) {
            for(int j = 0; j < s; j++) {
                int x;
                cin >> x;
                a[j] += x;
            }
        }

        bool dy = false;

        for(int i = 0; i < s; i++) {
            if(a[i] == d) {
                dy = true;
                break;
            }
        }

        if(dy) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}