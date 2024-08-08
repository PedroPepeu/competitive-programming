#include <iostream>

using namespace std;

int main() {
    int l;
    while(cin >> l && l != 0) {
        int blc = 0;
        for(int i = l; i >= 0; i--) {
            blc += i*i;
        }

        cout << blc << endl;
    }
    return 0;
}
