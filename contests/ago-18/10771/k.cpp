#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    while(cin >> n >> m >> k && n + m + k != 0) {
        vector<int> v;
        for(int i = 0; i < n + m; i++) {
            if(i < n) v.push_back(1);
            else v.push_back(2);
        }

        int i = 0;
        while(v.size() != 1) {
            i += k - 1;
            int first = v[i];    
            v.erase(v.begin() + i - 1);
    
            i+=k;
            if(i > v.size()) i %= v.size();
    
            if(first == v[i]) v[i] = 1;
            else v[i] = 2;
            i+=1;
            if(i > v.size()) i %= v.size();
        }

        if(v[0] == 1) cout << "Gared" << endl;
        else cout << "Keka" << endl;
        
    }
    return 0;
}
