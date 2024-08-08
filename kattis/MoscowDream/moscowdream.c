#include <stdio.h>

int main() {
    int a, b, c, n;

    scanf("%d %d %d %d", &a, &b, &c, &n);
    
    if(n >= 3 && n <= 20) {
        if(a < 1 || a > 10 || b < 1 || b > 10 || c < 1 || c > 10) {
            printf("NO");
        } else if(a + b + c < n) {
            printf("NO");
        } else {
            printf("YES");
        }        
    } else {
        printf("NO");
    }

}



