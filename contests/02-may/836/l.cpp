#include <bits/stdc++.h>
#define pb push_back
#define mk make_pair

using namespace std;

int mss(vector<string> grapth, int x, int y) {
    int xMax = x, yMax = y;
    while((xMax+1) < grapth.size() && grapth[x][y] == grapth[xMax+1][y]) {
        xMax+=1;
    }

    while((yMax+1) < grapth.size() && grapth[x][y] == grapth[x][yMax+1]) {
        yMax+=1;
    }

    int fl = 0;
    int sum = 0;
    for(int i = x; i < xMax; i++) {
        int cur = 0;
        for(int j = y; j < yMax; j++) {
            if(grapth[i][j] != grapth[x][y]) {
                fl = 1;
                break;
            }
            cur+=1;
        }
        if(fl) {
            break;
        }
        sum+=cur;
    }

    int sumH = 0;
    fl = 0;
    for(int i = y; i < yMax; i++) {
        int cur = 0;
        for(int j = x; j < xMax; j++) {
            if(grapth[i][j] != grapth[x][y]) {
                fl = 1;
                break;
            }
            cur+=1;
        }
        if(fl) {
            break;
        }
        sumH+=cur;
    }

    return max(sum, sumH);
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t, fl = 1;
    cin >> t;
    while(t--) {
        string s;
        if(fl) {
            getline(cin,s);
        }

        vector<string> v;

        while(getline(cin, s) && s.compare("")) {
            v.pb(s);
        }

        int isle = INT_MIN;

        for(int i = 0; i < v.size(); i++) {
            for(int j = 0; j < v[i].size(); j++) {
                isle = max(isle, mss(v, i, j));
            }
        }

        cout << isle << endl;
    }
    return 0;
}
