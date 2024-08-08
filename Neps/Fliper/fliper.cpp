#include <iostream>

using namespace std;

void options(int porta1, int porta2) {
    if(porta1 == 0) {
        cout << "C" << endl;
        return;
    } else {
        if(porta2 == 0) {
            cout << "B" << endl;
            return;
        }
        cout << "A" << endl;
        return;
    }
    
}

int main() {

    int opc1, opc2;

    cin >> opc1 >> opc2;

    options(opc1, opc2);

    return 0;
}
