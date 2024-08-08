#include <iostream>
#include <math.h>

int main() {
    unsigned int n, co;
    while(scanf("%d", &n) && n != 0) {
        co = 0;
        for(int i = 2; i <= sqrt(n); i++) co += n % i == 0;
        co % 2 == 0 ? printf("no\n") : printf("yes\n");
    }
}
