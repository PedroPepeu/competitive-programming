#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k;
    string s;

    cin >> t;
    while(t--) {
        cin >> n >> k;
        cin >> s;
       
        int check = 0, Aaux = 0;
        int Ac = 0, Bc = 0;
        for(auto &x : s) {
            if(x == 'B') {
                Bc++;
                check = 0;
            }
            else if(x == 'A') {
                if(check==0) {
                    Aaux++;
                }
                Ac++;
                check=1;
            }
        }

        if(Bc == k) {
            cout << 0 << endl;
            continue;
        } else if(Bc > k) {
            if(Aaux == 0) Aaux++;
            cout << Aaux << endl;
            cout << Bc-k << " A" << endl;
            continue;
        }
        cout << 1 << endl;
        cout << k-Bc << " B" << endl;
    }
    return 0;
}
