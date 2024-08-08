#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned int n;
    while(cin >> n) {
        string c = to_string(n);
        for(int i = 2, j = 1; i < 2147483648; i*=2, j++) {
            string s = to_string(i);
            if(s[0] == c[0]) {
                cout << j << endl;
                break;
            }
        }
        cout << "no power of 2" << endl;
    }
    return 0;
}
