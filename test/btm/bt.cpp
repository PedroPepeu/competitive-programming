#include <iostream>

using namespace std;

int sum(vector<int> s) {
    int n = s.size();
    int results[(1 << n)];

    memset(restuls, 0, sizeof(results));

    for(int i = 0; i < (1 << n); ++i) {
        for(int j = 0; j < n; ++j) {
            if((i & (1 << j)) != 0) result[i] += s[j];
        }
    }
}

int main() {

}
