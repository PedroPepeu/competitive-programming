#include <iostream>
#include <math.h>

using namespace std;

int pri(int n) {
    int auth = 1, j;
    for(j = 2; j <= sqrt(n); j++) {
        if(n % j == 0) {
            auth++;
            break;
        }
    }
    return auth;
}

int main() {
    int n;
    
    while(cin >> n && n != 0) {
        int n1, n2, e = 0;
        for(int i = n - 2; i > 1; i--) {
            int auth = pri(i);
            if(auth == 1) {
                n1 = i;
                n2 = abs(i - n);
                if(pri(n2) == 1) {
                    printf("%d = %d + %d\n", n, n2, n1);
                    e = 1;
                    break;
                }
            }
        }
        if(e == 0) {
            cout << "Goldbach's conjecture is wrong." << endl;
        }
    }

    return 0;
}
