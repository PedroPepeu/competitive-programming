#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int teams = 0;
    
    if(b > a) {
        int temp = b;
        b = a;
        a = temp;
    }

    if((b * 2) <= a) {
        cout << b << endl;
    } else {
        int i;
        for(i = 0; a > 0 && b > 0 && a + b >= 3; i++) {
            if(a > b) {
                a-=2;
                b--;
            } else {
                a--;
                b-=2;
            }
        }
        cout << i << endl;
    }

    return 0;
}
