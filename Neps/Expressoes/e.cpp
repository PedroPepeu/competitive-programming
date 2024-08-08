#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    getline(cin, str);
    
    while(n--) {
        stack<char> s;
        int chck = 1;
        getline(cin, str);
        char c;
        for(string::iterator it = str.begin(); it != str.end(); it++) {
            c = *it;
            if(c == '(' || c == '[' || c == '{') s.push(c);
            else {
                if(s.empty()) chck = 0;
                else if((s.top() == '(' && c == ')') || (s.top() == '[' && c == ']') || (s.top() == '{' && c == '}')) {
                    s.pop();
                } else {
                    chck = 0;
                }
            }

        }
        if(chck && s.empty()) cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
