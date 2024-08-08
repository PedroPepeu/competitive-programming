#include <iostream>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(const pair<int, int>&i, const pair<int, int>&j) {
    //if(i.second==j.second) return i.first < j.second;
    return i.second > j.second; 
}

int main() {
    string s;
    int n;
    pair<char, int> a[26];
    cin >> n;
    for(int i = 0; i < 26; i++) {
        pair<char, int> p ((char) i+65, 0);
        a[i] = p;
    }
   
    getline(cin, s);
    while(n--) {
        getline(cin, s);
        
        for(auto &x : s) {
            if((int) x >= 65 && (int) x <= 90) {
                a[((int) x) - 65].second++;
            } else if((int) x >= 97 && (int) x <= 122) {
                a[((int) x) - 97].second++;
            }
        }
    }

    vector<pair<char, int>> out;
    for(int i = 0; i < 26; i++) {
        if(a[i].second != 0) {
            out.push_back(a[i]);
        }
    }

    sort(out.begin(), out.end(), cmp);
    for(int i = 0; i < out.size(); i++) {
        cout << out[i].first << " " << out[i].second << endl;
    }
    return 0;
}
