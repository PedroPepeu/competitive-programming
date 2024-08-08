#include <iostream>
#include <stdint.h>
#include <string>
#include <cmath>

using namespace std;

int main() {
    unsigned int n;
    while(cin >> n) {
        string s = to_string(n);
        unsigned int e = n*2, ch = 0;
        uint64_t i = pow(2, n*2), v = SIZE_MAX;
        while(i < v) {
            string s1 = to_string(i);
            int check = 1;

            for(int j = 0; j < s.length(); j++) {
                if(s[j] != s1[j]) {
                    check = 0;
                    break;
                }
            }

            if(check == 1 && (s.length() * 2 < s1.length())) {
                cout << e << endl;
                ch = 1;
                break;
            }

            i*=2;
            e++;
        }
        if(ch == 0) cout << "no power of 2" << endl;
    }
    return 0;
}
