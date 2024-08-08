#include <iostream>
#include <climits>

using namespace std;

long long prc(long long n, long long c) {
    if(n == 1) return c;

    if(n % 2 == 0) {
        return prc(n/2, c + 1);
    } else {
        return prc((n*3) + 1, c + 1);
    }

}

int main() {
    int s, p;
    while(cin >> s >> p) {
        
        int ss = s;
        int pp = p;
            
        if(s > p) {
            int temp = s;
            s = p;
            p = temp;
        }

        int max = INT_MIN;
        for(long long i = s; i <= p; i++) {
            long long cycles = prc(i, 1);
            if(cycles > max) max = cycles;
        }

        cout << ss << " " << pp <<  " " << max << endl;

    }
    return 0;
}
