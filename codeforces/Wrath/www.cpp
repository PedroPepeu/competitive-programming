    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        int n, x;
        cin >> n;
     
     
        vector<pair<int,int>> a (n);
        for(int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
     
        for(int i = 1; i < a.size(); i++) {
            if(a.size()==1) break;
            if(a[i].first == 0) continue;
            if(a[i].first >= 1 && i == 1) {
                a.erase(a.begin());
                continue;
            }

            int prop = a[i].second - a[i].first;
            if(prop < 0) prop = 0;
     
            while(prop<=a[i-1].second) {
                a.erase(a.begin()+i-1);
                i--;
                if(i==0) break;
            }
        }
     
        cout << a.size() << endl;
     
        return 0;
    }
