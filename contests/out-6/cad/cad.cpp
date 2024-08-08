#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int findEqual(vector<int> left, int right) {
    for(int i = 0; i < left.size(); i++) {
        if(left[i] == right) return 0;
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        char mod;
        int it, id;

        vector<string> status;
        // item id dispo
        map<int, pair<vector<int>, int>> lk;
        while(cin >> mod && mod != '#') {
            cin >> id >> it;

            if(lk.count(it) <= 0) {
                status.push_back("GRANTED");
                if(mod == 'S') {
                    vector<int> v;
                    v.push_back(id);
                    lk[it] = pair<int, int> (v, 1);
                } else {
                    vector<int> v;
                    v.push_back(id);
                    lk[it] = pair<int, int> (v, 2);
                }
            } else {
                if(lk[it]->second.second==3) {
                    status.push_back("IGNORED");

                } else if(lk[it].second.second==1) {
                    int prof = findEqual(lk[it].second.first, id);
                    if(prof) {
                        status.push_back("DENIED");
                    } else status.push_back("GRANTED");
                    
                    if(mod=='X' && prof) {
                        lk[it].second.second=2;
                    }
                } else {
                    if(lk[it].second.second == 2) {
                        int prof = findEqual(lk[it].second.first, id);
                        if(prof) {
                            status.push_back("DENIED");
                        } else status.push_back("GRANTED");
                    
                        if(mod=='X' && prof) {
                            lk[it].second.second=2;
                        }
                    }
                }
            }
        }
        for(auto &x : status) {
            cout << x << endl;
        }
    }
}
