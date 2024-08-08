#include <bits/stdc++.h>

using namespace std;

int calcRest(int res, int v, int tvl) {
    if(res==0) {
        if(v > 1) tvl+=1+(v-1)*2;
        else tvl += v;
    } else {
        if(v > 1) tvl+=1+v*2;
        else tvl += v+1;
    }
    return tvl;
}

int main() {
    int c, l, m, s, sum, tvl, res, v;
    string sd, sdpos;
    cin >> c;
    
    while(c--) {
        cin >> l >> m;
   
        l*=100;
        tvl = 0;

        vector<pair<int, string>> vec;
        while(m--) {
            cin >> s >> sd;
            vec.push_back(make_pair(s, sd));
        }
        
        for(int i = 0; i < vec.size(); i++) {
            sum = 0;
            
            sum+=vec[i].first;
            while(i < vec.size() && vec[i+1].second == vec[i].second) {
                sum+=vec[i+1].first;
                i++;
            }
            
            res = sum%l;
            v = sum/l;

            tvl = calcRest(res, v, tvl);
        }
        cout << tvl << endl;
    }
    return 0;
}
