#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<char>> l;
vector<vector<int>> b;
map<char, int> mp;

void clr() {
    b.clear();
    mp.clear();
    l.clear();
}

void search(char c, int i, int j) { 
    b[i][j] = 1; 

    if(i+1 < b.size()) {
        if(l[i+1][j] == c && b[i+1][j] == -1) search(c, i+1, j);
    }

    if(j+1 < b[0].size()) {
        if(l[i][j+1] == c && b[i][j+1] == -1) search(c, i, j+1);
    }

    if(i > 0) {
        if(l[i-1][j] == c && b[i-1][j] == -1) search(c, i-1, j);
    }

    if(j > 0) {
        if(l[i][j-1] == c && b[i][j-1] == -1) search(c, i, j-1);
    }

    return;
}

int main() {
    int t, w = 1;
    cin >> t;
    while(t--) {
        clr();

        int m, n;
        cin >> m >> n;
        
        for(int i = 0; i < m; i++) {
            b.push_back(vector<int> (n, -1));
        }

        char tmp;        
        for(int i = 0; i < m; i++) {
            vector<char> tmpl;
            for(int j = 0; j < n; j++) {
                cin >> tmp;
                tmpl.push_back(tmp);
            }
            l.push_back(tmpl);
        }
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                tmp = l[i][j];
                if(b[i][j] == 1) continue;
                else {
                    search(tmp, i, j);
                    if(mp.count(tmp) <= 0) {
                        mp[tmp] = 1;
                    } else {
                        mp[tmp]+=1;
                    }
                }
            }  
        }

        printf("World #%d\n", w);
        vector<pair<int, char>> v;
        
        for(auto &x : mp) {
            v.push_back(make_pair(x.second, x.first));
        }
        
        sort(v.begin(), v.end(), [](pair<int,char> &left, pair<int,char> &right){
                if(left.first == right.first) {
                    return left.second < right.second;
                }
                return left.first > right.first;
        });
        
        for(auto &x : v) {
            printf("%c: %d\n", x.second, x.first);
        }
        w++;
    }
    return 0;
}
