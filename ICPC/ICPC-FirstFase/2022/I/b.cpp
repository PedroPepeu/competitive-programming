#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, check = 1;
    for(int i = 0; i < 8; i++) {
        cin >> x;
        if(x == 9) check = 0;
    }

    if(check == 0) cout << "N" << endl;
    else cout << "S" << endl;

    return 0;
}
