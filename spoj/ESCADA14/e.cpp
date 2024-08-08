#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int line = -1, x, chckLZ = 0;
    for(int i = 0; i < m; i++) {
        int chckZ = 1, chckZZ = 1;
        for(int j = 0; j < n; j++) {
            cin >> x;
            if(x!=0) {
                chckZZ = 0;
            }
            if(x!=0 && chckLZ) {
                cout << "N" << endl;
                return 0;
            }
            if(chckZ && x!=0) {
                chckZ = 0;
                if(j <= line) {
                    cout << "N" << endl;
                    return 0;
                }
                line = j;
            } 
        }
        if(chckZZ) chckLZ = 1;
    }

    cout << "S" << endl;
    return 0;
}
