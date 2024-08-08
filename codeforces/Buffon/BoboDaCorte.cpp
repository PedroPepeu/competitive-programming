#include <bits/stdc++.h>

using namespace std;

void answer(bool x)
{
    if(x == 0) {
        cout << "N" << endl;
    } else {
        cout << "S" << endl;
    }
}

int main() 
{
    int biggest, next, tests, peopleVoted = 100000;
    bool x = true;
    cin >> tests;
    cin >> biggest;
    peopleVoted -= biggest;
    tests--;
    while(tests-- && peopleVoted > biggest) {
        cin >> next;
        if(biggest < next) {
            x = false;
            break;
        }
        peopleVoted -= next;
    }

    answer(x);

    return 0;
}

