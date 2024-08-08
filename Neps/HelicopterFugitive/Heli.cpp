#include <iostream>

using namespace std;

int main() {
    int H, P, F, d;
    cin >> H >> P >> F >> d;

    while(F != H && F != P) {
        F += d;
        if(F > 15) F = 0;
        if(F < 0) F = 15;
    }

    if(F == H) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
