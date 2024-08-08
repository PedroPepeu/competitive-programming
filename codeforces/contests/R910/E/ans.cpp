#include <bits/stdc++.h>

using namespace std;

map<char, int> lettersUsed;

string rS(string str);

void rAns(string str) {
    for(auto &x : str) {
        lettersUsed[x]+=1;
    }
    return;
}

string rS(string str) {
    string strA = "";
    for(auto &x : str) {
        if(lettersUsed.count(x) <= 0) continue;
        strA+=x;
        lettersUsed[x]-=1;
    }
    return strA;
}

int main() {
    int t, sS, ansS;
    string s, ans;
    cin >> t;
    while(t--) {
        cin >> sS >> ansS;

        lettersUsed.clear();

        cin >> s;
        cin >> ans;

        rAns(ans);
        s = rS(s);

        if(s.size() < ans.size()) {
            cout << "NO" << endl;
            continue;
        }

        string answ = "YES";

        string::iterator y = s.begin();
        for(auto &x : ans) {
            if(x == *y) {
                ++y;
                continue;
            }

            if((int) x > (int) *y) {
                answ = "NO";
                break;
            }
            
            auto &xS = x;
            string::iterator yS = y;
            char l = *y;

            while(y != s.end()) {
                if(xS == l && ((int) xS < (int) l)) {
                    *yS = xS;
                    xS = l;
                    break;
                }
                
                xS++;
                y++;
            }

            if(y == s.end() || answ == "NO") break;

            y = yS;
             
        }

        cout << answ << endl;
    }
    return 0;
}
