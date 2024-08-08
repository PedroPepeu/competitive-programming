#include <iostream>
using namespace std;

typedef long long int ll;

ll k;

ll trn(ll n) {
    ll aux = 0;
    while(n>0) {
        aux += n%10;
        n/=10;
    }
    return aux;
}

int div(ll j, ll k){
    trn(j) % k == 0 ? return 1 : return 0;
}

int main() {
    ll t,a,b, resto, cont;
    int sn;
    
    cin >> t;
    
    while(t--) {
        cin >> a >> b >> k;

        ll in = a + k + (a % k);
        cont=0;
        for(ll i = in; i<=b; i+=k){
            if (div(j)) cont++; 
        }
        printf("%d\n", cont);
    }

    return 0;
}
