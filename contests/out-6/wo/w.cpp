#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;

    vector<string> dic;
    while(cin >> s && s != "XXXXXX") {
        dic.push_back(s);
    }
    
    int cck = 0;
    while(cin >> s && s != "XXXXXX") {
        for(auto &x : dic) {
            if(x.size() != s.size()) continue;
            int check = 1;

            string::iterator it = s.begin();
            for(auto &r : x) {
                if(r != *it) check = 0;
                it++;
            }
            
            if(check) {
                cck = 1;
                cout << x << endl;
            }
        }
        if(cck) cout << "******" << endl;
    }


}
