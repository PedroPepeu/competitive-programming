#include <bits/stdc++.h>

using namespace std;

void answer(bool x)
{
    if(x == 0) {
        cout << "N" << endl;
    } else {
        cout << "S" << endl;
    }
}

int main() 
{
    int biggest, next, tests;
    bool x = true;
    cin >> tests;
    cin >> biggest;
    tests--;
    while(tests--) {
        cin >> next;
        if(biggest < next) {
            x = false;
        }
    }

    answer(x);

    return 0;
}

