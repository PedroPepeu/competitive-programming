#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    while(cin >> a >> b && (a+b != 0)) {
        set<int> s;
        int bls[b];

        for(int i = 0; i < b; i++) cin >> bls[i];

        if(a+1 == b) {
            cout << "Y" << endl;
            continue;
        }

        int num, cnt = 0;
        for(int i = 0; i < b-1; i++) {
            for(int j = i; j < b; j++) {
                num = abs(bls[i] - bls[j]);
                if(s.count(num) == 0 && num <= a) {
                    s.insert(num);
                    cnt++;
                }
            }
        }

        cnt == a+1 ? cout << "Y" << endl : cout << "N" << endl;
    }
    return 0;
}
