#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
string s;
int a[100000];
 
int dp(int l, int r) {
    int i = r-1, ans = 0, total = 0;
    for(string::iterator it=s.begin()+r-1; it!=s.begin()+l-1; it--, i--) {
        if(a[i] != -1) {
            total+=a[i];

        }
        if(*it == *(it-1)) ans++;

    }
    return a[l-1] = ans;
}
 
int main() {
    int n;
 
    cin >> s;
    cin >> n;
    int b[n];
    memset(a, -1, sizeof(a));
 
    int l, r;
    for(int i = 0; i < n; i++) {
        cin >> l >> r;
        int c = dp(l, r);
        if(r-l < c) b[i] = r-l;
        else b[i] = c;
    }
 
    for(int i = 0; i < n; i++) {
        cout << b[i] << endl;
    }
    return 0;
}
