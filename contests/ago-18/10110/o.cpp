#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long n;
    while(scanf("%lld", &n) && n != 0) {
        unsigned int co = 0, i = 2;
        while(i < sqrt(n+1)) {
            if(n%i == 0) co++;
            i++;
        }

        if(co % 2 == 0) printf("no\n");
        else printf("yes\n");
    }

    return 0;
}
