#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, ot;
    double i;
    cin >> a >> b;
    int flag_percentage = a * b;
    for(i = 0.1; i < 0.8; i = i + 0.1) {
        ot = ceil(flag_percentage * i);
        cout << ot << " ";
    }
    ot = ceil(flag_percentage * i);
    cout << ot << endl;

    return 0;
}
