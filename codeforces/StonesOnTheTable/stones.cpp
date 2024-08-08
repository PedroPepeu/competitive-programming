#include <iostream>

using namespace std;

int main() {

    int n, rockTookOut = 0;
    cin >> n;

    char atualRock, previousRock;

    cin >> previousRock;
    n--;
    while(n--) {
        cin >> atualRock;

        if(previousRock == atualRock) rockTookOut++;
    
        previousRock = atualRock;
    }

    cout << rockTookOut << endl;
}
