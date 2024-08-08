#include <iostream>
using namespace std;

int main() {
    int m,n,t,menor,maior,beer,aux,cont,cerveja,sn,a1,a2,total;
    while(cin>>m>>n>>t){
        sn=0;
        if(m>n){
            menor=n;
            maior=m;
        }
        else{
            menor=m;
            maior=n;
        }

        if(t%menor==0){
            printf("%d\n",t/menor);
        }
        else{
            beer=t/menor;
            cerveja=t%menor;
            a1=beer;
            a2=0;
            for(int i=1; i<=t/menor; i++){
                aux=(beer*menor)-(i*menor);
                //printf("*%d\n",t);
                if((t-aux)%maior==0){
                    total=((t-aux)/maior)+aux/menor;
                    printf("%d\n",total);
                    sn=1;
                    break;
                }
                if((t-aux)%maior<cerveja){
                    cerveja=(t-aux)%maior;
                    a1=aux/menor;
                    a2=(t-aux)/maior;
                }
            }
            if(sn==0){
                printf("%d %d\n",a1+a2, cerveja);
            }
        }
    }

    return 0;
}
