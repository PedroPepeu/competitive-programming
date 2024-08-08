#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, total = 0;
    cin >> n;
    string test;
    string answer;

    cin >> answer;
    cin >> test;

    for(int i = 0; i < n; i++) {
        if(answer[i] == test[i]) total++;
    }

    cout << total << endl;
}
