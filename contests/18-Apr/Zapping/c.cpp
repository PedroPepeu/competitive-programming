#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while((cin >> a >> b) && (a != -1 && b != -1)) {
        if(a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        int abv = a + 99 - b + 1;
        int blw = b - a;

        if(abv > blw) {
            cout << blw << endl;
        } else {
            cout << abv << endl;
        }
    }
    return 0;
}
