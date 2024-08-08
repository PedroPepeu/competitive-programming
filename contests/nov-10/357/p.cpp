#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    int n;
    while(cin >> n) {
        int v;
        ll ways = 1;
        cin >> v;
        
        if(v%5==0) ways++;
        if(v%10==0) ways++;
        if(v%25==0) ways++;
        if(v%50==0) ways++;


        
    }
    return 0;
}
