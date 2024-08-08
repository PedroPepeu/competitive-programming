#include <iostream>

using namespace std;

int main() {
    int t, counter = 1;
    cin >> t;
    while(t--) {
        int x, y, sum = 0;
        cin >> x >> y;

        if(x % 2 == 0) x++;

        for(int i = x; i <= y; i+=2) {
            sum += i;
        }

        printf("Case %d: %d\n", counter, sum);
        counter++;
    }

    return 0;
}
