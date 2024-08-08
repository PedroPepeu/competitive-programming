#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    string crib;

    cin >> word;
    cin >> crib;

    cout << sizeof(crib) << endl;
    cout << sizeof(word) << endl;

    for(int i = sizeof(crib); i < sizeof(word); i++) {
        cout << i << endl;
    }
}
