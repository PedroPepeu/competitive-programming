#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int tests, x, counter = 0;
    
    cin >> tests;
    while(tests > 0) {
        cin >> x;
        if(x != 1) {
            counter++;
        }
        tests--;
    }
    
    cout << counter << endl;
 
    return 0;
}
