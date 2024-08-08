#include <iostream>

using namespace std;

int main() {
    float d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;

    double time = (L - d)/(v1 + v2);

    printf("%f\n", time);

    return 0;

}
