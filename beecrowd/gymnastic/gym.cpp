#include <iostream>
#include <cstring>

using namespace std;

int T, M, N;
long long mem[100005][60]; // change

long long dp(int t, int k) {
    if(t == 1) return 1;

    long long& pdm = mem[t][k];
    if(pdm != -1) return mem[t][k];
    long long result = 0;
    if(k < N) result += dp(t-1, k+1);
    if(k > M) result += dp(t-1, k-1);
    return mem[t][k] = result;
}



int main() {

    // [e fibonacci]

    long long result = 0;
    cin >> T >> M >> N;
    memset(mem, -1, sizeof(mem));
    for(int k = M; k <= N; k++) {
        result += dp(T, k) % (1000000000 + 7);
    }
    result = result % (1000000000 + 7);
    cout << result << endl;

    return 0;

}
