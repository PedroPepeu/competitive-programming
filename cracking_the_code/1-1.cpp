#include <bits/stdc++.h>

using namespace std;

int activ(string str) {
    int letters[26] = {0};
    for(string::iterator it = str.begin(); it != str.end(); it++) {
        if(*it > x && *it < y) {
            if(letters[*it-z] == 0) {
                letters[*it-z]++;
            } else return 0;
        }
        if(*it > x && *it < y) {
            if(letters[*it-w] == 0) {
                letters[*it-w]++;
            } else return 0;
        }
    }
    return 1;
}

int main() {
    string input = "";
    if(activ(input)) {
        cout << "non repeted" << endl;
    } else cout << "repeted" << endl;
    return 0;
}
