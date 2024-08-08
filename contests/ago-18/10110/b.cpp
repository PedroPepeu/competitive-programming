#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned int n;
    while(cin >> n && n != 0) {
        bool b = true;
        for(int i = 2; i < sqrt(n+1); i++) {
            if(n%i == 0) {
                if(b) b = false;
                else b = true;
            }
        }

        if(b == true) cout << "no" << endl;
        else cout << "yes" << endl;
    }

    return 0;
}
