#include <iostream>
#include <math.h>


int main() {
    unsigned int n, co;
    while(scanf("%d", &n) && n != 0) {
        co = sqrt(n+1);
        co % 2 == 0 ? printf("no\n") : printf("yes\n");
    }
    return 0;
}
