#include <iostream>
#include <set>

using namespace std;

set<long long> precalc(int days) {
    set<long long> sett;

    sett.insert(6);
    sett.insert(7);
    int f = 13, s = 14;
    while(f < days) {
        sett.insert(f);
        sett.insert(s);
        f+=7;
        s+=7;
    }
    return sett;
}

int main() {
    long long t, n, p, x;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> p;

        set<long long> s;

        for(int i = 0; i < p; i++) {
            cin >> x;
            s.insert(x);
        }

        long long numberOfH = 0;
        set<long long> sefs = precalc(n);

        for(int i = 1; i <= n; i++){
            if(sefs.count(i) > 0) continue;
            for(auto& x : s) {
                if(i % x == 0) {
                    numberOfH++;
                    break;
                }
            }
        }

        cout << numberOfH << endl;
    }
    return 0;
}
