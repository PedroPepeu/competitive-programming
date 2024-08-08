#include <iostream>
#include <vector>
#include <map>

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
    b[i][j] == 1;
   
    if(i >= l.size()) return; 
    if(l[i++][j] == c) search(c, ++i, j);
   
    if(j >= l[0].size()) return;
    if(l[i][j++] == c) search(c, i, ++j); 
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
        for(auto &x : mp) {
            printf("%c: %d'\n", x.first, x.second);
        }
        w++;
    }
    return 0;
}
