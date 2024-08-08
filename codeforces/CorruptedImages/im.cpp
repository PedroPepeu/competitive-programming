#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int tb = 0, lr = 0, o = 0;
        string n;

        for(int i = 0; i < x; i++) {
            cin >> n;
            for(int j = 0; j < y; j++) {
                if((i == 0 || i == x - 1) && n[j] == '0') tb++;
                else if((j == 0 || j == y - 1) && n[j] == '0') lr++;
                else if((i != 0 && i != x - 1 && j != 0 && j != y - 1) && n[j] == '1') o++;
            }
        }

        if(tb + lr == 0) cout << "0" << endl;
        else if(tb + lr <= o) cout << tb + lr << endl;
        else cout << "-1" << endl;
    }

    return 0;
}
