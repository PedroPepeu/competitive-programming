#include <iostream>
#include <cstring>

using namespace std;

int mem[100];

int db(int x) {
    if(x == 0 || x == 1) return 1;

    if(mem[x] != -1) return  x + mem[x];
    else return mem[x] = x * db(x - 1);

}

int main() {

    int x;
    cin >> x;

    memset(mem, -1, sizeof(mem));

    cout << db(x) << endl;
}
