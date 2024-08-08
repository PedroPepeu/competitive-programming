#include <iostream>

using namespace std;

int main() {

    int turnLeft, turnRight, turnUp, turnDown, dangerousCurves = 0;

    int n;
    cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    n--;
    while(n--) {
        cin >> x2 >> y2;
        
        if(x2 > x1) {
            turnLeft = 0;
            turnRight = 1;
        }
        else if(x1 > x2) {
            turnRight = 0;
            turnLeft = 1;
        }
        else if(y2 > y1) {
            turnDown = 0;
            turnUp = 1;
        }
        else if(y1 > y2) {
            turnUp = 0;
            turnDown = 1;
        }

        if(turnUp && turnLeft || turnLeft && turnDown || turnDown && turnRight || turnRight && turnUp) {
            dangerousCurves++;
            turnUp = 0;
            turnDown = 0;
            turnRight = 0;
            turnLeft = 0;
        }

        x1 = x2;
        y1 = y2;
    }

    cout << dangerousCurves - 2 << endl;
    
    return 0;
}
