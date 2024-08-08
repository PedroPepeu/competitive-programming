#include <stdio.h>
#include <math.h>

int main() {
    unsigned int n;
    while(scanf("%d", &n) && n!= 0) {
        unsigned int co = 0;
        int s = sqrt(n);
        for(int i = 2; i <= s; i++) co += n % i == 0;

        if(co % 2 == 0) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
