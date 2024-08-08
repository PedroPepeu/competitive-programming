#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int check = 0;
    while(cin >> n) {
        string name, m, s, ms;
        vector<pair<string, pair<string, float>>> v;
        char twop;
        int min, seg, mls;
        for(int i = 0; i < n; i++) {
            cin >> name >> twop >> min >> m >> seg >> s >> mls >> ms;
            float time = seg*1000 + (min*60000) + mls;
            pair<string, float> cur (name, time);
            transform(name.begin(), name.end(), name.begin(), ::tolower);
            pair<string, pair<string, float>> curr (name ,cur);
            v.push_back(curr);
        }
        
        std::sort(v.begin(), v.end(), [](const std::pair<string, pair<string,float>> &left, const std::pair<string, pair<string,float>> &right) {
            if(left.second.second == right.second.second) return left.first < right.first;
            return left.second.second < right.second.second;
        });
        
        //if(check) cout << endl;
        int row = 0;
        for(int i = 0; i < v.size(); i++) {
            if(i%2==0) {
                row++;
                cout << "Row " << row << endl;
            }
            cout << v[i].second.first << endl;
        }
        cout << endl;
        check = 1;
    }
    return 0;
}
