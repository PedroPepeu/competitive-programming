#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        int ot = sqrt(n - 1);
        cout << ot << endl;
    }
    return 0;
}
