#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

int loggin(int a, int b) {
    return log2(a)/log2(b);
}

int main() {

    char l, r;
    long double le, ri, x, h, e, exp, d, t, humi;
    while(scanf("%c %Lf %c %Lf", &l, &le, &r, &ri) && (l != 'E' || r != 'E')) {
        if(l == 'T' && r == 'D' || r == 'T' && l == 'D') {

            if(r == 'D') d = ri, t = le;
            else d = le, t = ri;

            h = (0.5555) * ((6.11 * (pow(2.718281828, (5417.7530 * ((1/273.16) - (1/(d+273.16))))))-10.0);

            humi = t + h;

            printf("T %.1Lf D %.1Lf H %.1Lf\n", t, d, humi);
            continue;
        } else if(l == 'T' && r == 'H' || r == 'T' && l == 'H') {

            if(r == 'T') humi = ri, t = le;
            else humi = le, t = ri;

            h = humi - t;

            e = (h + 5.555) / 0.5555;

            exp = e / 6.11;

            x = loggin(exp, 2.718281828);

            d = ( 1 / ( (x/541707530) - (1/273.16) ) ) - 273.16;

            printf("T %.1Lf D %.1Lf H %.1Lf\n", t, d, humi);
            continue;
        } else if(l == 'H' && r == 'D' || r == 'H' && l == 'D') {
            
            if(r == 'H') d = ri, humi = le;
            else d = le, humi = ri;

            h = (0.5555) * ((6.11 * (pow(2.718281828, (5417.7530 * ((1/273.16) - (1/(d+273.16))))))-10.0);

            t = humi - h;

            printf("T %.1Lf D %.1Lf H %.1Lf\n", t, d, humi);
            continue;
        } else break;
    }
    return 0;
}
