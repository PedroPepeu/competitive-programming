#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, f = 0;
    while(cin >> n) {
        vector<string> v;
        map<string, int> m;
        string s;

        for(int i = 0; i < n; i++) {
            cin >> s;
            m.insert(pair<string, int>(s, 0));
            v.push_back(s);
        }

        int va, nO, ar;
        for(int i = 0; i < v.size(); i++) {
            cin >> s >> va >> nO;
            if(nO != 0) ar = va/nO;
            m[s] -= ar * nO;
            int O = nO;
            while(nO--) {
                cin >> s;
                m[s] += va/O;
            }
        }
        
        if(f == 0) f++;
        else cout << endl;
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " " << m[v[i]] << endl;
        }
    }
    return 0;
}
