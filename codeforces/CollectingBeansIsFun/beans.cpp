#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    int k;
    int b[9];
    string s;

    memset(b, 0, sizeof(b));

    cin >> k;

    for(int i = 0; i < 4; i++) {
        cin >> s;
        for(int i = 0; i < 4; i++) {
            if(s[i] == '.') continue;
            b[s[i] - 49]+=1; // input is not working
        }
    }

    int check = 1;

    for(int i = 0; i < 9; i++) {
        if(b[i] > k*2) {
            check = 0;
            break;
        }
    }

    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
