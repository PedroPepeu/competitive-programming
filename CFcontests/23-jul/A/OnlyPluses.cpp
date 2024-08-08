#include <bits/stdc++.h>

using namespace std;

int distribute_math(int a, int b, int c) {
    for(int i = 0; i < 5; i++) {
        int minNum = min(a, min(b, c));
        int tt = a+b+c;

        if(minNum == tt-b-c) {
            a+=1;
        } else if(minNum == tt-a-c) {
            b+=1;
        } else if(minNum == tt-a-b) {
            c+=1;
        }
        
    }

    return (a*b*c);
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%d\n", distribute_math(a, b, c));
    }

    return 0;
}
