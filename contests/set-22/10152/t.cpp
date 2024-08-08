#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int t;

        cin >> t;
        
        string s;
        vector<string> v;
        vector<string> mapd;
        vector<string> changes;

        for(int i = 0; i < t; i++) {
            getline(cin, s);
            v.push_back(s);
        }
    
        for(int i = 0; i < t; i++) {
            getline(cin , s);
            mapd.push_back(s);
        }

        for(int i = t-1; i >= 0; i--) {
            if(mapd[i] == v[i]) continue;
            
            int j = i;
            while(mapd[i] != v[j]) {
                changes.push_back(v[j]);
                j++;
            }

        }

    }
}
