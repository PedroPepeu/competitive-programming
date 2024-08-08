#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int x, y;
    
    cin >> x >> y;

    if(x > y) {
        int temp = y;
        y = x;
        x = temp;
    }
    
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    if(y >= (b + d) && x >= a && x >= c) cout << "S";
    else if(y >= (b + c) && x >= a && x >= d) cout << "S";
    else if(y >= (a + d) && x >= b && x >= c) cout << "S";
    else if(y >= (a + c) && x >= b && x >= d) cout << "S";
    else if(x >= (b + d) && y >= a && y >= c) cout << "S";
    else if(x >= (b + c) && y >= a && y >= d) cout << "S";
    else if(x >= (a + d) && y >= b && y >= c) cout << "S";
    else if(x >= (a + c) && y >= b && y >= d) cout << "S";
    else cout << "N";

    cout << endl;
}
