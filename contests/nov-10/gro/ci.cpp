#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double c;
    cin >> c;
    double d = c/(sin(c/2));
    double pi = 2*acos(0);
    double ans = pi*((d/2)*(d/2));
    cout << ans << endl;
    return 0;
}
