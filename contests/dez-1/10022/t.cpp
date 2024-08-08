#include <bits/stdc++.h>

using namespace std;

int walk(int s, int posA, int potA, int pont, int pos2, int pot2) {
    if(posA == pos2) return s;
    if(potA == pot2) return abs(posA - pos2);
    
    if(pont == 1) {
        pont = 0;
    } else {
        pont = 1;
    }

    if((potA-pot2)-pos2>=0) {
        return(s+2, posA, potA+1, pont, pos2, pot2);
    }// esq
    if((potA-pot2)-pos2<0) {
        return(s+2, posA+2, potA+1, pont, pos2, pot2);
    }// dir
    return(s+3, posA+1, potA+1, pont, pos2, pot2); 
}

int pos(int x, int potx) {
    return abs(x-((potx-1)*(potx-1)));
} 

int pot(int x) {
    for(int i = 1; i < 10000; i++) {
        if(x < i*i) return i;
    }
    return -1;
}

int main() {
    int t, m, n;
    cin >> t;
    while(t--) {
        cin >> m >> n;

        if(m > n) {
            int temp = m;
            m = n;
            n = temp;
        }

        int pot1 = pot(m);
        int pot2 = pot(n);
        
        int pos1 = (m, pot1);
        int pos2 = (n, pot2);

        int p;
        if(pos1 % 2 == 0) p = 0;
        else p = 1;

        int ans = walk(0, pos1, pot1, p, pos2, pot2);
        cout << ans-1 << endl;
    }
}
