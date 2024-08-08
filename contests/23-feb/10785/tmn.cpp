#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int tes,cas=1,num,vogal[5],cinco,cont;
    string consoante="JSBKTCLDMVNWFXGPYHQZR";
    scanf("%d",&tes);
    for(int i=0;i<tes;i++){
        
        printf("Case %d: ",cas);
        cas++;
        
        memset(vogal,0,5);
        cinco=0;cont=0;
        
        scanf("%d",&num);
        for(int i=1;i<=num;i++){
            if(i%2==0){
                if(cinco==5){
                    cont++;
                    cinco=0;
                }
                
                printf("%c",consoante[cont]);
                cinco++;
                
            }
            else{
                if(vogal[0]<22){
                    printf("A");
                    vogal[0]++;
                }
                else if(vogal[4]<22){
                    printf("U");
                    vogal[4]++;
                }
                else if(vogal[1]<22){
                    printf("E");
                    vogal[1]++;
                }
                else if(vogal[3]<22){
                    printf("O");
                    vogal[3]++;
                }
                else{
                    printf("I");
                    vogal[2]++;
                }
            }
        }
        
        cout<<endl;
    }
    
    return 0;
}
