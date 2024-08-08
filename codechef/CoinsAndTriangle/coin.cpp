#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int coins;
        cin >> coins;
        
        int delta = 1 + 8 * coins;
        int square = sqrt(delta);
        int answer = (square - 1) / 2;
        cout << answer << endl;
    }
    
    return 0;

}
