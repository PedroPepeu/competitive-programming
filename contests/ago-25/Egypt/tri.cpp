#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned int x, y, z;
    while(cin >> x >> y >> z && ((x + y + z) != 0)) {
        unsigned long long X = pow(x, 2), Y = pow(y, 2), Z = pow(z, 2);
        if(X + Y == Z || 
           Z + X == Y || 
           Y + Z == X) {
            cout << "right" << endl;
            continue;
        }

        cout << "wrong" << endl;
    }
    return 0;
}
