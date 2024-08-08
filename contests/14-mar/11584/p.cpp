#include <bits/stdc++.h>

using namespace std;

int from_edge(string s) {
    for(int i = 0, j = s.size()-1; i <= j; i++, j--) {
        if(s[i] != s[j]) {
            return 0;
        }
    }
    return 1;
}

int from_mid(string s, int i) {

} 

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;

        if(from_edge(s)) {
            cout << s.size() << endl;
            continue;
        }


    }
}
