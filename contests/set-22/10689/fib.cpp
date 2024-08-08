#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;


long long fib(long long n, int a, int b, long long y[]){
    if(n==0){
        return a;
    }
    else if (n==1){
        return b;
    }
    else if (y[n]!=-1) return y[n];
    else{
        return y[n]=fib(n-1, a, b, y)+fib(n-2, a, b, y);
    }
}

int main() {
    long long y[1000000000];
    memset(y,-1,sizeof(y));
    long long n, m, f;
    int t, a, b, x1;
    float x, dez;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        scanf("%d %d", &a, &b);
        scanf("%lld %lld", &n, &m);
        f=fib(n, a, b, y);
        dez=pow(10, m);
        x=f/dez;
        //printf("***%f", x);
        x1=f/dez;
        x=x-x1;
        //printf("***%f", x);
        x=x*dez;
        printf("%.0f\n", x);
    }

    return 0;
}
