#include<iostream>
#include<string>

using namespace std;

char letters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int defWord(char let) {
    int i;
    for(i = 0; i < sizeof(letters); i++) {
        if(let == letters[i]) break;
    }
    return i + 1;
}

int main() {

    string s;
    while(cin >> s) {

        int num = 0;

        for(int i = 0; i < s.size(); i++) {
            num += defWord(s[i]);
        }

        int isPrime = 1;

        for(int i = 2; i < num/2 + 1; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime != 0) cout << "It is a prime word." << endl;
        else cout << "It is not a prime word." << endl;
    }

    return 0;
}
