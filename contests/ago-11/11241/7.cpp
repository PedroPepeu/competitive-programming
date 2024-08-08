#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int loggin(int a, int b) {
    return log2(a)/log2(b);
}

int main() {

    string p, s;
    double le, ri, x, h, e, exp, d, t, humi;
    while((cin >> p >> le >> s >> ri) && (p != "E" && s != "E")) {
        char l = p[0], r = s[0];

        if(l == 'T' && r == 'D' || r == 'T' && l == 'D') {

            if(r == 'D') d = ri, t = le;
            else d = le, t = ri;

            x = 5417.7530 * ((1/273.16) - (1/(d+273.16)));

            exp = pow(2.718281828, x);

            e = 6.11 * exp;

            h = (0.5555) * (e-10.0);

            humi = t + h;

            printf("T %.1f D %.1f H %.1f\n", t, d, humi);
            continue;
        } else if(l == 'T' && r == 'H' || r == 'T' && l == 'H') {

            if(r == 'H') humi = ri, t = le;
            else humi = le, t = ri;
            h = 0;
            h = humi - t;

            e = (h + 10) / 0.5555;

            exp = e / 6.11;

            x = loggin(exp, 2.718281828);

            double base1 = 273.16 * x;
            double base2 = base1 - 5417.7530;
            long double frac = 1479913.4094800001/base2;
            double fracc = frac * -1;

            d = fracc - 273.16;

            printf("T %.1f D %.1f H %.1f\n", t, d, humi);
            continue;
        } else if(l == 'H' && r == 'D' || r == 'H' && l == 'D') {
            
            if(r == 'D') d = ri, humi = le;
            else d = le, humi = ri;

            x = 5417.7530 * ((1/273.16) - (1/(d+273.16)));

            exp = pow(2.718281828, x);

            e = 6.11 * exp;

            h = (0.5555) * (e-10.0);

            t = humi - h;

            printf("T %.1f D %.1f H %.1f\n", t, d, humi);
            continue;
        }
    }
    return 0;
}
