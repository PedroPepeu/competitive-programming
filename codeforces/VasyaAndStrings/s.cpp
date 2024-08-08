#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    // do a counter to each letter a and b, count the equals and the k of the other letters, an then compare using max, it will be O(2n) 
    
    int out = 0;
    int c1 = 0;
    int f = 0, m = 0, l = 0;
    for(string::iterator it = s.begin(); it != s.end(); it++) {
        if(*it == 'a') {
            if(c1 == 0) {
                f++;
            } else {
                l++;    
            }
        } else {
            if(c1 == 1 && *(it-1) == 'a') {
                if(m > k) {
                    int ans = max(f+k, k+l);
                    out = max(out, ans);
                } else out = max(out, f+m+l);
                f = l;
                m = l = 0;
            }
            c1 = 1;
            m++;
        }
    }

    if(m > k) {
        int ans = max(f+k, k+l);
        out = max(out, ans);
    } else out = max(out, f+m+l);
    f = m = l = c1 = 0;

    for(string::iterator it = s.begin(); it != s.end(); it++) {
        if(*it == 'b') {
            if(c1 == 0) {
                f++;
            } else {
                l++;    
            }
        } else {
            if(c1 == 1 && *(it-1) == 'a') {
                if(m > k) {
                    int ans = max(f+k, k+l);
                    out = max(out, ans);
                } else out = max(out, f+m+l);
                f = l;
                m = l = 0;
            }
            c1 = 1;
            m++;
        }
    }
    
    if(m > k) {
        int ans = max(f+k, k+l);
        out = max(out, ans);
    } else out = max(out, f+m+l);
    
    cout << out << endl;
    return 0;
}
