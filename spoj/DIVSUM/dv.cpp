#include <iostream>
#include <cmath>

using namespace std;

int primechk[500001];
 
void ppc() {
    int i, j;
    for(i=2 ; i <= 500000 ; i++) {
        primechk[i]=1;
    }
    for(i=2 ; i <= 500000 ; i++) {
        if(primechk[i]==1) {
            for(j=2 ; i*j <= 500000 ; j++) {
                primechk[i*j]=0;
            }
        }
    }
}

long long sd(long long num) {
    long long total = 1;

    for (int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            total+=i;
            if(num/i!=i) total+=num/i;
        }
    }
    return total;
}

int main() {
    ppc();
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n == 1) cout << 0 << endl;
        else if(primechk[n] == 1) cout << 1 << endl;
        else cout << sd(n) << endl;
    }
    return 0;
}
