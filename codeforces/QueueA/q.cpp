#include <bits/stdc++.h>

using namespace std;

int isBigger(int x, int y) {
    if(x > y) return y;
    else return x;
}

int main() {
    int n;
    cin >> n;
    
    int payment, debt, payment_i;
    vector<int> cells = {1, 5, 10, 20, 50};
    vector<int> chains (5, 0);
    
    int chck = 1;
    for(int i = 0; i < n; i++) {
        vector<int> chains_temp (5, 0);
        cin >> payment;
        debt = 0;

        for(int j = 0; j < 5; j++) {
            cin >> payment_i;
            debt+=(payment_i*cells[j]);
            chains[j]+=payment_i;
        }
        
        debt-=payment;

        int fiv = debt%50;
        fiv = isBigger(fiv, chains[4]);
        if(fiv > 0 && debt >= 50) {
            debt-=(50*fiv);
            chains[4]-=fiv;
        }
        int twe = debt%20;
        twe = isBigger(twe, chains[3]);
        if(twe > 0 && debt >= 20) {
            debt-=(20*twe);
            chains[3]-=twe;
        }
        int ten = debt%10;
        ten = isBigger(ten, chains[2]);
        if(ten > 0 && debt >= 10) {
            debt-=(10*ten);
            chains[2]-=ten;
        }
        int five = debt%5;
        five = isBigger(five, chains[1]);
        if(five > 0 && debt >= 5) {
            debt-=(5*five);
            chains[1]-=five;
        } 
        int one = debt;
        one = isBigger(one, chains[0]);
        if(one > 0 && debt >= 1) {
            debt-=(one);
            chains[0]-=one;
        }

        if(debt > 0) {
            cout << "no" << endl;
            chck=0;
            break;
        }
    }

    if(chck) {
        cout << "yes" << endl;
    }

    return 0;
}
