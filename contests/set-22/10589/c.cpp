#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    double x, y, area, d, aa, bb, n, a, sn, m;
    while(cin>>n>>a && (n+a)>0){
        m=0;
        for (int i=0; i<n; i++){
            scanf("%lf %lf", &x, &y);
            sn=0;
    
            d=sqrt((x*x)+(y*y));
            if (d<=a){
                sn++;
            }
        
            aa=a-x;
            d=sqrt((aa*aa)+(y*y));
            if (d<=a){
                sn++;
            }
        
            bb=a-y;
            d=sqrt((x*x)+(bb*bb));
            if (d<=a){
                sn++;
            }

            d=sqrt((aa*aa)+(bb*bb));
            if (d<=a){
                sn++;
            }
        
            if (sn==4){
                m++;
            }
        }
        area=m*a*a/n;
        printf("%.5lf\n", area);
    }
    
    return 0;
}
