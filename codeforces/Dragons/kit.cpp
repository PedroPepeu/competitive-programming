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

    int i = 0, j = vb.size() - 1;;
    while(i < vb.size() && j >= 0) {
        if(i == j) {
            if(s > vd[i]) {
                s+= vb[i];
                vd.erase(vd.begin() + i);
                vb.erase(vb.begin() + i);
                if(j > i) j--;
            }
            i < vb.size() - j ? i++ : j--;
            continue;
        }

        if(s > vd[j]) {
            s+= vb[j];
            vd.erase(vd.begin() + j);
            vb.erase(vb.begin() + j);
            if(i > j) i--;
        } else if(s > vd[i]) {
            s+= vb[i];
            vd.erase(vd.begin() + i);
            vb.erase(vb.begin() + i);
            if(j > i) j--;
            j--;
        } else vd[i] < vd[j] ? j-- : i++;
    }

    if(vb.size() != 0) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
