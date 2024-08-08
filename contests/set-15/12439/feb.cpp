#include <iostream>
#include <string>

typedef long long int ll;

using namespace std;

int main() {
    string m1, m2, v;
    int d1, d2, y1, y2;
    bool y1q, y2q;
    ll days, years, months;

    cin >> m1 >> d1 >> v >> y1;
    cin >> m2 >> d2 >> v >> y2;

    if(y1 % 4 == 0 && ((y1%400 == 0 && y1%100 == 0) || y1%100 != 0)) {
        y1q = true;
    } else y1q = false;

    if(y2 % 4 == 0 && ((y2%400 == 0 && y2%100 == 0) || y2%100 != 0)) {
        y2q = true;
    } else y2q = false;

    if(y1 - y2 > 0) {
        
    }
    
}
