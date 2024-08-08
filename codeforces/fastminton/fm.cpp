#include <bits/stdc++.h>

using namespace std;

int point[3][2] = { {1, 0}, {0, 0}, {0, 0} }; // 2 columns, 1 for each   ''   2 lines , first line for points , second for games
// test just put the first line {1, 0}
char cont[50]; // see if I could put in main after

void changeSides() {
    if(point[0][0] == 1) {
        point[0][0] = 0;
        point[0][1] = 1;
    } else {
        point[0][0] = 1;
        point[0][1] = 0;
    }
}

void addPoint() {
    if(point[0][0] == 1) {
        if(point[1][0] == 10 || point[1][0] == point[1][1] + 2 ) { //&& point[1][0] >= 5)
            point[1][0] = 0;
            point[1][1] = 0;
            point[2][0] += 1;
        } else {
            point[1][0] += 1;
        }
    } else if(point[0][1] == 1) {
        if(point[1][1] == 10 || point[1][1] == point[1][0] + 2 ) { //&& point[1][1] >= 5)
            point[1][1] = 0;
            point[1][0] = 0;
            point[2][1] += 1;
        } else {
            point[1][1] += 1;
        }
    }
}

/*
1-
SRSSQSSSSQRRSSQ
0 (1) - 0 (3*)
0 (1) - 1 (3*)
0 - 2 (winner)

0 (1) - 0 (3*)
0 - 2 (winner)
0 - 2 (winner)

output
0 (1) - 0 (3*)
0 (0) - 1 (2*)

error

2-
SRSSQSSSSQRRSS
0 (1) - 0 (3*)
0 (1) - 1 (3*)

output
0 (1) - 0 (3*)
0 (0) - 1 (2*)
0 - 2 (winner)

error

3-
RSRSSRRRRRRRRRRSSSSRRSQ
1 (4*) - 0 (8)

output
2 (winner) - 0

ok

*/

void showResult() {
    if(point[2][0] == 2) {
        cout << point[2][0] << " (winner) - " << point[2][1] << endl;
    } else if(point[2][1] == 2) {
        cout << point[2][0] << " - " << point[2][1] << " (winner)" << endl;
    } else if(point[0][0] == 1) {
        cout << point[2][0] << " (" << point[1][0] << "*) - " << point[2][1] << " (" << point[1][1] << ")" << endl;
    } else if(point[0][1] == 1) {
        cout << point[2][0] << " (" << point[1][0] << ") - " << point[2][1] << " (" << point[1][1] << "*)" << endl;
    }
}

int main() {
    int i = 0;
    memset(cont, 'A', sizeof(cont));
    cin >> cont;
    // cout << cont << endl;
    // Games by Left (current PL) - Games by Right (current PR)
    // put an * in the current next server
    // if the game has finished announcement "GL - GR" with the string "(winner)" ex.: "0 - 2 (winner)"
    while(cont[i] != 'A') {
        if(cont[i] == 'S') {
            addPoint();
        } else if(cont[i] == 'R') {
            changeSides();
            addPoint();
        } else if(cont[i] == 'Q') {
            showResult();
        }
        i++;
    }

    return 0;
}