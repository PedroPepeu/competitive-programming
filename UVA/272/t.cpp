#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    while(cin >> s) {
        string s2;

        bool open = false;

        for(string::iterator it = s.begin(); it != s.end(); it++) {
            if(*it == '\"' && !open) {
                s2.append("\`\`");
                open = true;
                continue;
            } else if(*it == '\"' && open) {
                s2.append("\'\'");
                open = false;
                continue;
            } 
            s2.append(*it);
        }

        cout << s2 << endl;
    }
    return 0;
} 
