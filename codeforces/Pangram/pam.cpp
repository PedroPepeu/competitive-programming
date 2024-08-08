#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char letters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int lettersPos[26];

void set(char c) {
    for(int i = 0; i < sizeof(letters); i++) {
        if(c == letters[i]) {
            if(i > 25) {
                i -= 25;
            }
            lettersPos[i] = 1;
            return;
        }
    }
}

int main() {

    int n, e = 0;
    string s;

    cin >> n;
    cin >> s;

    memset(lettersPos, 0, sizeof(lettersPos));

    for(int i = 0; i < n; i++) {
        set(s[i]);
    }

    for(int i = 0; i < sizeof(lettersPos); i++) {
        if(lettersPos[i] != 1) {
            e = 1;
        }
    }

    if(e == 1) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
