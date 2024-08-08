#include<iostream>
using namespace std;

int main(){
    
    long long int h=15, casa=6, l=8, somal=15, out=0;
    while(out<10){
        if (h==somal){
            printf("%10lld%10lld\n",casa,l);
            out++;
            h=h+casa;
            casa++;
            somal=somal-casa;
        }

        if (h>somal){
            somal=somal+l+1;
            l++;
        }

        else if(somal>h){
            h=h+casa;
            casa++;
            somal=somal-casa;
        }
    }

    return 0;
}
