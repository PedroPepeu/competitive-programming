#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, D, M;
    // T minutos seguidos para ficar descancado, D duracao do voo, M numero de pratos servidos
    cin >> T >> D >> M;

    int Mtime[M + 1];
    memset(Mtime, -1, sizeof(Mtime));

    for(int i = 0; i < sizeof(Mtime) - 1; i++)  {
        cin >> Mtime[i];
    }
    Mtime[M + 1] = D;

    for(int i = 0; i < sizeof(Mtime); i++) {
        cout << Mtime[i] << endl;
    }
    // so precisa ficar desncancado uma vez

    // if() {
    //     cout << "Y" << endl;
    // } else if() {
    //     cout << "N"  << endl;
    // }

    return 0;
}