#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int c[] = {0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

    int n, i1, i2, j, m;
    cin >> n;


    cin >> i1 >> i2;
    c[i1]--;
    c[i2]--;

    if(i1 > 10) i1 = 10;
    if(i2 > 10) i2 = 10;

    j = i1 + i2;
    cin >> i1 >> i2;
    c[i1]--;
    c[i2]--;
   
    if(i1 > 10) i1 = 10;
    if(i2 > 10) i2 = 10;

    m = i1 + i2;
    
    while(n--) {
        cin >> i1;
    
        c[i1]--;
        
        if(i1 > 10) i1 = 10;
        if(i2 > 10) i2 = 10;
        
        m += i1;
        j += i1;
    }
    // entrada OK

    int mC = min(23 - m, 24 - j);
    
    while(mC < 14 && mC + m < 23) {
        if(c[mC] > 0) {
            cout << mC << endl;
            return 0;
        } 
        mC++;
    }
    cout << "-1" << endl;
    
    return 0;
}
