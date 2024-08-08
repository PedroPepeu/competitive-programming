#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main() {
    int n;
    while(cin >> n && n != 0) {
        stack<pair<lli, lli>> s;
        lli temp, w = 0, diff;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(temp == 0) continue;
            if(s.empty()) {
                s.push(make_pair(temp, i));
                continue;
            }
            if(s.top().first > 0 && temp < 0) {
                while(!s.empty() && temp != 0) {
                    if(abs(temp) > s.top().first) {
                        w+=abs(s.top().first)*(i-s.top().second);
                        temp+=s.top().first;
                        s.pop();
                    } else if(abs(temp) < s.top().first) {
                        w+=abs(temp)*(i-s.top().second);
                        pair<lli, lli> change = make_pair(s.top().first+temp, s.top().second);
                        s.pop();
                        s.push(change);
                        temp = 0;
                    } else {
                        w+=s.top().first*(i-s.top().second);
                        s.pop();
                        temp = 0;
                    }
                }
                if(temp != 0) {
                    s.push(make_pair(temp, i));
                }
            } else if(s.top().first < 0 && temp > 0) {
                while(!s.empty() && temp != 0) {
                    if(temp > abs(s.top().first)) {
                        w+=abs(s.top().first)*(i-s.top().second);
                        temp+=s.top().first;
                        s.pop();
                    } else if(temp < abs(s.top().first)) {
                        w+=temp*(i-s.top().second);
                        pair<lli, lli> change = make_pair(s.top().first+temp, s.top().second);
                        s.pop();
                        s.push(change);
                        temp = 0;
                    } else {
                        w+=temp*(i-s.top().second);
                        s.pop();
                        temp = 0;
                    }
                }
                if(temp != 0) {
                    s.push(make_pair(temp, i));
                }
            } else {
                s.push(make_pair(temp, i));
            }
        }
        cout << w << endl;
    }
    return 0;
}
