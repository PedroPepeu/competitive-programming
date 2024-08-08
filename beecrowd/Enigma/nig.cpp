#include <bits/stdc++.h>

using namespace std;

char name[10000], cribs[10000];

int main() {

    int answer = 0;
    
    cin >> name;
    cin >> cribs;

    char * ptr1;
    char * ptr2;
    ptr1 = name;
    ptr2 = cribs;
    // *ptr == letra
    for(int i = 0; i + sizeof(cribs) < sizeof(name); ptr1++, i++) {
        int counter = 0;
        while(!(*ptr1 == *ptr2)) {
            counter++;
            ptr1++;
            ptr2++;
            if(counter == sizeof(cribs)) {
                answer++;
                break;
            }
        }
        ptr1 -= counter;
        ptr2 -= counter;
    }
    cout << answer << endl;
}
