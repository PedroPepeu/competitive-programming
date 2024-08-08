#include <iostream>
#include <cmath>
#include <string>
#include <climits>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        string s = to_string(n);
        unsigned int i = pow(2, 1), e = 1, v = INT_MAX, ch = 0, first = 0;
        while(i < v) {
            string s1 = to_string(i);
            int check = 1;

            for(int j = 0; j < s.length(); j++) {
                if(s[j] != s1[j]) {
                    check = 0;
                    break;
                }
            }

            if(check == 1 && first == 1) {
                cout << e << endl;
                ch = 1;
                break;
            } else if(check == 1) first = 1;

            i*=2;
            e++;
        }
        if(ch == 0) cout << "no power of 2" << endl;
    }
    return 0;
}
