#include <iostream>
#include <cstring>

using namespace std;

char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int alpha[26];

int main() {
    int n;
    bool check = true;
    cin >> n;
    memset(alpha, 0, sizeof(alpha));
    while(n--) {

        char c;
        cin >> c;
        c = tolower(c);

        for(int i = 0; i < sizeof(alphabet); i++) {
            if(c == alphabet[i]) {
                alpha[i]++;
                break;
            }
        }
    }

    for(int i = 0; i < 26; i++) {
        if(alpha[i] < 1) {
            check = false;
            break;
        }
    }

    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
