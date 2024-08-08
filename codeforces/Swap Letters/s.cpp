#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string str1, str2;
    cin >> str1 >> str2;

    string::iterator it1 = str1.begin();
    string::iterator it2 = str2.begin();
    while(it1 != str1.end()) {
        if(*it1 == *it2) {
            it1++;
            it2++;
            continue;
        }


    }
}
