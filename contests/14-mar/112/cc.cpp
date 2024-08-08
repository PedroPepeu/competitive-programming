#include <bits/stdc++.h>

using namespace std;

int dfs(vector<pair<int,pair<int,int>>> v, int sum) {
    
}



int main() {
    int n;
    while(cin >> n) {
        vector<pair<int,pair<int,int>>> v;
        stack<char> s;
        stack<int> cmp;
        char in;
        cin >> in;
        s.push(0);
        int clas = 0;

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
                cmp.push(1);
                v.push_back(make_pair(d, make_pair(stoi(str),clas++)));
            }

            if(in == '(') {
                s.push(in);
                d++;
            } else if(in == ')') {
                if(!chck && cmp.top() == 1) {
                    v.push_back(make_pair(d, make_pair(0,clas++)));
                }
                cmp.pop();
                s.pop();
                d--;
            }
        }

        sort(v.begin(), v.end(), [](pair<int,pair<int, int>> &left, pair<int,pair<int,int>> &right){
                if(left.first == right.first) 
                    return left.second.second < right.second.second;
                else return left.first < right.first;
                });

        if(dfs(v, 0) == n) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
