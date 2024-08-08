#include <iostream>
#include <utility>
#include <map>
#include <string>

using namespace std;
map<char, int> m;

int calcSum(string str) {
    int sum = 0, x;
    for(auto &x : str) {

        sum += m[x];

        while(sum >= 10) {
            x = sum%10;
            x += sum/10;
            sum = x;
        }
    }

    return sum;
}


int main() {

    int i = 0;
    for(char c = 'a'; c <= 'z'; c++) {
        i == 9 ? i = 1 : i++;
        m[c] = i;
        m[c-32] = i;
    }

    string s, ss;
    while(getline(cin, s) && s != "") {
        getline(cin , ss);
        double l = calcSum(s);
        double r = calcSum(ss);

        if(l < r) {
            double temp = r;
            r = l;
            l = temp;
        }

        double ans = (r*100)/l;
        printf("%.2f %%\n", ans);
    }
    return 0;
}
