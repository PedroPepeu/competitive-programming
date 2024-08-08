#include <iostream>
#include <vector>

using namespace std;

int main() {
    int s, n, d, b;
    vector<int> vd;
    vector<int> vb;

    cin >> s >> n;
    for(int i = 0; i < n; i++) {
        cin >> d >> b;
        if(s > d) s+=b;
        else {
            vd.push_back(d);
            vb.push_back(b);
        }
    }

    int limit = vb.size();

    for(int i = 0; i < limit; i++) {
        for(int j = 0; j < vb.size(); j++) {
            if(s > vd[j]) {
                s+= vb[j];
                vd.erase(vd.begin() + j);
                vb.erase(vb.begin() + j);
            }
        }
    }

    if(vb.size() != 0) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
