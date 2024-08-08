#include <iostream>

using namespace std;

int main() {
    int n, c, s = 0;
    while(cin >> n && n != 0) {
        cin >> c;
        if(c >= 5) s++;
    }
    cout << s << endl;
}
