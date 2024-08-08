#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string mes1, mes2;
    char virgula1, virgula2;
    int x, caso=0, t=1, leaps, ano1, ano2, dia1, dia2;
    cin >> t;
    for (int i=0; i<t; t++){
        leaps=0;
        caso++;
        cin>>mes1>>dia1>>virgula1>>ano1;
        cin>>mes2>>dia2>>virgula2>>ano2;
        x=ano1%4;
        cout<<"***"<<mes1<<"***"<<mes2<<"***"<<dia1<<"***"<<dia2<<"***"<<ano1<<"***"<<ano2<<"***";
        for (int j=ano1+4+(4-x); j<ano2; j+=4){
            if (j%100==0){
                if(j%400==0){
                    leaps++;
                }
            }
            else{
                leaps++;
            }
        }
        if (ano1%4==0){
            if (ano1%100==0){
                if (ano1%400==0){
                    if (mes1=="January" || mes1=="February"){
                        if(mes2=="January" || mes2=="February"){
                            if(ano2>ano1){
                                leaps++;
                            }
                        }
                        else{
                            leaps++;
                        }
                    }
                }
            }
            else{
                if (mes1=="January" || mes1=="February"){
                    if(mes2=="January" || mes2=="February"){
                        if(ano2>ano1){
                            leaps++;
                        }
                    }
                    else{
                        leaps++;
                    }
                }
            }
        }
        if (ano2>ano1 && ano2%4==0){
            if (ano2%100==0){
                if (ano2%400==0){
                    if (mes2=="January"){
                    }
                    else if (mes2=="February" && dia2==29){
                        leaps++;
                    }
                    else{
                        leaps++;
                    }
                }
            }
            else{
                if (mes2=="January"){
                    }
                    else if (mes2=="February" && dia2==29){
                        leaps++;
                    }
                    else{
                        leaps++;
                    }
            }
        }
        printf("Case %d: %d\n", caso, leaps);
    }
    
    return 0;
}
