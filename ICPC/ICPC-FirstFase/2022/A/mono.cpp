#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, totalA = 0, curA = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'a') {
            if(a) curA++;
            else {
                a = 1;
                curA++;
            }
        } else {
            if(a) {
                a = 0;
                if(curA >= 2) totalA += curA;
                curA = 0;
            }
        }
    }

    if(curA >= 2) totalA += curA;
    cout << totalA << endl;

    return 0;
}
