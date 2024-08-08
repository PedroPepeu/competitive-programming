#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<double> inp(string s, int fl) {
    vector<double> in;
    string temp = "";
    for(string::iterator it = s.begin(); it!=s.end(); it++) {
        if(*it == ' ') {
            in.pb(stof(temp));
            temp = "";
            continue;
        }
        temp+=*it;
    }
    in.pb(stof(temp));

    if(fl) {
        for(int i = 0; i < in.size(); i++) {
            in[i] = in[i]-1;
        }
    }
    return in;
}

vector<string> inpS(string s) {
    vector<string> in;
    string temp = "";
    for(string::iterator it = s.begin(); it!=s.end(); it++) {
        if(*it == ' ') {
            in.pb(temp);
            temp = "";
            continue;
        }
        temp+=*it;
    }
    in.pb(temp);

    return in;
}

int main() {
    int t, fl = 0;
    cin >> t;
    while(t--) {
        if(fl) {
            cout << endl;
        }
        string s;
        if(!fl) {
            getline(cin, s);
        }
        getline(cin, s);
        getline(cin, s);
        vector<double> idx = inp(s, 1);
        getline(cin, s);
        vector<string> nums = inpS(s);
        vector<string> ans (idx.size(), "");

        for(int i = 0; i < idx.size(); i++) {
            ans[idx[i]] += nums[i];
        }
        
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << endl;
        }
        fl = 1;
    }
    return 0;
}
