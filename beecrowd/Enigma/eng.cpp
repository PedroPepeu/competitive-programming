#include <bits/stdc++.h>

using namespace std;

int main() {

    char* ptr;
    char* cribsPtr;
    char name[], cribs[];
    cin >> name;
    cin >> cribs;
    cribsPtr = cribs;
    cout << cribs << endl << cribsPtr << endl;
    for(ptr = &name; ptr < name.size(); ptr++) {
        cout << ptr << endl;
    }

}
