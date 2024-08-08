#include <iostream>

using namespace std;

int main() {
    
    int x, y;
    cin >> x >> y;

    int lineCounter = 1;
    
    for(int i = 1; i <= y; i ++) {
        if(lineCounter == x) {
            cout << i << endl;
            lineCounter = 1;
            continue;
        }
        cout << i << " ";
        lineCounter++;
    }

    cout << endl;
 
    return 0;
}
