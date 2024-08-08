#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, days = 1;
    while(cin >> t) {
        string desc;
        char td;
        int checkMin = 1, checkMax = 1;
        pair<int, int> p (INT_MIN, -1);
        vector<pair<pair<int,int>, pair<int, int>>> v (t, make_pair(make_pair(0,0), make_pair(0,0))); 

        for(int i = 0; i < t; i++) {
            cin >> v[i].first.first >> td >> v[i].first.second >> v[i].second.first >> td >> v[i].second.second;
            getline(cin, desc);

            if(v[i].first.first == 10 && v[i].first.second == 0) checkMin = 0;
            if(v[i].second.first == 18) checkMax = 0;
        }

        sort(v.begin(), v.end());

        for(int i = 1; i < t; i++) {
            int first = v[i].first.first*60+v[i].first.second;
            int second = v[i-1].second.first*60+v[i-1].second.second;
            
            int beginA = v[i].first.first*60+v[i].first.second;
            int endA = v[i].second.first*60+v[i].second.second;

            int beginB = v[i-1].first.first*60+v[i-1].first.second;
            int endB = v[i-1].second.first*60+v[i-1].second.second;

            if((beginA > beginB) && (endA < endB)) v.erase(v.begin()+i); 

            if(first - second>p.first) {
                p.first = first-second;
                p.second = i-1;
            }
        }

        if(checkMin) {
            int tempH;
            tempH = (v[0].first.first*60 + v[0].first.second) - 600;
            if(tempH > p.first) {
                p.first = tempH;
                p.second = -1;
            }
        }
        if(checkMax) {
            int tempH;
            tempH = 1080-(v[t-1].second.first*60+v[t-1].second.second);
            if(tempH > p.first) {
                p.first = tempH;
                p.second = t-1;
            }
        }
       
        int DH = p.first/60;
        int DM = p.first%60;
        int H, M;
        if(p.second == -1) {
            H = 10;
            M = 0;
        } else if(p.second == t-1) {
            H = v[t-1].second.first;
            M = v[t-1].second.second;
        } else {
            H = v[p.second].second.first;
            M = v[p.second].second.second;
        }
        
        if(DH > 0) {
            if(M < 10) {
                string mm = "0"+to_string(M);
                cout << "Day #" << days << ": the longest nap starts at " << H << ":" << mm << " and will last for " << DH << " hours and " << DM << " minutes." << endl;
                days++;
                continue;
            }
            printf("Day #%d: the longest nap starts at %d:%d and will last for %d hours and %d minutes.\n", days, H, M, DH, DM);
        } else {
            if(M < 10) {
                string mm = "0"+to_string(M);
                cout << "Day #" << days << ": the longest nap starts at " << H << ":" << mm << " and will last for " << DM << " minutes." << endl;
                days++;
                continue;
            }
            printf("Day #%d: the longest nap starts at %d:%d and will last for %d minutes.\n", days, H, M, DM);
        }
        days++;
    }
    return 0;
}
