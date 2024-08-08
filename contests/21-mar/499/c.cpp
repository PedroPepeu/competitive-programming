#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    while(s != "") {
        vector<pair<char, int>> vc (26);
        vector<pair<char, int>> vCC (26);

        char c = 'a';
        char A = 'A';
        for(int i = 0; i < vc.size(); i++) {
            vc[i] = make_pair(c++, 0);
            vCC[i] = make_pair(A++, 0);
        }

        string::iterator it;
        for(it = s.begin(); it != s.end(); it++) {
            if((int) *it >= 97 && (int) *it <= 122) {
                vc[(int) *it-97].second++;
            } else if((int) *it >= 65 && (int) *it <= 90) {
                vCC[(int) *it-65].second++;
            }
        }

        sort(vc.begin(), vc.end(), [](pair<char, int> &left, pair<char, int> &right) {
                return left.second > right.second;
                });

        sort(vCC.begin(), vCC.end(), [](pair<char, int> &left, pair<char, int> &right) {
                return left.second > right.second;
                });

        vector<char> save;
        int num = max(vCC[0].second, vc[0].second);

        for(int i = 0; i < 26; i++) {
            if(vCC[i].second == num) save.push_back(vCC[i].first);
            if(vc[i].second == num) save.push_back(vc[i].first);

            if(vCC[i].second != num && vc[i].second != num) break;
        }

        sort(save.begin(), save.end());

        for(int i = 0; i < save.size(); i++) {
            if(i+1 == save.size()) cout << save[i] << " ";
            else cout << save[i];
        }
        cout << num << endl;
        
        getline(cin, s);
    }
    return 0;
}
