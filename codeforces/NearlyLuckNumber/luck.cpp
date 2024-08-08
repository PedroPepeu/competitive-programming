#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    cin >> num;

    int luckerNumber = 0;

    for(int i = 0; i < num.length(); ++i) {
        if(num[i] == '4' || num[i] == '7') luckerNumber++; 
    }

    if(luckerNumber == 7 || luckerNumber == 4) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
