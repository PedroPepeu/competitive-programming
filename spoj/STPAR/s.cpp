#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {

        vector<int> line (n);
        vector<int> side;
        vector<int> ans;

        for(int i = n-1; i >= 0; i--) {
            cin >> line[i];
        }

        vector<int> cmp (line);
        sort(cmp.begin(), cmp.end(), [](auto &left, auto &right) {
                return left > right;
                });

        while(line.size() != 0) {
            if(cmp.back() == line.back()) {
                cmp.pop_back();
                ans.push_back(line.back());
                line.pop_back();
            } else {
                // maior
                while(side.size() != 0 && side.back() == cmp.back()) {
                    ans.push_back(side.back());
                    side.pop_back();
                    cmp.pop_back();
                }
                while(line.size() != 0 && cmp.back() != line.back()) {
                    side.push_back(line.back());
                    line.pop_back();
                }
            }
        }

        while(side.size() != 0) {
            ans.push_back(side.back());
            side.pop_back();
        }

        int chck = 0;
        for(int i = 0; i < ans.size()-1; i++) {
            if(ans[i] > ans[i+1]) {
                cout << "no" << endl;
                chck = 1;
                break;
            }
        }
        if(chck) continue;
        cout << "yes" << endl;

    }
    return 0;
}
