#include <bits/stdc++.h>

using namespace std;

int dfs(vector<pair<int, int>> v, int sum) {
    
}

int main() {
    int n;
    while(cin >> n) {
        vector<pair<int,int>> v;
        stack<char> s;
        char in;
        cin >> in;
        s.push(in);

        int d = 1;
        while(!s.empty()) {
            cin >> in;

            int chck = 0;
            string str = "";
            while((int) in >= 48 && (int) in <= 57) {
                chck = 1;
                str+=in;
                cin >> in;
            }

            if(chck) {
                v.push_back(make_pair(d, stoi(str)));
            }

            if(in == '(') {
                s.push(in);
                d++;
            } else if(in == ')') {
                s.pop();
                d--;
            }
        }

        sort(v.begin(), v.end() [](pair<int, int> &left, pair<int,int> &right){
                return left.first < right.first;
                });

        if(dfs(v, 0) == n) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
