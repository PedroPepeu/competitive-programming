#include <iostream>

using namespace std;

int main() {

    int n, t, Tprev, totalT = 0, lastAdd;
    cin >> n;

    cin >> Tprev;
    n--;

    while(n--) {
        cin >> t;
        if((t - Tprev) > 10) totalT += 10;
        else totalT += (t - Tprev);
        Tprev = t;
    }

    cout << totalT + 10 << endl;
}
