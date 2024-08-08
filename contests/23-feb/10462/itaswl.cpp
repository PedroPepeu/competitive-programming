#include <bits/stdc++.h>

using namespace std;

int main() {

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    for(int ix = 1; ix <= t; ix++) {
        int v, e, start, end, cost;
        cin >> v >> e;

        vector<vector<int>> vvi;
        for(int i = 0; i < e; i++) {
            cin >> start >> end >> cost;
            if(start > end) {
                int temp = start;
                start = end;
                end = temp;
            }
            vector<int> vi (3);
            vi[0] = start;
            vi[1] = end;
            vi[2] = cost;
            vvi.push_back(vi);
        }

        if(v == 1) {
            cout << "Case #" << ix << " : " << "No second way" << endl;
            continue;
        }
        if(e < v-1) {
            cout << "Case #" << ix << " : " << "No way" << endl;
            continue;
        }

        // sort(vvi.begin(), vvi.end(), [](auto &left, auto &right) {
        //         return left[0] < right[0];
        //         })

        vector<pair<int,int>> costV(v+1, make_pair(INT_MAX, INT_MAX));
        queue<vector<int>> q;
        
        // int wrong_end = 0;

        vector<int> checking (v, 0);
        
        costV[vvi[0][0]].first = 0;
        q.push(vvi[0]);
        int current;
        while(!q.empty()) {
            current = q.front()[1];
            checking[q.front()[0]-1]++;
            checking[q.front()[1]-1]++;
            if(q.front()[2] < costV[current].first) {
                costV[current].second = costV[current].first;
                costV[current].first = q.front()[2];
            }
            else if(q.front()[2] < costV[current].second) {
                costV[current].second = q.front()[2];
            }
            q.pop();
            
            int check = 1;
            for(int i = 0; i < e; i++) {
                if(vvi[i][0] == current) {
                    q.push(vvi[i]);
                    check = 0;
                }
            }
            
        }

        int ans = 0, chckk = 0;
        pair<int, int> fewer (0, INT_MAX);
        for(int i = 1; i <= v; i++) {
            if(costV[i].first == INT_MAX) {
                cout << "Case #" << ix << " : " << "No way" << endl;
                chckk = 1;
                break;
            }
            ans+=costV[i].first;
            if(costV[i].second < fewer.second) {
                fewer = make_pair(i, costV[i].second);
            }
        }

        if(chckk) {
            continue;
        }

        int checkingg = 0;
        int sum = 0;
        cout << "Case #" << ix << " : "; 
        for(int i = 0; i < v; i++) {
            if(checking[i] == 0) {
                cout << "No second way" << endl;
                checkingg = 1;
                break;
            }
            sum+=checking[i];
        }
        if(checkingg) continue;

        if(sum <= (v*2)-1 && fewer.second == INT_MAX) {
            cout << "No second way" << endl;
            continue;
        }

        if(fewer.second == INT_MAX) {
            cout << ans << endl;
            continue;
        }

        cout << ans+fewer.second-fewer.first << endl;
    }
    return 0;
}
