#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        string hnd = "Hand:";
        string dk = "Deck:";

        vector<pair<char, char>> vpc (10);

        int i = 0;
        string::iterator it = s.begin();
        while(it != s.end()) {
            if(*it == ' ') {
                it++;
            }
            if(i < 5) {
                hnd+=" "+*it+*(it+1);
            } else {
                dk+=" "+*it+*(it+1);
            }
            vpc[i].first = *it++;
            vpc[i].second = *it++;
            i++;
        }

        int N = 0, Num = 0, low = INT_MAX, conseq, high = INT_MIN;
        char baseN = vpc[0].second, baseNum = vpc[0].first;
        for(int i = 0; i < vpc.size(); i++) {
            if(vpc[i].second == baseN) {
                N++;
            }
            if(vpc[i].first == baseNum) {
                Num++;
            }
            
            int cur;
            if(vpc[i].first == 'T') {
                cur = 10;
            } else if(vpc[i].first == 'J') {
                cur = 11;
            } else if(vpc[i].first == 'Q') {
                cur = 12;
            } else if(vpc[i].first == 'K') {
                cur = 13;
            } else if(vpc[i].first == 'A') {
                cur = 14;
            } else {
                cur = (int) vpc[i].first - 48;
            }
        
            high = max(high, cur);
            low = min(low, cur);
        }

        string ans = "Best hand: ";

        if(N == 5 && low >= 10) {
            ans+="royal-flush";
        } else if(N == 5) {
            ans+="straight-flush";
        } else if(Num == 4) {
            ans+="four-of-a-kind"
        } else if() {

        } else if(N == 5) {

        }
        
    }
    return 0;
}
